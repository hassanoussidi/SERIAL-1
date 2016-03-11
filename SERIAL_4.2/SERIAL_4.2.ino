/******************************************************************
 **                                                              **       
 **                   SERIAL 4.2 ESTRUCTURES IF 2                       ** 
 **                                                              ** 
 ******************************************************************/

//***************  INCLUDES   **************************************


//***************  VARIABLES  **************************************

int tempAigua = 100;           // Variable tempAigua igual a 101
//***************  SETUP   ****************************************
void setup() {
  
  Serial.begin(9600);     // set up Serial library at 9600 bps
  if ( tempAigua < 100) // Si tempAigua es superior a 100 
  {
    Serial.print("Aigua encara no supera els 100C,  no esta bullint!"); // Escriu el missatge
  } 

  if ( tempAigua >= 100) // Si tempAigua es superior a 100 
  {
    Serial.print("Aigua igual o superior els 100C, aigua bullint!"); // Escriu el missatge
  } 

}

//*************    LOOP   ******************************************
void loop() {

}
