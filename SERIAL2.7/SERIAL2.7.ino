/******************************************************************
 **                                                              **       
 **                   SERIAL 2.5    CAPACITAT HD LONG 2            ** 
 **                                                              ** 
 ******************************************************************/

//***************  INCLUDES   **************************************


//***************  VARIABLES  **************************************
  int test = 32767;


//***************  SETUP   ****************************************
void setup() {
   Serial.begin(9600);     // carrega Serial library at 9600 bps
  Serial.print("Test value is: ");
  Serial.println(test);

  test = test + 1;
 
  Serial.print("Now it is ");
  Serial.println(test);


 
}
//*************    LOOP   ******************************************
void loop()  // LOOP buit perquè només surti un cop els resultats i no és repeteixin en bucle.
{
}


