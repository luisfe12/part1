<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
	pageEncoding="ISO-8859-1"%>
	
<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core"%>
<%@ page import="java.util.Date"  %>

	
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=ISO-8859-1">
<title>Ecodeup</title>
</head>
<body>
	Bienvenido a ecodeup, el blog de Java y Java Web
	<br>
	<%--Comentarios: Esto es un comentario en JSP --%>
	
	<%--Esto es un scriptlet JSP --%>
	<% out.println(); %>
	<c:out value=""></c:out>
	
	<%--out.print("Hola mundo desde JSP");--%>
	<c:out value="Hola mundo desde JSP"></c:out> <br>
	<c:out value="Esto es una expresión."/>
	<br>
	
     <%--Se declara una directiva para utilizar la clase Date <%@ page import="java.util.Date"  %>
	Date d = new Date();
	out.println("Fecha Actual: "+d);--%>
	<c:out value="Fecha actual: "/>
	<c:out value="${date.content}"/>
	<br>
	<%--Navegador y Versión del Sistema Operativo --%>
	
	<c:out value="Navegador y Versión del Sistema Operativo: "/>
	<c:out value="${so}"/>
	<c:out value="hola mundo JSTL desde jsp"></c:out>
		
</body>
</html>

