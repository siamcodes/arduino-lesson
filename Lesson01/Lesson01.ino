

void setup() {
  
Serial.begin(9600);
pinMode(D0,INPUT);
pinMode(D1,INPUT);
pinMode(D2,INPUT);
pinMode(D7,INPUT);
pinMode(D3,OUTPUT);
pinMode(D4,OUTPUT);
pinMode(D5,OUTPUT);
pinMode(D6,OUTPUT);
pinMode(D8,OUTPUT);

}

void loop() {
if(digitalRead(D0) == LOW){
  Serial.println("Hello World");
}
else if(digitalRead(D1) == LOW){
  digitalWrite(D3,HIGH);
}
else if(digitalRead(D2) == LOW){
  analogWrite(D4,200);
  analogWrite(D5,0);
  analogWrite(D6,200);
}
else if(digitalRead(D7) == LOW){

}
else{
  Serial.print("Goodbye\n");
  digitalWrite(D3,LOW);
  digitalWrite(D4,LOW);
  digitalWrite(D5,LOW);
  digitalWrite(D6,LOW);
  digitalWrite(D8,LOW);
}
delay(200);
}
