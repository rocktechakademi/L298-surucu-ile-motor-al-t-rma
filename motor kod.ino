int input1=2;
int input2=3;


void setup() {
  pinMode(input1, INPUT);
  pinMode(input2, INPUT);
  pinMode(input1, OUTPUT);
  pinMode(input2, OUTPUT);
 
}

void loop() {
  digitalWrite(input1, HIGH);
  delay(3000);
  digitalWrite(input2, LOW);
  delay(3000);
 
}
