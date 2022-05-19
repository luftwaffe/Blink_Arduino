
int rojo = 11;
int verde = 10;
int azul = 9;

void setup() {
  // put your setup code here, to run once:
pinMode(rojo , OUTPUT);
pinMode(verde , OUTPUT);
pinMode(azul , OUTPUT);
}

void loop() {
  digitalWrite(rojo,HIGH);
  digitalWrite(verde,HIGH);
  digitalWrite(azul,HIGH);
  delay(500);
  digitalWrite(rojo,LOW);
  digitalWrite(verde,LOW);
  digitalWrite(azul,LOW);
  delay(500);
  // put your main code here, to run repeatedly:

}
