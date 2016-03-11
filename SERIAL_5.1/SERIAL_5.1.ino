/******************************************************************
 **                                                              **       
 **                   SERIAL 5.1                       ** 
 **                                                              ** 
 ******************************************************************/

//***************  INCLUDES   **************************************


//***************  VARIABLES  **************************************

float r1, r2; // variables per les Resistencies

float rSerie, rParalel; // variables per els resultats
//***************  SETUP   ****************************************
void setup() {
  
Serial.begin(9600); // initialitzar llibreria serial begin

Serial.println("Entra el valor de r1 i r2 (separats per una coma)");
}

//*************    LOOP   ******************************************
void loop() {
while (Serial.available() > 0) {// if there&#39;s any serial available, read it

r1 = Serial.parseInt();// look for valid int the incoming serial stream
Serial.print ("r1 es:");
Serial.print (r1);
Serial.println ("ohms");

r2 = Serial.parseInt();
Serial.print ("r2 es:");
Serial.print (r2);
Serial.println ("ohms");



if (Serial.read() == '\n') { //look for newline. Is the end of your sentence

rSerie = r1 + r2;
rParalel = (r1 * r2)/ (r1+r2);
Serial.print (" La resistencia en serie equivalent es:  ");
Serial.print (rSerie);
Serial.println ("  ohms ");

Serial.print (" La resistencia en paralel equivalent es:  ");
Serial.print (rParalel);
Serial.println ("  ohms ");
}
Serial.println("Entra el valor de r1 i r2 (separats per una coma)");
}
}
