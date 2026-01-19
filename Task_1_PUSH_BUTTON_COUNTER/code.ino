const int buttonPin = 2;
unsigned long previousMillis = 0;
unsigned long interval = 250;
unsigned int count = 0;

void setup(){
  Serial.begin(9600);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop(){
  unsigned long currentMillis = millis();
  bool buttonState = digitalRead(buttonPin);
  
  if(buttonState == LOW && currentMillis - previousMillis >= interval){
    Serial.println(count);
     count++;
    if(count == 10){
      count = 0;
    }
    previousMillis = currentMillis;
  }
}
    