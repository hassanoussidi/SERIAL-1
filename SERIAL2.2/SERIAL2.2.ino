/******************************************************************
 **                                                              **       
 **                   SERIAL 2.1    Operacions Matemàtiques bàsiques                     ** 
 **                                                              ** 
 ******************************************************************/

//***************  INCLUDES   **************************************


//***************  VARIABLES  **************************************
  int a = 3;
  int b = 4;
  int h;


//***************  SETUP   ****************************************
void setup() {
    Serial.begin(9600);     // carrega Serial lliberia comunicació monitor at 9600 bps
    
    Serial.print("a = ");
    Serial.println(a);
    Serial.print("b = ");
    Serial.println(b);
    Serial.println("La hipotenusa d'aquest tringle és: ");
    Serial.print("h = sqrt( pow (a,2)+ pow (b,2)) ");
     h = (sqrt (pow (a,2)+(pow (b,2)));
    Serial.println(h);

 
}
//*************    LOOP   ******************************************
void loop()  // LOOP buit perquè només surti un cop els resultats i no és repeteixin en bucle.
{
}


