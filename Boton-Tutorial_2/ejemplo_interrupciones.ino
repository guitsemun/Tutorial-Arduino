/*
 * File:   ejemplo_interrupciones
 * Author: Alit Tse
 * e-mail: guitsemun@gmail.com
 * Twitter: @yong.tse
*/
//ejemplo de interrupcion INT0 , cuando el pin esta en bajo
//evita rebotes

volatile int contador = 0;   
int n = contador ;
long T0 = 0 ;  // Variable global para tiempo

void setup()
   {    pinMode(2, INPUT);
        Serial.begin(9600); 
        attachInterrupt( 0, ServicioBoton, LOW);
   } 
void loop()
   {   if (n != contador)
           {   Serial.println(contador);
               n = contador ;
           }
   }
void ServicioBoton()
   {
       if ( millis() > T0  + 250)
          {   contador++ ;
              T0 = millis();
          }
    }
