<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<%@ page language="java" import="java.lang.*,java.math.*,db.*,java.sql.*, java.io.*, java.util.*"%>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>Tabela Cazare</title>
        <link href="table.css" rel="stylesheet" type="text/css" media="screen" />
        <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.4.1/css/bootstrap.min.css">
  		<script src="https://ajax.googleapis.com/ajax/libs/jquery/3.5.1/jquery.min.js"></script>
  		<script src="https://maxcdn.bootstrapcdn.com/bootstrap/3.4.1/js/bootstrap.min.js"></script>
        <style>
        ul {
  		list-style-type: none;
  		margin: 0;
  		padding: 0;
  		overflow: hidden;
  		background-color: #333;
		}

		li {
  		float: left;
		}

		li a {
  		display: block;
  		color: white;
  		text-align: center;
  		padding: 14px 16px;
  		text-decoration: none;
		}
        body{background-color:#FAF0E6}
		table { 
  
  		border-collapse: collapse;
  		width: 80%;

 		}
 		th,td {
  		text-align: left;
 		padding: 8px;
		}
 

		td {
  		background-color:#F5F5F5; 
  		color: black;
  		}
		th {
 		background-color: #1E90FF;
  		color: black;
		}
		table.center {
  		margin-left: 20%; 
  		margin-right: 20%;
		}
		
		input[type=text] {
  		padding: 12px 30px;
  		box-sizing: border-box;
  		border: 2px solid #ccc;
  		border-radius: 10px;
  		background-color: #f8f8f8;
  		font-size: 16px;
  		resize: none;
		}
		input[type=number] {

		width:120px;
  		padding: 12px 12px;
  		box-sizing: border-box;
  		border: 2px solid #ccc;
  		border-radius: 10px;
  		background-color: #f8f8f8;
  		font-size: 16px;
  		resize: none;
		}
		</style>
    </head>
    <jsp:useBean id="jb" scope="session" class="db.JavaBean" />
    <jsp:setProperty name="jb" property="*" />
    <body>
    	<ul>
    	<li><a href="index.html"><b><strong>Home</strong></b></a></li>
    	<li><a href="tabela_hotel.jsp"><b><strong>Hotel</strong></b></a></li>
    	<li><a href="tabela_camera.jsp"><b><strong>Camera</strong></b></a></li>
    	<li><a href="tabela_cazare.jsp"><b><strong>Cazare</strong></b></a></li>
    	</ul>
        <h1 align="center">Tabela Cazare:</h1>
        <br/>
        <%
            jb.connect();
            String NumeHotel, Locatie, Rating, DataConstruire, NumarCamera, NumarPaturi, Balcon, Bucatarie, Status;
            int aux = java.lang.Integer.parseInt(request.getParameter("primarykey"));
            ResultSet rs = jb.intoarceCazareId(aux);
            rs.first();
            int id1 = rs.getInt("idhotel");
            int id2 = rs.getInt("idcamera");

            Status = rs.getString("status");
            ResultSet rs1 = jb.vedeTabela("hotel");
            ResultSet rs2 = jb.vedeTabela("camera");
            int idhotel, idcamera;


        %>
        <form action="m2_cazare.jsp" method="post">
            <table align="center">
                <tr>
                    <td align="right">IdCazare:</td>
                    <td> <input type="text" name="idcazare" size="30" value="<%= aux%>" readonly/></td>
                </tr>
                <tr>
                    <td align="right">idhotel:</td>
                    <td> 
                        <SELECT NAME="idhotel">
                            <%
                                while (rs1.next()) {
                                    idhotel = rs1.getInt("idhotel");
                                    NumeHotel = rs1.getString("nume");
                                    Locatie = rs1.getString("locatie");
                                    Rating = rs1.getString("rating");
                                    DataConstruire = rs1.getString("dataconstruire");
                                    if (idhotel != id1) {
                            %>
                            <OPTION VALUE="<%= idhotel%>"><%= idhotel%>, <%= NumeHotel%>, <%= Locatie%>, <%= Rating%>,<%= DataConstruire%></OPTION>
                                <%
                                        } else {
                                %>                
                            <OPTION selected="yes" VALUE="<%= idhotel%>"><%= idhotel%>, <%= NumeHotel%>, <%= Locatie%>, <%= Rating%>,<%= DataConstruire%></OPTION>
                                <%
                                        }
                                    }
                                %>
                        </SELECT>

                    </td>
                </tr>
                <tr>
                    <td align="right">idcamera:</td>
                    <td> 
                        <SELECT NAME="idcamera">
                            <%
                                while (rs2.next()) {
                                    idcamera = rs2.getInt("idcamera");
                                    NumarCamera = rs2.getString("numarcamera");
                                    NumarPaturi = rs2.getString("numarpaturi");
                                    Balcon = rs2.getString("balcon");
                                    Bucatarie = rs2.getString("bucatarie");
                            if (idcamera != id2) {
                            %>
                            <OPTION VALUE="<%= idcamera%>"><%= idcamera%>, <%= NumarCamera%>, <%= NumarPaturi%>, <%= Balcon%>,<%= Bucatarie%></OPTION>
                                <%
                                        } else {
                                %>                
                            <OPTION selected="yes" VALUE="<%= idcamera%>"><%= idcamera%>, <%= NumarCamera%>, <%= NumarPaturi%>, <%= Balcon%>,<%= Bucatarie%></OPTION>
                                <%
                                        }
                                    }
                                %>
                        </SELECT>

                    </td>
                </tr>
                <tr>
                    <td align="right">Status:</td>
                    <td> <input type="text" name="status" size="30" value="<%= Status%>"/></td>
                </tr>
                
            </table><p align="center">
                 <input type="submit" class = "btn btn-primary" value="Modifica linia">
            </p>
        </form>
        <p align="center"">
            <a href="tabela_cazare.jsp"><button type="button" class="btn btn-primary">Back</button></a>
            <br/>
    </body>
    <%
        rs.close();
        rs1.close();
        rs2.close();
        jb.disconnect();
    %>
</html>