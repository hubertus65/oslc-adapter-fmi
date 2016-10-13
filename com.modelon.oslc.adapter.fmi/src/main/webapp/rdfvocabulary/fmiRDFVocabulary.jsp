<!DOCTYPE html>
<%--
/*
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
* @author Axel Reichwein, Koneksys (axel.reichwein@koneksys.com)
*/
--%>

<%@ page contentType="text/html" language="java" pageEncoding="UTF-8"%>
<%@ page
	import="org.eclipse.lyo.oslc4j.core.model.ServiceProviderCatalog"%>
<%@ page import="org.eclipse.lyo.oslc4j.core.model.ServiceProvider"%>
<%@ page import="org.eclipse.lyo.oslc4j.core.model.Link"%>
<%@ page import="java.net.URI"%>

<%
String requestURL = (String)request.getAttribute("requestURL");
%>
<html>
<head>

<meta http-equiv="Content-Type" content="text/html;charset=utf-8">
<title>FMI OSLC Adapter: FMI RDF Vocabulary</title>
<link rel="stylesheet" type="text/css"
	href="<%=request.getContextPath()%>/css/simple.css">
<link href='http://fonts.googleapis.com/css?family=Open+Sans:400,700'
	rel='stylesheet' type='text/css'>
<link rel="shortcut icon" href="<%=request.getContextPath()%>/images/100px_white-oslc-favicon.ico">


</head>
<body onload="">

	<!-- header -->
	<p id="title">FMI OSLC Adapter: RDF Vocabulary</p>

	<!-- main content -->
	<div id="main-body">
		
		<!-- oslc logo and adapter details -->
		<a id="oslclogo" href="http://open-services.net/" target="_blank"><img
			src="<%=request.getContextPath()%>/images/oslcLg.png"></a>
		
		<br>

		<!-- resource type and name -->
		<h1><span id="metainfo">FMI RDF Vocabulary </span></h1>
		<br>

		<div> 
		
		
		
		<xmp style="padding-left: 25px;">
<?xml version="1.0" encoding="UTF-8"?>
<rdf:RDF
	xmlns:rdf="http://www.w3.org/1999/02/22-rdf-syntax-ns#"
	xmlns:rdfs="http://www.w3.org/2000/01/rdf-schema#"
	xmlns:dcterms="http://purl.org/dc/terms/"
	xmlns:fmi="https://www.fmi-standard.org/">
	<rdfs:Class rdf:about="fmi:FMU">
		<rdfs:label xml:lang="en-GB">FMU</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdfs:Class>
	<rdf:Property rdf:about="fmi:FMU_identifier">
		<rdfs:label xml:lang="en-GB">identifier</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:FMU_fmiVersion">
		<rdfs:label xml:lang="en-GB">fmiVersion</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:FMU_isModelExchangeFMU">
		<rdfs:label xml:lang="en-GB">isModelExchangeFMU</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:FMU_isCoSimulationFMU">
		<rdfs:label xml:lang="en-GB">isCoSimulationFMU</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:FMU_modelDescription">
		<rdfs:label xml:lang="en-GB">modelDescription</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdfs:Class rdf:about="fmi:ModelDescription">
		<rdfs:label xml:lang="en-GB">ModelDescription</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdfs:Class>
	<rdf:Property rdf:about="fmi:ModelDescription_identifier">
		<rdfs:label xml:lang="en-GB">identifier</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:ModelDescription_fmuPath">
		<rdfs:label xml:lang="en-GB">fmuPath</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:ModelDescription_tmpPath">
		<rdfs:label xml:lang="en-GB">tmpPath</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:ModelDescription_fmiVersion">
		<rdfs:label xml:lang="en-GB">fmiVersion</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:ModelDescription_modelName">
		<rdfs:label xml:lang="en-GB">modelName</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:ModelDescription_modelIdentifier">
		<rdfs:label xml:lang="en-GB">modelIdentifier</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:ModelDescription_guid">
		<rdfs:label xml:lang="en-GB">guid</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:ModelDescription_description">
		<rdfs:label xml:lang="en-GB">description</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:ModelDescription_author">
		<rdfs:label xml:lang="en-GB">author</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:ModelDescription_version">
		<rdfs:label xml:lang="en-GB">version</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:ModelDescription_copyright">
		<rdfs:label xml:lang="en-GB">copyright</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:ModelDescription_license">
		<rdfs:label xml:lang="en-GB">license</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:ModelDescription_kind">
		<rdfs:label xml:lang="en-GB">kind</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:ModelDescription_generationTool">
		<rdfs:label xml:lang="en-GB">generationTool</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:ModelDescription_generationDateAndTime">
		<rdfs:label xml:lang="en-GB">generationDateAndTime</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:ModelDescription_variableNamingConvention">
		<rdfs:label xml:lang="en-GB">variableNamingConvention</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:ModelDescription_numberOfContinuousStates">
		<rdfs:label xml:lang="en-GB">numberOfContinuousStates</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:ModelDescription_numberOfEventIndicators">
		<rdfs:label xml:lang="en-GB">numberOfEventIndicators</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:ModelDescription_defaultExperiment">
		<rdfs:label xml:lang="en-GB">defaultExperiment</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:ModelDescription_modelStructure">
		<rdfs:label xml:lang="en-GB">modelStructure</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:ModelDescription_coSimulation">
		<rdfs:label xml:lang="en-GB">coSimulation</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:ModelDescription_modelExchange">
		<rdfs:label xml:lang="en-GB">modelExchange</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:ModelDescription_modelVariables">
		<rdfs:label xml:lang="en-GB">modelVariables</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:ModelDescription_unitDefinition">
		<rdfs:label xml:lang="en-GB">unitDefinition</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:ModelDescription_vendorAnnotation">
		<rdfs:label xml:lang="en-GB">vendorAnnotation</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:ModelDescription_typeDefinition">
		<rdfs:label xml:lang="en-GB">typeDefinition</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdfs:Class rdf:about="fmi:DefaultExperiment">
		<rdfs:label xml:lang="en-GB">DefaultExperiment</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdfs:Class>
	<rdf:Property rdf:about="fmi:DefaultExperiment_identifier">
		<rdfs:label xml:lang="en-GB">identifier</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:DefaultExperiment_startTime">
		<rdfs:label xml:lang="en-GB">startTime</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:DefaultExperiment_stopTime">
		<rdfs:label xml:lang="en-GB">stopTime</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:DefaultExperiment_tolerance">
		<rdfs:label xml:lang="en-GB">tolerance</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:DefaultExperiment_step">
		<rdfs:label xml:lang="en-GB">step</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdfs:Class rdf:about="fmi:ModelExchange">
		<rdfs:label xml:lang="en-GB">ModelExchange</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdfs:Class>
	<rdf:Property rdf:about="fmi:ModelExchange_identifier">
		<rdfs:label xml:lang="en-GB">identifier</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:ModelExchange_modelIdentifier">
		<rdfs:label xml:lang="en-GB">modelIdentifier</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:ModelExchange_needsExecutionTool">
		<rdfs:label xml:lang="en-GB">needsExecutionTool</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:ModelExchange_completedIntegratorStepNotNeeded">
		<rdfs:label xml:lang="en-GB">completedIntegratorStepNotNeeded</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:ModelExchange_canBeInstantiatedOnlyOncePerProcess">
		<rdfs:label xml:lang="en-GB">canBeInstantiatedOnlyOncePerProcess</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:ModelExchange_canNotUseMemoryManagementFunctions">
		<rdfs:label xml:lang="en-GB">canNotUseMemoryManagementFunctions</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:ModelExchange_canGetAndSetFMUstate">
		<rdfs:label xml:lang="en-GB">canGetAndSetFMUstate</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:ModelExchange_canSerializeFMUstate">
		<rdfs:label xml:lang="en-GB">canSerializeFMUstate</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:ModelExchange_providesDirectionalDerivatives">
		<rdfs:label xml:lang="en-GB">providesDirectionalDerivatives</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:ModelExchange_completedEventIterationIsProvided">
		<rdfs:label xml:lang="en-GB">completedEventIterationIsProvided</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:ModelExchange_sourceFile">
		<rdfs:label xml:lang="en-GB">sourceFile</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdfs:Class rdf:about="fmi:CoSimulation">
		<rdfs:label xml:lang="en-GB">CoSimulation</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdfs:Class>
	<rdf:Property rdf:about="fmi:CoSimulation_identifier">
		<rdfs:label xml:lang="en-GB">identifier</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:CoSimulation_modelIdentifier">
		<rdfs:label xml:lang="en-GB">modelIdentifier</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:CoSimulation_needsExecutionTool">
		<rdfs:label xml:lang="en-GB">needsExecutionTool</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:CoSimulation_canGetAndSetFMUstate">
		<rdfs:label xml:lang="en-GB">canGetAndSetFMUstate</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:CoSimulation_canSerializeFMUstate">
		<rdfs:label xml:lang="en-GB">canSerializeFMUstate</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:CoSimulation_providesDirectionalDerivatives">
		<rdfs:label xml:lang="en-GB">providesDirectionalDerivatives</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:CoSimulation_canHandleVariableCommunicationStepSize">
		<rdfs:label xml:lang="en-GB">canHandleVariableCommunicationStepSize</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:CoSimulation_canHandleEvents">
		<rdfs:label xml:lang="en-GB">canHandleEvents</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:CoSimulation_canRejectSteps">
		<rdfs:label xml:lang="en-GB">canRejectSteps</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:CoSimulation_canInterpolateInputs">
		<rdfs:label xml:lang="en-GB">canInterpolateInputs</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:CoSimulation_maxOutputDerivativeOrder">
		<rdfs:label xml:lang="en-GB">maxOutputDerivativeOrder</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:CoSimulation_canRunAsynchronuously">
		<rdfs:label xml:lang="en-GB">canRunAsynchronuously</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:CoSimulation_canSignalEvents">
		<rdfs:label xml:lang="en-GB">canSignalEvents</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:CoSimulation_canBeInstantiatedOnlyOncePerProcess">
		<rdfs:label xml:lang="en-GB">canBeInstantiatedOnlyOncePerProcess</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:CoSimulation_canNotUseMemoryManagementFunctions">
		<rdfs:label xml:lang="en-GB">canNotUseMemoryManagementFunctions</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:CoSimulation_sourceFile">
		<rdfs:label xml:lang="en-GB">sourceFile</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdfs:Class rdf:about="fmi:SourceFile">
		<rdfs:label xml:lang="en-GB">SourceFile</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdfs:Class>
	<rdf:Property rdf:about="fmi:SourceFile_identifier">
		<rdfs:label xml:lang="en-GB">identifier</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:SourceFile_file">
		<rdfs:label xml:lang="en-GB">file</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdfs:Class rdf:about="fmi:UnitDefinition">
		<rdfs:label xml:lang="en-GB">UnitDefinition</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdfs:Class>
	<rdf:Property rdf:about="fmi:UnitDefinition_identifier">
		<rdfs:label xml:lang="en-GB">identifier</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:UnitDefinition_name">
		<rdfs:label xml:lang="en-GB">name</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:UnitDefinition_baseUnit">
		<rdfs:label xml:lang="en-GB">baseUnit</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdfs:Class rdf:about="fmi:BaseUnit">
		<rdfs:label xml:lang="en-GB">BaseUnit</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdfs:Class>
	<rdf:Property rdf:about="fmi:BaseUnit_identifier">
		<rdfs:label xml:lang="en-GB">identifier</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:BaseUnit_unit">
		<rdfs:label xml:lang="en-GB">unit</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:BaseUnit_factor">
		<rdfs:label xml:lang="en-GB">factor</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:BaseUnit_offset">
		<rdfs:label xml:lang="en-GB">offset</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:BaseUnit_displayUnitNumber">
		<rdfs:label xml:lang="en-GB">displayUnitNumber</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:BaseUnit_baseUnitDefinition">
		<rdfs:label xml:lang="en-GB">baseUnitDefinition</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdfs:Class rdf:about="fmi:BaseUnitDefinition">
		<rdfs:label xml:lang="en-GB">BaseUnitDefinition</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdfs:Class>
	<rdf:Property rdf:about="fmi:BaseUnitDefinition_identifier">
		<rdfs:label xml:lang="en-GB">identifier</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:BaseUnitDefinition_displayUnit">
		<rdfs:label xml:lang="en-GB">displayUnit</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdfs:Class rdf:about="fmi:VendorAnnotation">
		<rdfs:label xml:lang="en-GB">VendorAnnotation</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdfs:Class>
	<rdf:Property rdf:about="fmi:VendorAnnotation_identifier">
		<rdfs:label xml:lang="en-GB">identifier</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:VendorAnnotation_vendorTool">
		<rdfs:label xml:lang="en-GB">vendorTool</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdfs:Class rdf:about="fmi:VendorTool">
		<rdfs:label xml:lang="en-GB">VendorTool</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdfs:Class>
	<rdf:Property rdf:about="fmi:VendorTool_identifier">
		<rdfs:label xml:lang="en-GB">identifier</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:VendorTool_name">
		<rdfs:label xml:lang="en-GB">name</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:VendorTool_annotation">
		<rdfs:label xml:lang="en-GB">annotation</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdfs:Class rdf:about="fmi:Annotation">
		<rdfs:label xml:lang="en-GB">Annotation</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdfs:Class>
	<rdf:Property rdf:about="fmi:Annotation_identifier">
		<rdfs:label xml:lang="en-GB">identifier</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:Annotation_name">
		<rdfs:label xml:lang="en-GB">name</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:Annotation_value">
		<rdfs:label xml:lang="en-GB">value</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdfs:Class rdf:about="fmi:TypeDefinition">
		<rdfs:label xml:lang="en-GB">TypeDefinition</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdfs:Class>
	<rdf:Property rdf:about="fmi:TypeDefinition_identifier">
		<rdfs:label xml:lang="en-GB">identifier</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:TypeDefinition_name">
		<rdfs:label xml:lang="en-GB">name</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:TypeDefinition_description">
		<rdfs:label xml:lang="en-GB">description</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:TypeDefinition_baseType">
		<rdfs:label xml:lang="en-GB">baseType</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:TypeDefinition_quantity">
		<rdfs:label xml:lang="en-GB">quantity</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:TypeDefinition_typeDef">
		<rdfs:label xml:lang="en-GB">typeDef</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdfs:Class rdf:about="fmi:TypeDef">
		<rdfs:label xml:lang="en-GB">TypeDef</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdfs:Class>
	<rdf:Property rdf:about="fmi:TypeDef_identifier">
		<rdfs:label xml:lang="en-GB">identifier</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:TypeDef_name">
		<rdfs:label xml:lang="en-GB">name</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:TypeDef_min">
		<rdfs:label xml:lang="en-GB">min</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:TypeDef_max">
		<rdfs:label xml:lang="en-GB">max</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:TypeDef_enumeration">
		<rdfs:label xml:lang="en-GB">enumeration</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdfs:Class rdf:about="fmi:Enumeration">
		<rdfs:label xml:lang="en-GB">Enumeration</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdfs:Class>
	<rdf:Property rdf:about="fmi:Enumeration_identifier">
		<rdfs:label xml:lang="en-GB">identifier</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:Enumeration_name">
		<rdfs:label xml:lang="en-GB">name</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:Enumeration_value">
		<rdfs:label xml:lang="en-GB">value</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:Enumeration_description">
		<rdfs:label xml:lang="en-GB">description</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdfs:Class rdf:about="fmi:ModelVariables">
		<rdfs:label xml:lang="en-GB">ModelVariables</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdfs:Class>
	<rdf:Property rdf:about="fmi:ModelVariables_identifier">
		<rdfs:label xml:lang="en-GB">identifier</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:ModelVariables_scalarVariable">
		<rdfs:label xml:lang="en-GB">scalarVariable</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdfs:Class rdf:about="fmi:ScalarVariable">
		<rdfs:label xml:lang="en-GB">ScalarVariable</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdfs:Class>
	<rdf:Property rdf:about="fmi:ScalarVariable_identifier">
		<rdfs:label xml:lang="en-GB">identifier</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:ScalarVariable_index">
		<rdfs:label xml:lang="en-GB">index</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:ScalarVariable_name">
		<rdfs:label xml:lang="en-GB">name</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:ScalarVariable_description">
		<rdfs:label xml:lang="en-GB">description</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:ScalarVariable_valueReference">
		<rdfs:label xml:lang="en-GB">valueReference</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:ScalarVariable_variability">
		<rdfs:label xml:lang="en-GB">variability</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:ScalarVariable_causality">
		<rdfs:label xml:lang="en-GB">causality</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:ScalarVariable_initial">
		<rdfs:label xml:lang="en-GB">initial</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:ScalarVariable_isAlias">
		<rdfs:label xml:lang="en-GB">isAlias</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:ScalarVariable_aliasBase">
		<rdfs:label xml:lang="en-GB">aliasBase</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:ScalarVariable_listingAlias">
		<rdfs:label xml:lang="en-GB">listingAlias</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:ScalarVariable_listingDirectDependency">
		<rdfs:label xml:lang="en-GB">listingDirectDependency</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:ScalarVariable_scalarVariableType">
		<rdfs:label xml:lang="en-GB">scalarVariableType</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdfs:Class rdf:about="fmi:ScalarVariableType">
		<rdfs:label xml:lang="en-GB">ScalarVariableType</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdfs:Class>
	<rdf:Property rdf:about="fmi:ScalarVariableType_identifier">
		<rdfs:label xml:lang="en-GB">identifier</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:ScalarVariableType_name">
		<rdfs:label xml:lang="en-GB">name</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:ScalarVariableType_start">
		<rdfs:label xml:lang="en-GB">start</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:ScalarVariableType_min">
		<rdfs:label xml:lang="en-GB">min</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:ScalarVariableType_max">
		<rdfs:label xml:lang="en-GB">max</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:ScalarVariableType_nominal">
		<rdfs:label xml:lang="en-GB">nominal</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:ScalarVariableType_declaredType">
		<rdfs:label xml:lang="en-GB">declaredType</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:ScalarVariableType_unit">
		<rdfs:label xml:lang="en-GB">unit</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:ScalarVariableType_displayUnit">
		<rdfs:label xml:lang="en-GB">displayUnit</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdfs:Class rdf:about="fmi:ListingAlias">
		<rdfs:label xml:lang="en-GB">ListingAlias</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdfs:Class>
	<rdf:Property rdf:about="fmi:ListingAlias_identifier">
		<rdfs:label xml:lang="en-GB">identifier</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:ListingAlias_name">
		<rdfs:label xml:lang="en-GB">name</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdfs:Class rdf:about="fmi:ListingDirectDependency">
		<rdfs:label xml:lang="en-GB">ListingDirectDependency</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdfs:Class>
	<rdf:Property rdf:about="fmi:ListingDirectDependency_identifier">
		<rdfs:label xml:lang="en-GB">identifier</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:ListingDirectDependency_name">
		<rdfs:label xml:lang="en-GB">name</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdfs:Class rdf:about="fmi:ModelStructure">
		<rdfs:label xml:lang="en-GB">ModelStructure</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdfs:Class>
	<rdf:Property rdf:about="fmi:ModelStructure_identifier">
		<rdfs:label xml:lang="en-GB">identifier</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:ModelStructure_derivative">
		<rdfs:label xml:lang="en-GB">derivative</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:ModelStructure_initialUnknown">
		<rdfs:label xml:lang="en-GB">initialUnknown</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:ModelStructure_output">
		<rdfs:label xml:lang="en-GB">output</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdfs:Class rdf:about="fmi:Derivative">
		<rdfs:label xml:lang="en-GB">Derivative</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdfs:Class>
	<rdf:Property rdf:about="fmi:Derivative_identifier">
		<rdfs:label xml:lang="en-GB">identifier</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:Derivative_name">
		<rdfs:label xml:lang="en-GB">name</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:Derivative_index">
		<rdfs:label xml:lang="en-GB">index</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:Derivative_dependencies">
		<rdfs:label xml:lang="en-GB">dependencies</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:Derivative_dependenciesKind">
		<rdfs:label xml:lang="en-GB">dependenciesKind</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdfs:Class rdf:about="fmi:InitialUnknown">
		<rdfs:label xml:lang="en-GB">InitialUnknown</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdfs:Class>
	<rdf:Property rdf:about="fmi:InitialUnknown_identifier">
		<rdfs:label xml:lang="en-GB">identifier</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:InitialUnknown_name">
		<rdfs:label xml:lang="en-GB">name</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:InitialUnknown_index">
		<rdfs:label xml:lang="en-GB">index</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:InitialUnknown_dependencies">
		<rdfs:label xml:lang="en-GB">dependencies</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:InitialUnknown_dependenciesKind">
		<rdfs:label xml:lang="en-GB">dependenciesKind</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdfs:Class rdf:about="fmi:Output">
		<rdfs:label xml:lang="en-GB">Output</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdfs:Class>
	<rdf:Property rdf:about="fmi:Output_identifier">
		<rdfs:label xml:lang="en-GB">identifier</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:Output_name">
		<rdfs:label xml:lang="en-GB">name</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:Output_index">
		<rdfs:label xml:lang="en-GB">index</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:Output_dependencies">
		<rdfs:label xml:lang="en-GB">dependencies</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
	<rdf:Property rdf:about="fmi:Output_dependenciesKind">
		<rdfs:label xml:lang="en-GB">dependenciesKind</rdfs:label>
		<rdfs:isDefinedBy rdf:resource="https://www.fmi-standard.org/"/>
		<dcterms:issued>2014-01-05</dcterms:issued>
	</rdf:Property>
</rdf:RDF>
</xmp>
		
		
	</div>


	<!-- footer -->
	<p id="footer">OSLC FMI Adapter 1.1</p>
	 
</body>
</html>







