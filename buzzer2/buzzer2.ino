int D = 2000;
void setup() {
  // put your setup code here, to run once:
  pinMode(D0,INPUT_PULLUP);
  pinMode(D8,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(D0) == LOW){
    D = D-500;
    Serial.print(D);
  }else{
    D = D;
  }
  digitalWrite(D8,1);
  delay(D);
  digitalWrite(D8,0);
  delay(D);
}
