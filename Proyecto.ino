#define Verde1 A2
#define Verde2 A5
#define Amarillo1 A1
#define Amarillo2 A4
#define Rojo1 A0
#define Rojo2 A3

void setup() {

  pinMode(Rojo1,OUTPUT); 

  pinMode(Amarillo1,OUTPUT);

  pinMode(Verde1,OUTPUT);

  pinMode(Rojo2,OUTPUT);

  pinMode(Amarillo2,OUTPUT);

  pinMode(Verde2,OUTPUT);

}

  void loop() {

  //Ciclo semaforo2

  digitalWrite(Rojo1,HIGH);

  digitalWrite(Amarillo1,LOW);

  digitalWrite(Verde1,LOW);

  digitalWrite(Rojo2,LOW);

  digitalWrite(Amarillo2,LOW);

  digitalWrite(Verde2,HIGH);

  delay(3000);

  //Cambio semaforo2

  digitalWrite(Amarillo2,HIGH);

  digitalWrite(Verde2,LOW);

  delay(1000);

  //Ciclo semaforo1

  digitalWrite(Rojo1,LOW);

  digitalWrite(Amarillo1,LOW);

  digitalWrite(Verde1,HIGH);

  digitalWrite(Rojo2,HIGH);

  digitalWrite(Amarillo2,LOW);

  digitalWrite(Verde2,LOW);

  delay(3000);
  
   //Cambio semaforo1

  digitalWrite(Amarillo1,HIGH);

  digitalWrite(Verde1,LOW);

  delay(1000);
     }