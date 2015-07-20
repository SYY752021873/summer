
void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  
 
}

void loop() {
  // put your main code here, to run repeatedly:

 digitalWrite(2,HIGH);
   delay(analogRead(A0));
   digitalWrite(2,LOW);
      delay(analogRead(A0));
  digitalWrite(3,HIGH);
   delay(analogRead(A0));
   digitalWrite(3,LOW);
      delay(analogRead(A0));
 digitalWrite(4,HIGH);
   delay(analogRead(A0));
   digitalWrite(4,LOW);
      delay(analogRead(A0));
  digitalWrite(5,HIGH);
   delay(analogRead(A0));
   digitalWrite(5,LOW);
      delay(analogRead(A0));
  digitalWrite(6,HIGH);
   delay(analogRead(A0));
   digitalWrite(6,LOW);
      delay(analogRead(A0));
  digitalWrite(7,HIGH);
   delay(analogRead(A0));
   digitalWrite(7,LOW);
      delay(analogRead(A0));
 digitalWrite(8,HIGH);
   delay(analogRead(A0));
   digitalWrite(8,LOW);
      delay(analogRead(A0));
  digitalWrite(9,HIGH);
   delay(analogRead(A0));
   digitalWrite(9,LOW);
      delay(analogRead(A0));     
}

