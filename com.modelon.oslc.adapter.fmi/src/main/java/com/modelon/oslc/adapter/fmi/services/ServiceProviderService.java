/*
* ServiceProviderService.java    1.1.0  2016-07-23
*  
* Copyright (c) 2016 Modelon AB  http://www.modelon.com
* 
*  All rights reserved. This program and the accompanying materials
*  are made available under the terms of the Eclipse Public License v1.0
*  and Eclipse Distribution License v. 1.0 which accompanies this distribution.
*
*  The Eclipse Public License is available at http://www.eclipse.org/legal/epl-v10.html
*  and the Eclipse Distribution License is available at
*  http://www.eclipse.org/org/documents/edl-v10.php.
* 
*  @author Vorachet Jaroensawas, Koneksys (vorachet.jaroensawas@koneksys.com)
*  @author Axel Reichwein, Koneksys (axel.reichwein@koneksys.com)
*/

package com.modelon.oslc.adapter.fmi.services;

import javax.servlet.RequestDispatcher;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.ws.rs.GET;
import javax.ws.rs.Path;
import javax.ws.rs.PathParam;
import javax.ws.rs.Produces;
import javax.ws.rs.WebApplicationException;
import javax.ws.rs.core.Context;
import javax.ws.rs.core.Response.Status;
import javax.ws.rs.core.MediaType;

import org.eclipse.lyo.oslc4j.core.annotation.OslcQueryCapability;
import org.eclipse.lyo.oslc4j.core.annotation.OslcService;
import org.eclipse.lyo.oslc4j.core.model.OslcConstants;
import org.eclipse.lyo.oslc4j.core.model.OslcMediaType;
import org.eclipse.lyo.oslc4j.core.model.ServiceProvider;

import com.modelon.oslc.adapter.fmi.application.Domain2OSLCManager;

@OslcService(OslcConstants.OSLC_CORE_DOMAIN)
@Path("serviceProviders")
public class ServiceProviderService {
  @Context private HttpServletRequest httpServletRequest;
  @Context private HttpServletResponse httpServletResponse;
  @OslcQueryCapability
  (
    title = "Service Provider Query Capability",
    label = "Service Provider Query",
    resourceShape = OslcConstants.PATH_RESOURCE_SHAPES + "/" + OslcConstants.PATH_SERVICE_PROVIDER,
    resourceTypes = {OslcConstants.TYPE_SERVICE_PROVIDER},
    usages = {OslcConstants.OSLC_USAGE_DEFAULT}
  )
  @GET
  @Produces({OslcMediaType.APPLICATION_RDF_XML, OslcMediaType.APPLICATION_XML, OslcMediaType.APPLICATION_JSON})
  public ServiceProvider[] getServiceProviders() {
    httpServletResponse.addHeader("Oslc-Core-Version","2.0");
    try { 
      return Domain2OSLCManager.getServiceProviders();
    } catch (Exception e) {
      e.printStackTrace();
      throw new WebApplicationException(Status.INTERNAL_SERVER_ERROR);
    }
  }

  @GET
  @Path("{fmuFileName}")
  @Produces({OslcMediaType.APPLICATION_RDF_XML, OslcMediaType.APPLICATION_XML, OslcMediaType.APPLICATION_JSON})
  public ServiceProvider getServiceProvider(@PathParam("fmuFileName") final String fmuFileName) {
    httpServletResponse.addHeader("Oslc-Core-Version","2.0");
    try { 
      return Domain2OSLCManager.getServiceProvider(fmuFileName) ;
    } catch (Exception e) {
      e.printStackTrace();
      throw new WebApplicationException(Status.INTERNAL_SERVER_ERROR);
    }
  }

  @GET
  @Produces(MediaType.TEXT_HTML)
  public void getHtmlServiceProviders() {
    try {
      Domain2OSLCManager manager = Domain2OSLCManager.getInstance(null);
      httpServletRequest.setAttribute("manager", manager);
      RequestDispatcher rd = httpServletRequest.getRequestDispatcher("/fmiProviderList.jsp");
      rd.forward(httpServletRequest, httpServletResponse);
    } catch (Exception e) {
      e.printStackTrace();
      throw new WebApplicationException(e);
    }
  }

  @GET
  @Path("{fmuFileName}")
  @Produces(MediaType.TEXT_HTML)
  public void getHtmlServiceProvider(@PathParam("fmuFileName") final String fmuFileName) {
    try {
      httpServletRequest.setAttribute("fmuFileName", fmuFileName);
      httpServletRequest.setAttribute("provider", Domain2OSLCManager.getServiceProvider(fmuFileName));
      RequestDispatcher rd = httpServletRequest.getRequestDispatcher("/fmiProvider.jsp");
      rd.forward(httpServletRequest, httpServletResponse);
    } catch (Exception e) {
      e.printStackTrace();
      throw new WebApplicationException(e);
    }
  }
}
