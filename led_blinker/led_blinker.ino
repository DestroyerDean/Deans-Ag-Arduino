int led1 = 4;
int led2 = 5;
int led3 = 7;
int led4 = 8;

void setup() {
pinMode (led1, OUTPUT);
pinMode (led2, OUTPUT);
pinMode (led3, OUTPUT);
pinMode (led4, OUTPUT);
}
 digitalWrite(4, HIGH);
  delay(800);
  digitalWrite(5, HIGH);
  delay(800);
  digitalWrite(7, HIGH);
void loop() { 
 
  digitalWrite(4, LOW);
  delay(800); 
  digitalWrite(8, HIGH);
  digitalWrite(5, LOW);
  delay(800);
  digitalWrite(led2, LOW);
  digitalWrite(led4, HIGH);
  delay (800);
  digitalWrite(led3, LOW);
  digitalWrite(led1, HIGH);
  digitalWrite(led4, LOW);
  delay(800);
  digitalWrite(led2, HIGH);
  digitalWrite(led1, LOW);  
}
