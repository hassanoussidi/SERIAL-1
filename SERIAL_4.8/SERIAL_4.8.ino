/******************************************************************
 **                                                              **       
 **                   SERIAL 4.8 ESTRUCTURES WHILE COMPTADOR       ** 
 **                                                              ** 
 ******************************************************************/

//***************  INCLUDES   **************************************


//***************  VARIABLES  **************************************

int comptar = 11; // Variable comptar
int i = 0;
    
//***************  SETUP   ****************************************
void setup() {
  
  Serial.begin(9600);     // set up Serial library at 9600 bps
 Serial.begin(9600);     // set up Serial library at 9600 bps
  Serial.print("Ara comptare de 0 a ");
  Serial.println(comptar);  
   while(i <= comptar)
  {
    Serial.print(i);
    Serial.print("-");
    i++;
  } 

    
  

}

//*************    LOOP   ******************************************
void loop() {

}
