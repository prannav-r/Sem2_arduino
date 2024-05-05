#include <DHT.h> 
#define DHTPIN A0
#define DHTTYPE DHT11
DHT dht(DHTPIN,DHTTYPE);
int buzzer=10;
void setup(){
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
  delay(500);
  Serial.println("Temperature sensor\n\n");
  delay(1000);
  dht.begin();
}
void loop(){
  digitalWrite(buzzer, LOW);	    
  float temperature = dht.readTemperature();
  Serial.print("Temperature =");
  Serial.print(temperature);
  Serial.print(".C");
  Serial.print("\n");
  float humidity = dht.readHumidity();
  Serial.print("Humidity =");
  Serial.print(humidity);
  Serial.print("g/m3");
  Serial.print("\n");
  if(temperature>39)
  {
    beep(50);
  }
  delay(5000);
}
void beep(unsigned char delayms)
{
  digitalWrite(buzzer, HIGH);
  delay(delayms);
  digitalWrite(buzzer, LOW);
  delay(delayms);
}