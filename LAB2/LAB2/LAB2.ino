void setup ()  
{  
  pinMode ( 13, OUTPUT);  // to set the OUTPUT mode of pin number 13.  
  pinMode ( 7, OUTPUT);  // to set the OUTPUT mode of pin number 7.  
}  
void loop ()  
{  
  digitalWrite (13, HIGH);   
  digitalWrite (7, LOW);   
  delay(1500);  // 1.5 second = 1.5 x 1000 milliseconds  
  digitalWrite (13, LOW);  
  digitalWrite (7, HIGH);  
  delay(1000);  // 1 second = 1 x 1000 milliseconds  
}