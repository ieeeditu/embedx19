
void handleRoot() {
	String a = server.arg(0);
	int val=0;
	if(a.charAt(0)=='1'&&a.length()==1){
		Serial.println("a");
		val =1;
  digitalWrite(LED, HIGH);
	}else {val =0;
		Serial.println("aa");
  digitalWrite(LED, LOW);}


  String message ="<HTML>";
			message+="<HEAD>";
				message+="<TITLE>LED Toggle</TITLE>";
			message+="</HEAD>";
			message+="<BODY>";
				message+="<H1 align=center> <B><U>FORM</U></B></H1>";
				message+="<HR><BR>";
				message+="<TABLE align=center>";
					message+="<FORM name=frm method ='GET'>";
						message+="<TR><TD><input name='test' type='hidden' value=";
						message+=(!val);
						message+=" ><INPUT type='submit' value='Click To toggle LED'>";
					message+="</FORM>";
				message+="</TABLE>";
			message+="</BODY>";
		message+="</HTML>";

  server.send(200, "text/html", message);
}


void handleNotFound() {
  digitalWrite(LED, 1);
  String message = "File Not Found\n\n";
  message += "URI: ";
  message += server.uri();
  message += "\nMethod: ";
  message += (server.method() == HTTP_GET) ? "GET" : "POST";
  message += "\nArguments: ";
  message += server.args();
  message += "\n";
  for (uint8_t i = 0; i < server.args(); i++) {
    message += " " + server.argName(i) + ": " + server.arg(i) + "\n";
  }
  server.send(404, "text/plain", message);
  digitalWrite(LED, 0);
}
