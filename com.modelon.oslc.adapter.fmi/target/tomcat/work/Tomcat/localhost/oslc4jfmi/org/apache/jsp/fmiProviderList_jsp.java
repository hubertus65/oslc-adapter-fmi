/*
 * Generated by the Jasper component of Apache Tomcat
 * Version: Apache Tomcat/7.0.47
 * Generated at: 2016-07-30 06:34:50 UTC
 * Note: The last modified time of this file was set to
 *       the last modified time of the source file after
 *       generation to assist with modification tracking.
 */
package org.apache.jsp;

import javax.servlet.*;
import javax.servlet.http.*;
import javax.servlet.jsp.*;
import java.util.List;
import java.util.Map;
import java.net.URLDecoder;
import java.net.URLEncoder;
import org.eclipse.lyo.oslc4j.core.model.ServiceProviderCatalog;
import org.eclipse.lyo.oslc4j.core.model.ServiceProvider;
import org.eclipse.lyo.oslc4j.core.model.Link;
import org.eclipse.lyo.oslc4j.core.model.ServiceProviderCatalog;
import org.eclipse.lyo.oslc4j.core.model.ServiceProvider;
import org.eclipse.lyo.oslc4j.core.model.Link;
import com.modelon.oslc.adapter.fmi.application.Domain2OSLCManager;
import com.modelon.oslc.adapter.fmi.resources.FMIFMU;

public final class fmiProviderList_jsp extends org.apache.jasper.runtime.HttpJspBase
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

ServiceProviderCatalog catalog = Domain2OSLCManager.getServiceProviderCatalog();
String serviceProviderCatalogURI = request.getScheme() + "://" + request.getServerName() + ":" + request.getServerPort() + 
  "/oslc4jfmi/services/catalog";
String serviceProvidersURI = request.getScheme() + "://" + request.getServerName() + ":" + request.getServerPort() + 
  "/oslc4jfmi/services/serviceProviders";
String rdfVocabularyURI = request.getScheme() + "://" + request.getServerName() + ":" + request.getServerPort() + 
  "/oslc4jfmi/services/rdfvocabulary";
String resourceShapesURI = request.getScheme() + "://" + request.getServerName() + ":" + request.getServerPort() + 
  "/oslc4jfmi/services/resourceShapes";

      out.write("\n");
      out.write("\n");
      out.write("<!DOCTYPE html>\n");
      out.write("<html lang=\"en\">\n");
      out.write("  <head>\n");
      out.write("    <meta charset=\"utf-8\">\n");
      out.write("    <meta http-equiv=\"X-UA-Compatible\" content=\"IE=edge\">\n");
      out.write("    <meta name=\"viewport\" content=\"width=device-width, initial-scale=1\">\n");
      out.write("    <title>OSLC FMI ADAPTER 1.1.0</title>\n");
      out.write("    <link rel=\"shortcut icon\" href=\"");
      out.print(request.getContextPath());
      out.write("/images/favicon.ico\" />\n");
      out.write("    <link href=\"");
      out.print(request.getContextPath());
      out.write("/css/style.css\" rel=\"stylesheet\">\n");
      out.write("    <link href=\"");
      out.print(request.getContextPath());
      out.write("/css/bootstrap.min.css\" rel=\"stylesheet\">\n");
      out.write("  </head>\n");
      out.write("  <body class=\"container\">\n");
      out.write("\n");
      out.write("    <div class=\"col-md-12 media alert alert-success\">\n");
      out.write("      <h1 style=\"margin-top:0px;\">Service Provider Catalog</h1>\n");
      out.write("      <p>\n");
      out.write("      <a href=\"");
      out.print( serviceProviderCatalogURI );
      out.write("\"> <span class=\"glyphicon glyphicon-globe\" aria-hidden=\"true\"></span> ");
      out.print( serviceProviderCatalogURI );
      out.write("</a>\n");
      out.write("      <br>Adapter Publisher: <a href=\"#\" target=\"_blank\">");
      out.print( catalog.getPublisher().getTitle() );
      out.write("</a>\n");
      out.write("      <br>Adapter Identity: ");
      out.print( catalog.getPublisher().getIdentifier() );
      out.write("\n");
      out.write("      </p>\n");
      out.write("    </div>\n");
      out.write("    \n");
      out.write("    <div class=\"col-md-12 alert alert-success\">\n");
      out.write("      <h1 style=\"margin-top:0px;\">Service Providers</h1>\n");
      out.write("      <p>\n");
      out.write("      <a href=\"");
      out.print( serviceProvidersURI );
      out.write("\"> <span class=\"glyphicon glyphicon-globe\" aria-hidden=\"true\"></span> ");
      out.print( serviceProvidersURI );
      out.write("</a>\n");
      out.write("      </p>\n");
      out.write("    </div>\n");
      out.write("\n");
      out.write("    <div class=\"col-md-12 row\">\n");
      out.write("    ");
 
      for(FMIFMU theFMIFMU : Domain2OSLCManager.getTopLevelConcept()) {
        String serviceProviderIdentifier = theFMIFMU.getIdentifier();
        ServiceProvider serviceProvider = Domain2OSLCManager.getServiceProvider(serviceProviderIdentifier);
    
      out.write("\n");
      out.write("        <div class=\"col-md-12\">\n");
      out.write("          \n");
      out.write("          <h4>\n");
      out.write("            ");

            if (theFMIFMU.getFmiVersion().equals("1.0")) {
              
      out.write("\n");
      out.write("                <span class=\"label label-primary\">FMI 1.0</span>\n");
      out.write("              ");

            } else if (theFMIFMU.getFmiVersion().equals("2.0")) {
              
      out.write("\n");
      out.write("                <span class=\"label label-success\">FMI 2.0</span>\n");
      out.write("              ");

            } else {
              
      out.write("\n");
      out.write("                <span class=\"label label-danger\">Unknown FMI version</span>\n");
      out.write("              ");

            }
            
      out.write("\n");
      out.write("            ");

            if (theFMIFMU.getIsModelExchangeFMU().equals("true")) {
              
      out.write("\n");
      out.write("                <span class=\"label label-warning\">ME</span>\n");
      out.write("              ");

            } else if (theFMIFMU.getIsCoSimulationFMU().equals("true")) {
              
      out.write("\n");
      out.write("                <span class=\"label label-info\">CS</span>\n");
      out.write("              ");

            } else {
              
      out.write("\n");
      out.write("                <span class=\"label label-danger\">Unknown</span>\n");
      out.write("              ");

            }
            
      out.write("\n");
      out.write("            <a href=\"");
      out.print( serviceProvider.getAbout().toString() );
      out.write("\">\n");
      out.write("              ");
      out.print( serviceProviderIdentifier );
      out.write(".fmu\n");
      out.write("            </a>\n");
      out.write("          </h4>\n");
      out.write("        </div>\n");
      out.write("    ");

     }
    
      out.write("\n");
      out.write("    </div>\n");
      out.write("\n");
      out.write("  </body>\n");
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
