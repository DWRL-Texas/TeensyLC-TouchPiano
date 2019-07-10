/*This sketch requires a Teensy LC, 
 * which has up to 11 pins that can act as touch sensitive
 * inputs.
*/

int touchPin1 = 23;
int touchPin2 = 22;
int touchPin3 = 0;

void setup() {

  pinMode(touchPin1, INPUT);
  pinMode(touchPin2, INPUT);
  pinMode(touchPin3, INPUT);

  pinMode(12, OUTPUT);

  //pinMode(ledPin, OUTPUT);

  Serial.begin(9600);

}

void loop() {

  int touchVal1 = touchRead(touchPin1);
  int touchVal2 = touchRead(touchPin2);
  int touchVal3 = touchRead(touchPin3);

  Serial.print(touchVal1);
  Serial.print(", ");
  Serial.print(touchVal2);
  Serial.print(", ");
  Serial.print(touchVal3);
  Serial.println();

  delay(50);

  if (touchVal1 >= 16000) {
    tone(12, 295);
    delay(100);
    noTone(12);
  }
  if (touchVal2 >= 13700) {
    tone(12, 330);
    delay(100);
    noTone(12);
  }
  if (touchVal3 >= 13500) {
    tone(12, 370);
    delay(100);
    noTone(12);
  }
}
