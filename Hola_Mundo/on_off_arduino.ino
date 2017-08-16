//**************** THE WELS THEORY ******************
//Descripción: Encender un led que se conecta al pin 12
//cada 1000ms (1s)
//
//Para más información visita: www.thewelstheory.com
//Facebook: www.facebook.com/WelsTheory
//Instagram: www.instagram.com/Wels_Theory
//Youtube: www.youtube.com/Wels_Theory
//Medium: www.medium.com/the-wels-theory
//
int led = 12; //Led conectado al pin 12

//Acá configuramos los pines
void setup(){
  pinMode(led,OUTPUT);  //Asignamos a led como salida
  }

//Acá el código se lee constantemente
void loop(){
  digitalWrite(led,HIGH); //Encendemos el led
  delay(1000);            //Esperamos 1000ms = 1s
  digitalWrite(led,LOW);  //Apagamos el led
  delay(1000);            //Esperamos 1s
  }
