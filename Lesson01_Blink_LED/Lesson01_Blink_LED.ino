#include <AceSegment.h>


void setup() {
  // put your setup code here, to run once:
  pinMode(16, OUTPUT);
  pinMode(15, OUTPUT);
  digitalWrite(16,LOW);
  digitalWrite(15,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(16,LOW);
  delay(10000);
  digitalWrite(16,HIGH);
  delay(10000);
  digitalWrite(16,LOW);
  delay(10000);
  digitalWrite(16,HIGH);
  delay(10000);


}
