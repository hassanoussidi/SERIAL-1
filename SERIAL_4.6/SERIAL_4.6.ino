/******************************************************************
 **                                                              **       
 **                   SERIAL 4.6 ESTRUCTURES FOR COMPTADOR       ** 
 **                                                              ** 
 ******************************************************************/

//***************  INCLUDES   **************************************


//***************  VARIABLES  **************************************
int comptar = 8;      // Variable comptar
//***************  SETUP   ****************************************
void setup() {
  
  Serial.begin(9600);     // set up Serial library at 9600 bps
 Serial.print("Ara comptare de 0 a ");
  Serial.println(comptar);
  for (int i=0; i <= comptar; i++)
  {
    Serial.print(i);
    if ( i< comptar){
    Serial.print("-");  
    }
    
  } 

}

//*************    LOOP   ******************************************
void loop() {

}
