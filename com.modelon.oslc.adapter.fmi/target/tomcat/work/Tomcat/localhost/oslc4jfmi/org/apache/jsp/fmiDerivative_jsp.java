/*
 * Generated by the Jasper component of Apache Tomcat
 * Version: Apache Tomcat/7.0.47
 * Generated at: 2016-07-30 06:34:56 UTC
 * Note: The last modified time of this file was set to
 *       the last modified time of the source file after
 *       generation to assist with modification tracking.
 */
package org.apache.jsp;

import javax.servlet.*;
import javax.servlet.http.*;
import javax.servlet.jsp.*;
import org.eclipse.lyo.oslc4j.core.model.ServiceProviderCatalog;
import org.eclipse.lyo.oslc4j.core.model.ServiceProvider;
import org.eclipse.lyo.oslc4j.core.model.Link;
import java.util.List;
import java.util.ArrayList;
import java.util.Map;
import java.net.URLDecoder;
import java.net.URLEncoder;
import org.eclipse.lyo.oslc4j.core.model.ServiceProviderCatalog;
import org.eclipse.lyo.oslc4j.core.model.ServiceProvider;
import org.eclipse.lyo.oslc4j.core.model.Link;
import com.modelon.oslc.adapter.fmi.resources.FMIDerivative;
import com.modelon.oslc.adapter.fmi.application.Domain2OSLCManager;

public final class fmiDerivative_jsp extends org.apache.jasper.runtime.HttpJspBase
    implements org.apache.jasper.runtime.JspSourceDependent {

  private static final javax.servlet.jsp.JspFactory _jspxFactory =
          javax.servlet.jsp.JspFactory.getDefaultFactory();

  private static java.util.Map<java.lang.String,java.lang.Long> _jspx_dependants;

  private javax.el.ExpressionFactory _el_expressionfactory;
  private org.apache.tomcat.InstanceManager _jsp_instancemanager;

  public java.util.Map<java.lang.String,java.lang.Long> getDependants() {
    return _jspx_dependants;
  }

  public void _jspInit() {
    _el_expressionfactory = _jspxFactory.getJspApplicationContext(getServletConfig().getServletContext()).getExpressionFactory();
    _jsp_instancemanager = org.apache.jasper.runtime.InstanceManagerFactory.getInstanceManager(getServletConfig());
  }

  public void _jspDestroy() {
  }

  public void _jspService(final javax.servlet.http.HttpServletRequest request, final javax.servlet.http.HttpServletResponse response)
        throws java.io.IOException, javax.servlet.ServletException {

    final javax.servlet.jsp.PageContext pageContext;
    javax.servlet.http.HttpSession session = null;
    final javax.servlet.ServletContext application;
    final javax.servlet.ServletConfig config;
    javax.servlet.jsp.JspWriter out = null;
    final java.lang.Object page = this;
    javax.servlet.jsp.JspWriter _jspx_out = null;
    javax.servlet.jsp.PageContext _jspx_page_context = null;


    try {
      response.setContentType("text/html;charset=UTF-8");
      pageContext = _jspxFactory.getPageContext(this, request, response,
      			null, true, 8192, true);
      _jspx_page_context = pageContext;
      application = pageContext.getServletContext();
      config = pageContext.getServletConfig();
      session = pageContext.getSession();
      out = pageContext.getOut();
      _jspx_out = out;

      out.write('\n');
      out.write("\n");
      out.write("\n");
      out.write("\n");
      out.write("\n");
      out.write("\n");
      out.write("\n");
      out.write("\n");
      out.write("\n");
      out.write("\n");
      out.write("\n");
      out.write("\n");
      out.write("\n");
      out.write("\n");
      out.write("\n");
      out.write("\n");
      out.write("\n");
      out.write("\n");

  String fmuFileName = (String)request.getAttribute("fmuFileName");
  String identifier = (String)request.getAttribute("identifier");
  String pageString = (String)request.getAttribute("pageString");
  FMIDerivative fmiDerivative = Domain2OSLCManager.getFMIDerivativeMapByIdentifier(fmuFileName, identifier);
  ServiceProvider provider = (ServiceProvider)request.getAttribute("provider");
  String serviceProvidersURI = request.getScheme() + "://" + request.getServerName() + ":" + request.getServerPort() + 
    "/oslc4jfmi/services/catalog/";

  String servicesURI = request.getScheme() + "://" + request.getServerName() + ":" + request.getServerPort() + "/oslc4jfmi/services/serviceProviders/" + fmuFileName;
  String derivativeURI = request.getScheme() + "://" + request.getServerName() + ":" + request.getServerPort() + 
    "/oslc4jfmi/services/" + fmuFileName + "/Derivative/" + identifier;

      out.write("\n");
      out.write("\n");
      out.write("<!DOCTYPE html>\n");
      out.write("<html lang=\"en\">\n");
      out.write("<head>\n");
      out.write("  <meta charset=\"utf-8\">\n");
      out.write("  <meta http-equiv=\"X-UA-Compatible\" content=\"IE=edge\">\n");
      out.write("  <meta name=\"viewport\" content=\"width=device-width, initial-scale=1\">\n");
      out.write("  <title>OSLC FMIADAPTER 1.1.0</title>\n");
      out.write("  <link rel=\"shortcut icon\" href=\"");
      out.print(request.getContextPath());
      out.write("/images/favicon.ico\" />\n");
      out.write("  <link href=\"");
      out.print(request.getContextPath());
      out.write("/css/style.css\" rel=\"stylesheet\">\n");
      out.write("  <link href=\"");
      out.print(request.getContextPath());
      out.write("/css/bootstrap.min.css\" rel=\"stylesheet\">\n");
      out.write("</head>\n");
      out.write("<body class=\"container\">\n");
      out.write("\n");
      out.write("<div class=\"row\" style=\"z-index:100;position: fixed;top:0;\"><ol class=\"breadcrumb\">\n");
      out.write("  <li><a href=\"");
      out.print( serviceProvidersURI );
      out.write("\">Service Catalog</a></li>\n");
      out.write("  <li class=\"active\"><b>");
      out.print( fmuFileName );
      out.write("</b></li>\n");
      out.write("  <li><a href=\"");
      out.print( servicesURI );
      out.write("\">OSLC Services</a></li>\n");
      out.write("  <li class=\"active\"><b>Derivative Query Capability</b></li>\n");
      out.write("</ol></div>\n");
      out.write("\n");
      out.write("<div class=\"row alert alert-success\">\n");
      out.write("<h1 style=\"margin-top:0px;\">Derivative Query Capability</h1>\n");
      out.write("<p class=\"lead\"><b>");
      out.print( fmuFileName );
      out.write("</b></p>\n");
      out.write("This document: <a href=\"");
      out.print( derivativeURI );
      out.write('"');
      out.write('>');
      out.write(' ');
      out.print( derivativeURI );
      out.write("</a>\n");
      out.write("</div>\n");
      out.write("\n");
      out.write("<h4>Attributes</h4> \n");
      out.write("  <div class=\"container\">\n");
      out.write("  ");
  if (fmiDerivative != null) { 
      out.write("\n");
      out.write("  <div class=\"col-md-12\"><b>Identifier</b><br>\n");
      out.write("  ");
      out.print( fmiDerivative.getIdentifier() );
      out.write("&nbsp;</div><hr>\n");
      out.write("  ");
  } 
      out.write('\n');
      out.write(' ');
      out.write(' ');
  if (fmiDerivative != null) { 
      out.write("\n");
      out.write("  <div class=\"col-md-12\"><b>Name</b><br>\n");
      out.write("  ");
      out.print( fmiDerivative.getName() );
      out.write("&nbsp;</div><hr>\n");
      out.write("  ");
  } 
      out.write('\n');
      out.write(' ');
      out.write(' ');
  if (fmiDerivative != null) { 
      out.write("\n");
      out.write("  <div class=\"col-md-12\"><b>Index</b><br>\n");
      out.write("  ");
      out.print( fmiDerivative.getIndex() );
      out.write("&nbsp;</div><hr>\n");
      out.write("  ");
  } 
      out.write('\n');
      out.write(' ');
      out.write(' ');
  if (fmiDerivative != null) { 
      out.write("\n");
      out.write("  <div class=\"col-md-12\"><b>Dependencies</b><br>\n");
      out.write("  ");
      out.print( fmiDerivative.getDependencies() );
      out.write("&nbsp;</div><hr>\n");
      out.write("  ");
  } 
      out.write('\n');
      out.write(' ');
      out.write(' ');
  if (fmiDerivative != null) { 
      out.write("\n");
      out.write("  <div class=\"col-md-12\"><b>DependenciesKind</b><br>\n");
      out.write("  ");
      out.print( fmiDerivative.getDependenciesKind() );
      out.write("&nbsp;</div><hr>\n");
      out.write("  ");
  } 
      out.write("\n");
      out.write("  </div>\n");
      out.write("</body>\n");
      out.write("</html>\n");
    } catch (java.lang.Throwable t) {
      if (!(t instanceof javax.servlet.jsp.SkipPageException)){
        out = _jspx_out;
        if (out != null && out.getBufferSize() != 0)
          try { out.clearBuffer(); } catch (java.io.IOException e) {}
        if (_jspx_page_context != null) _jspx_page_context.handlePageException(t);
        else throw new ServletException(t);
      }
    } finally {
      _jspxFactory.releasePageContext(_jspx_page_context);
    }
  }
}
