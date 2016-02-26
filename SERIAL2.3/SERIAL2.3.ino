/******************************************************************
 **                                                              **       
 **                   SERIAL 2.3    CAPACITAT HD                     ** 
 **                                                              ** 
 ******************************************************************/

//***************  INCLUDES   **************************************


//***************  VARIABLES  **************************************
  int drive_gb = 100;
  int drive_mb;


//***************  SETUP   ****************************************
void setup() {
   Serial.begin(9600);     // carrega Serial library at 9600 bps
  Serial.print("Your HD is ");
  Serial.print(drive_gb);   // imprimeix per pantalla el valor de drive_gb
  Serial.println(" GB large.");

  drive_mb = 1024 * drive_gb;   // Conversió de GB a MB de la variable drive_gb

  Serial.print("Este equival a  ");
  Serial.print(drive_mb);     // imprimeix per pantalla el valor de drive_mb
  Serial.println(" Megabytes!");

 
}
//*************    LOOP   ******************************************
void loop()  // LOOP buit perquè només surti un cop els resultats i no és repeteixin en bucle.
{
}


