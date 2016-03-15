/******************************************************************
 **                                                              **       
 **                   SERIAL 5.4 PARELL SENAR                     ** 
 **                                                              ** 
 ******************************************************************/

//***************  INCLUDES   **************************************


//***************  VARIABLES  **************************************
int hores, numero;
float salari, impost, preu_hora = 20;


//***************  SETUP   ****************************************
void setup() {
  
Serial.begin(9600); // initialitzar llibreria serial begin

Serial.print("Quantes hores s'ha treballat en una setmana?");

}

//*************    LOOP   ******************************************
void loop() { 
while (Serial.available() > 0) {// mentre sigui superior a 0 any serial available, read it

hores = Serial.parseInt();// look for valid int the incoming serial stream
Serial.println (hores);

if (Serial.read() == '\n') { //look for newline. Is the end of your sentence
salari = hores * preu_hora;
Serial.print (" El salari per  ");
Serial.print (hores);
Serial.print("hores es de  ");
Serial.print (salari);
Serial.println (" euros");
if (salari <= 800 ){
  impost = 0.05; 
  impost = impost *salari;
                   }
else {
  impost = 0.1;
  impost = impost*salari;
     }
Serial.print (" Els impostsos d'aquest salari són de ");
Serial.print (impost);
Serial.print ("euros");
}
}
}


