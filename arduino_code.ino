int light = 8;
int fan = 9;

void setup() {
  pinMode(light, OUTPUT);
  pinMode(fan, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    char cmd = Serial.read();

    if (cmd == 'L') digitalWrite(light, HIGH);   // Light ON
    if (cmd == 'l') digitalWrite(light, LOW);    // Light OFF
    if (cmd == 'F') digitalWrite(fan, HIGH);     // Fan ON
    if (cmd == 'f') digitalWrite(fan, LOW);      // Fan OFF
  }
}
