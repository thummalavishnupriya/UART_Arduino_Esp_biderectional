void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    String received = Serial.readString();
    Serial.println("Received from ESP32: " + received);
  }
  Serial.println("Hello ESP32");
  delay(1000);
}
