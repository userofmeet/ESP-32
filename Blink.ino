//Sample code for ESP-32 just to check whether the ESP-32 works or not (Just like examples -> Blink code we use in Arduino IDE for Arduino boards
void setup() {
pinMode(2, OUTPUT);      //Built in LED for ESP-32 is pin no 2
}
void loop() {
digitalWrite(2, HIGH);
delay(1000);
digitalWrite(2, LOW);
delay(1000);
}
