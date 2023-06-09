int Delay = 2000;
bool a;
void setup() {
  
  pinMode(D0,INPUT_PULLUP);
  pinMode(D1,INPUT);
  pinMode(D8,OUTPUT);
  a= false;
  Serial.begin(9600);
}
void D() {
   if(digitalRead(D0) == LOW){
    a = true;
    if(a == true){
      Delay = Delay-500;
      a = false;
    }else{
      Delay=Delay;
    }
    Serial.print(a);
  Serial.print("  ");
  Serial.println(Delay);
  }
  
}
void loop() {
  
  digitalWrite(D8,1);
  delay(Delay);
  digitalWrite(D8,0);
  delay(Delay); 
  D();
}
