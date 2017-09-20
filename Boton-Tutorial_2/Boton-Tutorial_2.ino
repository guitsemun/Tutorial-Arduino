
int led = 8; // Led -> Pin 8 del Arduino
int boton = 2; // Boton -> Pin 2 del Arduino

int estado; // Variable donde almacenamos el valor de Boton

void setup(){
  pinMode(led,OUTPUT); // Led -> Salida
  pinMode(boton,INPUT); // Boton -> Entrada
  }

void loop(){
  estado = digitalRead(boton); //estado -> Boton ( 1 o 0)

  if (estado == HIGH){// BOTON = 1
    digitalWrite(led,HIGH); // LED = 1
    }
  else{
    digitalWrite(led,LOW); // LED = 0 
    }
  }
