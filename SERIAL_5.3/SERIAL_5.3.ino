/******************************************************************
 **                                                              **       
 **                   SERIAL 5.2 PARELL SENAR                     ** 
 **                                                              ** 
 ******************************************************************/

//***************  INCLUDES   **************************************


//***************  VARIABLES  **************************************
int n, numero;
int divisor = 10000;


//***************  SETUP   ****************************************
void setup() {
  
Serial.begin(9600); // initialitzar llibreria serial begin

Serial.println("Entra el teu numero (entre -32,768 to 32,767 per saber si es parell o senar)");

}

//*************    LOOP   ******************************************
void loop() {
while (Serial.available() > 0) {// mentre sigui superior a 0 any serial available, read it

n = Serial.parseInt();// look for valid int the incoming serial stream
Serial.print ("el numero es:");
Serial.println (n);

if (Serial.read() == '\n') { //look for newline. Is the end of your sentence
if (n <0 ){
  abs (n);
          }
          
 while (numero >10){
  numero = n/divisor;
  xifres = xifres+1;
  divisor =divisor /10;
  
  
Serial.println (" El numero es de: ");
Serial.print (xifres);
Serial.print (" xifres");

}
Serial.println("Entra el teu numero(entre -32,768 to 32,767 per saber si es parell o senar: ");
}
}
}
