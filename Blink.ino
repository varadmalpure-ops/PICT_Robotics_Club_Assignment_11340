#define LEDPIN 5
#define SPEED 1000

void setup() {
  pinMode(LEDPIN, OUTPUT);
}

void loop() {
  digitalWrite(LEDPIN, HIGH);  
  delay(SPEED);                    
  digitalWrite(LEDPIN, LOW);
  delay(SPEED);                     
}