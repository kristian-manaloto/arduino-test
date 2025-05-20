/*
3 buttons toggle 3 LEDs (red, blue and green) 
+ power corresponding color on a single RGB LED

allowing person to toggle the color of the the
RGB LED while using single color LEDs to indicate
which colors are toggled.
*/

int inputBlue = 3; // blue in
int inputGreen = 5; // green in
int inputRed = 7; // red in

int outputBlue = 9; // blue out
int outputGreen = 11; // green out
int outputRed = 13; // red out

void setup() {

  // blue
  pinMode(inputBlue, INPUT);
  pinMode(outputBlue, OUTPUT);
  
  // green
  pinMode(inputGreen, INPUT);
  pinMode(outputGreen, OUTPUT);
  
  //red 
  pinMode(inputRed, INPUT);
  pinMode(outputRed, OUTPUT);
}

// bools used to keep track of toggled state
bool toggleBlue = false;
bool toggleGreen = false;
bool toggleRed = false;

/*
  if button pressed:
    toggle var
    if toggled:
      turn on
    if not toggled:
      turn off
*/
void loop() {

  int stateBlue = digitalRead(inputBlue);
  int stateGreen = digitalRead(inputGreen);
  int stateRed = digitalRead(inputRed);

  if(stateRed == 1){
    toggleRed = !toggleRed;
    if(toggleRed){
      digitalWrite(outputRed, HIGH);
    } else {
      digitalWrite(outputRed, LOW);
    }
  }

  if (stateBlue == 1) {
    toggleBlue = !toggleBlue;
    if(toggleBlue){
      digitalWrite(outputBlue, HIGH);
    } else {
      digitalWrite(outputBlue, LOW);
    }
  }
  
  if (stateGreen == 1) {
    toggleGreen = !toggleGreen;
    if(toggleGreen){
      digitalWrite(outputGreen, HIGH);
    } else {
      digitalWrite(outputGreen, LOW);
    }
  }

  delay(250); // delay 0.5sec for smoothness

}
