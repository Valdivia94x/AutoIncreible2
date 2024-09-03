// C++ code
//
//int LED = 13, LED2 = 5;
int LEDS[10];
int numLEDS = sizeof(LEDS) / sizeof(LEDS[0]);

void setup()
{
  for(int i = 0; i < numLEDS; i++){
    LEDS[i] = 13 - i;
  }
  
  for (int i = 0; i < numLEDS; i++) {
    pinMode(LEDS[i], OUTPUT);
  }
}

void loop()
{
  for(int i = 0; i < numLEDS; i++){
    digitalWrite(LEDS[i], HIGH);
    delay(100); // Wait for 1000 millisecond(s)
    digitalWrite(LEDS[i], LOW);
    delay(100); // Wait for 1000 millisecond(s)
  }
  
  for(int i = numLEDS; i > 0; i--){
    digitalWrite(LEDS[i], HIGH);
    delay(100); // Wait for 1000 millisecond(s)
    digitalWrite(LEDS[i], LOW);
    delay(100); // Wait for 1000 millisecond(s)
  }
}