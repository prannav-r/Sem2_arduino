const int BUZZER=9;

const int ALCOHOL_SENSOR=3;
int value;
void setup() {
  Serial.begin(9600);
  pinMode(BUZZER,OUTPUT);
  pinMode(ALCOHOL_SENSOR,INPUT);
}

void loop() {
  value=analogRead(ALCOHOL_SENSOR);
  Serial.println(value);
  if (value<300){
    Serial.println("Alcohol Detected");
    digitalWrite(BUZZER,HIGH);
    delay(500);
  }
  else{
    Serial.println("No Alcohol Detected");
    digitalWrite(BUZZER,LOW);
    delay(500);
  }
}
