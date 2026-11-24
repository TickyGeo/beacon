void setup(){
  pinMode(3, OUTPUT);  
}

void loop(){
  analogWrite(3, 255);
  delay(500);
  analogWrite(3, 200);
  delay(500);
  analogWrite(3, 150);
  delay(500);
  analogWrite(3, 100);
  delay(500);
  analogWrite(3, 40);
  delay(500);
  analogWrite(3, 0);
  delay(1000);
}
