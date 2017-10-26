void setup() {
    Serial.begin(9600);
    pinMode(A0, INPUT);
    pinMode(D7, OUTPUT);
}

void loop() {
    if (analogRead(A0) > 3000) {
        digitalWrite(D7, HIGH); 
    } else {
        digitalWrite(D7, LOW); 
    }
    delay(200);
}
