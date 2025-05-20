/*
Modified DigitalReadSerial arduino example

modified for 3 buttons and adds a condition that reads
2 buttons pressed at the same time
*/

// initialize pins that the buttons are on
int pushButton13 = 13;
int pushButton7 = 7;
int pushButton2 = 2;

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // make the pushbutton's pin an input:
  pinMode(pushButton13, INPUT);
  pinMode(pushButton7, INPUT);
  pinMode(pushButton2, INPUT);
}



void loop() {
  int buttonState13 = digitalRead(pushButton13);
  int buttonState7 = digitalRead(pushButton7);
  int buttonState2 = digitalRead(pushButton2); 
  // print out the state of the button:
  delay(10);  // delay in between reads for stability

  if( buttonState13 == 1 && buttonState7 == 1){
    Serial.println("A + B");  
  } else if (buttonState13 == 1){
    Serial.println("A");
  } else if ( buttonState7 == 1 ){
    Serial.println("B");
  } else if ( buttonState2 == 1 ){
    Serial.println("C");
  }


}