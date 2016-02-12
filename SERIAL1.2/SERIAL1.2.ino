/*********************************************************************************
 **                                                                             **       
 **                  ESCRIURE MISSATGE REPETIDAMENT (SERIAL 1.2)                ** 
 **                                                                             ** 
 *********************************************************************************/

//***************  INCLUDES   ****************************************************


//***************  VARIABLES  *****************************************************


//***************  SETUP   ********************************************************
void setup()                // s'executa només un cop quan comença el programa
{
  Serial.begin(9600);       // carrega lliberia Serial  at 9600 bps
  

}
//*************    LOOP   *********************************************************
void loop()                  // s'executa repetidament una vegada rere una altra
{
  Serial.print("Hello world!");  // escriu per pantalla hola i manté linia 
  delay(1000);                   // Retard d'un segon fins a tornara escriure l'anterior instrucció
                                      

}
