/******************************************************************
 **                                                              **       
 **                   SERIAL 4.1 ESTRUCTURES IF                       ** 
 **                                                              ** 
 ******************************************************************/

//***************  INCLUDES   **************************************


//***************  VARIABLES  **************************************

int tempAigua = 100;           // Variable tempAigua igual a 101
//***************  SETUP   ****************************************
void setup() {
  
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if ( tempAigua > 100) // Si tempAigua es superior a 100 
  {
    Serial.print("Aigua supera els 100C, esta bullint!"); // Escriu el missatge
  } 

}

//*************    LOOP   ******************************************
void loop() {

}
