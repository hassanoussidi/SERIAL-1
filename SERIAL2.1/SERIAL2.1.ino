/******************************************************************
 **                                                              **       
 **                   SERIAL 2.1    Operacions Matemàtiques bàsiques                     ** 
 **                                                              ** 
 ******************************************************************/

//***************  INCLUDES   **************************************


//***************  VARIABLES  **************************************
  int a = 5;
  int b = 10;
  int c = 20;


//***************  SETUP   ****************************************
void setup() {
    Serial.begin(9600);     // carrega Serial lliberia comunicació monitor at 9600 bps

  Serial.println("Alguns conceptes de matemàtiques: ");

  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
Serial.println(b);
  Serial.print("c = ");
  Serial.println(c);

  Serial.print("a + b = ");       // suma
  Serial.println(a + b);

  Serial.print("a * c = ");       // multiplicació
  Serial.println(a * c);
  
  Serial.print("c / b = ");       // quocient de la divisió
  Serial.println(c / b);

  Serial.print("c % b = ");       // resto de la divisió entera
  Serial.println(c % b);
  
  Serial.print("b - c = ");       // resta
  Serial.println(b - c);
}
//*************    LOOP   ******************************************
void loop()  // LOOP buit perquè només surti un cop els resultats i no és repeteixin en bucle.
{
}


