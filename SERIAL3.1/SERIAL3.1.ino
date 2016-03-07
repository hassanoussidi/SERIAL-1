/******************************************************************
 **                                                              **       
 **                 SERIAL 3.1  DIFERENCIES PRINT /WRITE
 **                                                              ** 
 ******************************************************************/

//***************  INCLUDES   **************************************


//***************  VARIABLES  **************************************
int num = 35;

//***************  SETUP   ****************************************
void setup() {
  
Serial.begin(9600);    // set up Serial library at 9600 bps

  Serial.println("Diferents formats per un mateix numero:");

  Serial.write(num); // Escriu el caracter que correspon el numero ASCII de la variable num
  Serial.println(); // Passa a la següent línia
  
  Serial.println(num); // Escriu al monitor el numero  que val la variable num en una altra linia
  Serial.println(num,DEC); //Escriu el numero per pantalla en decimal en unaaltra linia
  
  Serial.println(num,BIN);//Escriu el numero que val num en binari a la pantalla
  
  Serial.println(num,HEX);  //Escriu el numero que val num en Hexadecimal a la pantalla
  
  Serial.println(num,OCT); //Escriu el numero que val num en OCTAL a la pantalla

}

//*************    LOOP   ******************************************
void loop() {  // LOOP buit per que no cal realitzar cap operació ciclicament
  
}
