void setup() {
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);
}

void loop() {
 digitalWrite(8,HIGH);
 digitalWrite(7,HIGH);
 digitalWrite(6,HIGH);
 digitalWrite(5,HIGH);
 delay(1500);
 digitalWrite(8,LOW);
 digitalWrite(7,LOW);
 digitalWrite(6,LOW);
 digitalWrite(5,LOW);
 delay(1000);
}
