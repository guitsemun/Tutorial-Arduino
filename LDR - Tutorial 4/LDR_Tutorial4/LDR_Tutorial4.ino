/*
 *************** THE WELS THEORY ******************
 *
 * Mediremos la intensidad de luz a través de una fotoresistencia LDR
 * y activaremos 3 Leds dependiendo del aumento de intensidad.
 *
 *Para más información visita: www.thewelstheory.com
 *Y sigueme en www.facebook.com/WelsTheory
 *
 */
 // Declarar pines para los LEDS
 int led1 = 2; 
 int led2 = 3;
 int led3 = 4;

 //Pin va a usar el LDR
 int LDR = 0; //A0 -> Del Arduino
 
 //Variable LDR
 int ValorLDR = 0;

 void setup(){
    pinMode(led1,OUTPUT);// led1 -> Salida
    pinMode(led2,OUTPUT);// led2 -> Salida
    pinMode(led3,OUTPUT);// led3 -> Salida

    Serial.begin(9600); // Configuracion del serial del Arduino
  }

 void loop(){
  ValorLDR = analogRead(LDR); // LDR -> Guardarlo en Valor LDR

  Serial.println(ValorLDR);// Visualizar valor del LDR
  
  if (ValorLDR > 256){
    digitalWrite(led1,HIGH);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    }

  if (ValorLDR > 512){
    digitalWrite(led1,LOW);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,LOW);
    }

  if (ValorLDR > 700){
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,HIGH);
    }  

  delay(100);//Actualizaciones del LDR
  }
  
 
 
