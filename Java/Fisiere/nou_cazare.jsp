<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<%@ page language="java" import="java.lang.*,java.math.*,db.*,java.sql.*, java.io.*, java.util.*"%>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>Adauga Cazare</title>
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
  		text-decoration: none;}
        input[type=submit] {
  		background-color: #1E90FF;
  		color: white;
  		padding: 14px 20px;
  		margin: 8px 0;
  		border: none;
  		border-radius: 4px;
  		cursor: pointer;
		}

		input[type=submit]:hover {
  		background-color: #87CEFA;
		}
		input[type=reset] {
 		background-color: #1E90FF;
  		color: white;
  		padding: 14px 20px;
  		margin: 8px 0;
  		border: none;
  		border-radius: 4px;
  		cursor: pointer;
		}

		input[type=reset]:hover {
  		background-color: #87CEFA;
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
		label{
		color:#000080;
		font-weight: bold;
		width: 200px;
		float: left;
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
        <%
            int idhotel, idcamera;
        	String id1, id2;
            String Status = request.getParameter("status");
            id1 = request.getParameter("idhotel");
            id2 = request.getParameter("idcamera");
            if (id1 != null) {
            	int i1 = Integer.parseInt(id1);
            	int i2 = Integer.parseInt(id2);
                jb.connect();
                jb.adaugaCazare(i1, i2, Status);
                jb.disconnect();
        %>
        <p>Datele au fost adaugate.</p>
        <div class="btn-group">
        <a href="tabela_cazare.jsp"><button type="submit" class="btn btn-primary">Back</button></a>
        </div>
        <%
        } else {
        jb.connect();
        ResultSet rs1 = jb.vedeTabela("hotel");
        ResultSet rs2 = jb.vedeTabela("camera");
        %>
        <h1> Suntem in tabela cazate.</h1>
        <form action="nou_cazare.jsp" method="post">
            <table>
                <tr>
                    <td align="right">IdHotel:</td>
                    <td> 
                        Selectati hotelul:
			<SELECT NAME="idhotel">
                                <%
                                    while(rs1.next()){
                                        idhotel = rs1.getInt("idhotel");
                                        String NumeHotel = rs1.getString("nume");
                                        String Locatia = rs1.getString("locatie");
                                        int Rating = rs1.getInt("rating");
                                        String DataConstruire = rs1.getString("dataconstruire");
                                %>
                                    <OPTION VALUE="<%= idhotel%>"><%= idhotel%>,<%= NumeHotel%>,<%= Locatia%>,<%= Rating%>,<%= DataConstruire%></OPTION>
                                <%
                                    }
                                %>
			</SELECT>
                    
                    </td>
                </tr>
                <tr>
                    <td align="right">IdCamera:</td>
                    <td> 
                        Selectati Camera:
			<SELECT NAME="idcamera">
				<!-- OPTION selected="yes" VALUE="iris1">Iris 1</OPTION -->
                                <%
                                    while(rs2.next()){
                                        idcamera = rs2.getInt("idcamera");
                                        int NumarCamera = rs2.getInt("numarcamera");
                                        int NumarPaturi = rs2.getInt("numarpaturi");
                                        String Balcon = rs2.getString("balcon");
                                        String Bucatarie = rs2.getString("bucatarie");
                                %>
                                    <OPTION VALUE="<%= idcamera%>"><%= idcamera%>,<%= NumarCamera%>,<%= NumarPaturi%>,<%= Balcon%>,<%= Bucatarie%></OPTION>
                                <%
                                    }
                                %>
			</SELECT>
                     </td>
                </tr>
                <tr>
                    <td align="right">Status:</td>
                    <td> <input type="text" name="Status" size="30" /></td>
                </tr>
                
            </table>
            <input type="submit" value="Adauga cazarea" />
        </form>
        <%
            }
        %>
    </body>
</html>