int prob = 0;
int relay_pin = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(relay_pin, OUTPUT);
  Serial.begin(9600);
  prob = 0;
}

void loop() {
  if(Serial.available() > 0) {
    int number = Serial.read();
    prob = number * 4;
    Serial.print(prob);
    Serial.print('\n');
  }
  //prob = 0;

  if (random(0, 1000) < prob) {
    digitalWrite(LED_BUILTIN, HIGH);
    digitalWrite(relay_pin, LOW);
  } else {
    digitalWrite(LED_BUILTIN, LOW);
    digitalWrite(relay_pin, HIGH);
  }
  
  delay(random(50, 150));
}
