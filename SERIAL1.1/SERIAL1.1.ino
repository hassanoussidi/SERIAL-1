/******************************************************************
 **                                                              **
 **                   ESCRIURE MISSATGE BENVINGUDA(SERIAL 1.1)                       **
 **                                                              **
 ******************************************************************/

//***************  INCLUDES   **************************************


//***************  VARIABLES  **************************************


//***************  SETUP   ****************************************
void setup()                // s'executa un cop quan comenÃ§a el run once, when the sketch starts
{
  Serial.begin(9600);       // carrega lliberia Serial  at 9600 bps
  Serial.println("Hello world!"); // escriu per pantalla



}
  //*************    LOOP   ******************************************
  void loop()   // s'executa repetidament una vegada rere una altra
  {
    // do nothing
  }

