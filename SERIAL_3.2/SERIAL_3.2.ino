/******************************************************************
 **                                                              **       
 **                   SERIAL 3.2. PRINT2                     ** 
 **                                                              ** 
 ******************************************************************/

//***************  INCLUDES   **************************************


//***************  VARIABLES  **************************************

int thisByte = 33; 

//***************  SETUP   ****************************************
void setup() {
  
  Serial.begin(9600); 
  Serial.println("ASCII Table ~ Character Map"); 

}

//*************    LOOP   ******************************************
void loop() {
  Serial.write(thisByte);       //Escriu el caracter ASCII del numero que val THIS BYTE
  
  Serial.print(", dec: ");       // Escriu al costat 
  Serial.print(thisByte);        // El valor en DEC de la variable thisByte  
  Serial.print(", hex: ");       //Escriu al costat
  Serial.print(thisByte, HEX);    //  El valor en HEX de la variable thisByte
  Serial.print(", oct: ");        //Escriu al costat
  Serial.print(thisByte, OCT);    //  El valor en OCT de la variable thisByte  
  Serial.print(", bin: ");        //Escriu al costat
  Serial.println(thisByte, BIN);  //  El valor en BIN de la variable thisByte 

  if(thisByte == 126)  // quan thisByte sigui 126 para d'imprimir caracters '~'
  { 
    while(true) // mentre this byte sigui 126
    { 
    } 
  } 
  thisByte++;     // incrementa 1 thisByte 


}
