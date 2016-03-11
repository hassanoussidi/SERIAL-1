/******************************************************************
 **                                                              **       
 **                   SERIAL 4.5 ESTRUCTURES SWITCHCASE                       ** 
 **                                                              ** 
 ******************************************************************/

//***************  INCLUDES   **************************************


//***************  VARIABLES  **************************************
int sensorReading = 0;          // Variable sensor de llum
//***************  SETUP   ****************************************
void setup() {
  
  Serial.begin(9600);     // set up Serial library at 9600 bps
  Serial.print("The day is "); 
   
  switch (sensorReading) {
  case 0:    
    Serial.println("dark"); //Escriure fosc si el sensor val 0
    break;
  case 1:    
    Serial.println("dim"); //Escriure fosc si el sensor val 1
    break;
  case 2:    
    Serial.println("medium"); //Escriure mig si el sensor val 2
    break;
  case 3:
    Serial.println("bright"); //Escriure clar si el sensor val 3
    break;
  default:
    Serial.println("... I don't know!!!"); //Escriure no lo sé si el sensor val  diferent valor
  }
}

//*************    LOOP   ******************************************
void loop() {

}
