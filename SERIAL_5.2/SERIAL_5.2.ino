/******************************************************************
 **                                                              **       
 **                   SERIAL 5.2 PARELL SENAR                     ** 
 **                                                              ** 
 ******************************************************************/

//***************  INCLUDES   **************************************


//***************  VARIABLES  **************************************
int n, numero;
int divisor = 2;


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
numero = n%divisor;
if (numero ==0){
Serial.println (" El numero es parell ");
}
else {
Serial.println (" El teu numero es senar");

}
Serial.println("Entra el teu numero(entre -32,768 to 32,767 per saber si es parell o senar: ");
}
}
}
