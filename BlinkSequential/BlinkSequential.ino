/*
  Sequential Blink

  Blink 3 LEDs in order

*/
#define led_pin13 13
#define led_pin8 8
#define led_pin3 3

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(led_pin13, OUTPUT);
  pinMode(led_pin8, OUTPUT);
  pinMode(led_pin3, OUTPUT);
}

// the loop function runs over and over again forever
int i = 1;

void loop() {
  for(int x = 0; x < 3; x++){
    if (x == 0){      
      digitalWrite(led_pin13, HIGH);
      digitalWrite(led_pin8, LOW);
      digitalWrite(led_pin3, LOW);
    } else if ( x == 1 ) {
      digitalWrite(led_pin13, LOW);
      digitalWrite(led_pin8, HIGH);
      digitalWrite(led_pin3, LOW);
    } else {
      digitalWrite(led_pin13, LOW);
      digitalWrite(led_pin8, LOW);
      digitalWrite(led_pin3, HIGH);
    }
    delay(500);
  }
}
