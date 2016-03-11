/******************************************************************
 **                                                              **       
 **                   SERIAL 4.3 ESTRUCTURES IF 2                       ** 
 **                                                              ** 
 ******************************************************************/

//***************  INCLUDES   **************************************


//***************  VARIABLES  **************************************

int tempAigua = 98 ;           // Variable tempAigua igual a 101
//***************  SETUP   ****************************************
void setup() {
  
  Serial.begin(9600);     // set up Serial library at 9600 bps
  if ( tempAigua < 90) // Si tempAigua es superior a 100 
  {
    Serial.print("Aigua encara no supera els 90C,  no esta bullint!"); // Escriu el missatge
  } 

  else if (( tempAigua >=90)&& (tempAigua < 100)) // Si tempAigua es superior a 100 
  {
    Serial.print("Aigua inferiora 100C i superior a  90C, aigua a punt de  bullir!"); // Escriu el missatge
  }
  else {
    Serial.print("Aigua superior a 100C , aigua esta bulllint!"); // Escriu el missatge
  }
}

//*************    LOOP   ******************************************
void loop() {

}
