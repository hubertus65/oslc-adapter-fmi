/*
* FMITypeDefinitionService.java    1.1.0  2016-07-23
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

import java.util.List;
import java.util.ArrayList;

import javax.servlet.RequestDispatcher;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.ws.rs.GET;
import javax.ws.rs.Path;
import javax.ws.rs.Produces;
import javax.ws.rs.PathParam;
import javax.ws.rs.QueryParam;
import javax.ws.rs.WebApplicationException;
import javax.ws.rs.core.Context;
import javax.ws.rs.core.MediaType;
import javax.ws.rs.core.UriInfo;

import org.eclipse.lyo.oslc4j.core.annotation.OslcQueryCapability;
import org.eclipse.lyo.oslc4j.core.annotation.OslcService;
import org.eclipse.lyo.oslc4j.core.model.OslcConstants;
import org.eclipse.lyo.oslc4j.core.model.OslcMediaType;

import com.modelon.oslc.adapter.fmi.application.Domain2OSLCManager;

import com.modelon.oslc.adapter.fmi.resources.Constants;
import com.modelon.oslc.adapter.fmi.resources.FMITypeDefinition;

@OslcService(Constants.FMI_TYPEDEFINITION_DOMAIN)
@Path("{fmuFileName}/TypeDefinition")
public class FMITypeDefinitionService {
  @Context private HttpServletRequest httpServletRequest;
  @Context private HttpServletResponse httpServletResponse;
  @Context private UriInfo uriInfo;
  @OslcQueryCapability(title = "TypeDefinition Query Capability",
    label = "TypeDefinition Query Capability",
    resourceShape = OslcConstants.PATH_RESOURCE_SHAPES + "/" + Constants.PATH_FMI_TYPEDEFINITION,
    resourceTypes = { Constants.TYPE_FMI_TYPEDEFINITION}, usages = { OslcConstants.OSLC_USAGE_DEFAULT })
  @GET
  @Produces({ OslcMediaType.APPLICATION_RDF_XML,OslcMediaType.APPLICATION_XML, OslcMediaType.APPLICATION_JSON })
  public List<FMITypeDefinition> getFMITypeDefinitionList(
    @PathParam("fmuFileName") final String fmuFileName,
    @QueryParam("identifier") final String identifier,
    @QueryParam("oslc.where") final String where,
    @QueryParam("oslc.select") final String select,
    @QueryParam("oslc.prefix") final String prefix,
    @QueryParam("page") final String pageString,
    @QueryParam("oslc.orderBy") final String orderBy,
    @QueryParam("oslc.searchTerms") final String searchTerms,
    @QueryParam("oslc.paging") final String paging,
    @QueryParam("oslc.pageSize") final String pageSize)
      throws Exception {
      if (identifier != null) {
        List<FMITypeDefinition> obj = new ArrayList<FMITypeDefinition>();
        obj.add(Domain2OSLCManager.getFMITypeDefinitionMapByIdentifier(fmuFileName, identifier));
        return obj;
      } else { 
        return Domain2OSLCManager.getFMITypeDefinitionMap(fmuFileName);
      }
    }

  @GET
  @Path("{identifier}")
  @Produces({ OslcMediaType.APPLICATION_RDF_XML,OslcMediaType.APPLICATION_XML, OslcMediaType.APPLICATION_JSON })
  public FMITypeDefinition getFMITypeDefinition(
    @PathParam("fmuFileName") final String fmuFileName,
    @PathParam("identifier") final String identifier) 
      throws Exception {
        return Domain2OSLCManager.getFMITypeDefinitionMapByIdentifier(fmuFileName, identifier);
    }

  @GET
  @Produces(MediaType.TEXT_HTML)
  public void getHtmlFMITypeDefinitionList(
    @PathParam("fmuFileName") final String fmuFileName,
    @QueryParam("identifier") final String identifier,
    @QueryParam("page") final String pageString) {
    try {
      httpServletRequest.setAttribute("fmuFileName", fmuFileName);
      httpServletRequest.setAttribute("pageString", pageString);
      httpServletRequest.setAttribute("identifier", identifier);
      httpServletRequest.setAttribute("provider", Domain2OSLCManager.getServiceProvider(fmuFileName));
      RequestDispatcher rd = httpServletRequest.getRequestDispatcher("/fmiTypeDefinitionList.jsp");
      rd.forward(httpServletRequest, httpServletResponse);
    } catch (Exception e) {
      e.printStackTrace();
      throw new WebApplicationException(e);
    } 
  }

  @GET
  @Path("{identifier}")
  @Produces(MediaType.TEXT_HTML)
  public void getHtmlFMITypeDefinition(
    @PathParam("fmuFileName") final String fmuFileName,
    @PathParam("identifier") final String identifier,
    @QueryParam("page") final String pageString) {
    try {
      httpServletRequest.setAttribute("fmuFileName", fmuFileName);
      httpServletRequest.setAttribute("pageString", pageString);
      httpServletRequest.setAttribute("identifier", identifier);
      httpServletRequest.setAttribute("provider", Domain2OSLCManager.getServiceProvider(fmuFileName));
      RequestDispatcher rd = httpServletRequest.getRequestDispatcher("/fmiTypeDefinition.jsp");
      rd.forward(httpServletRequest, httpServletResponse);
    } catch (Exception e) {
      e.printStackTrace();
      throw new WebApplicationException(e);
    } 
  }
}
