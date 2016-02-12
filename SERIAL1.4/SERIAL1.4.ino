/*********************************************************************************
 **                                                                             **       
 **                  ESCRIURE MISSATGE PORT SERIE (SERIAL 1.4)                ** 
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
void loop()                  //s'executa repetidament una vegada rere una altra
{
  Serial.println("Escullel numero de l'operacio que vols realitzar?");  //escriu missatge per pantalla nova linia 
  delay(1000);                   //Retard d'un segon fins a tornara escriure l'anterior instrucció*
   Serial.println(" 1. Comprovar numero tarjeta credit");                                   
  delay(1000);                   //Retard d'un segon fins a tornara escriure l'anterior instrucció*
  Serial.println (" 2. Comprovar numero de compte bancari");
  delay(1000);                   //Retard d'un segon fins a tornara escriure l'anterior instrucció*
  Serial.println (" 3. Buscar un digit perdut de tarjeta de credit");                                  
                                   

}
