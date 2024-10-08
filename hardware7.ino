//shooting star: pin10

void setup() {
  // put your setup code here, to run once:
for (int i = 0; i < 11; i++) {
  pinMode(i, OUTPUT);
}
randomSeed(12345678);
  for (int i = 0; i < 10; i++) {
    digitalWrite(i, HIGH);
    
  }
}

void loop() {
  // put your main code here, to run repeatedly:
for (int i = 0; i < 10; i++) {
  bool rand= random(200);
  digitalWrite(i, rand);
}
bool rand = random(300);
digitalWrite(10, 1-rand);
delay(25);
if (digitalRead(10)) delay(100);
}
