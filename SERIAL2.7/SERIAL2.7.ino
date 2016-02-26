/******************************************************************
 **                                                              **       
 **                   SERIAL 2.7   CAPACITAT HD LONG 2            ** 
 **                                                              ** 
 ******************************************************************/

//***************  INCLUDES   **************************************


//***************  VARIABLES  **************************************
  int test = 32767;
  long test2;

//***************  SETUP   ****************************************
void setup() {
   Serial.begin(9600);     // carrega Serial library at 9600 bps
  Serial.print("Test val : ");
  
  Serial.println(test);
  
  test = test +1;
 
  Serial.print("Ara aixo es ");
  Serial.println(test);


 
}
//*************    LOOP   ******************************************
void loop()  // LOOP buit perquè només surti un cop els resultats i no és repeteixin en bucle.
{
}


