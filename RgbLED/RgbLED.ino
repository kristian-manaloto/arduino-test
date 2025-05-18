/*
  Playing with RGB LED
*/

const int PIN10_RED = 10;
const int PIN7_GREEN = 7;
const int PIN3_BLUE = 3;

void setup() {
  pinMode(PIN10_RED,OUTPUT); 
  pinMode(PIN7_GREEN,OUTPUT);
  pinMode(PIN3_BLUE,OUTPUT);

}

void loop() {
  //blink_custom_color(HIGH,LOW,HIGH);
  cycle();


}

/*
  just turns down one value and turns up the next value
*/
void cycle(){
  //yellow
  digitalWrite(PIN10_RED, HIGH);
  digitalWrite(PIN7_GREEN, HIGH);
  digitalWrite(PIN3_BLUE, LOW);

  delay(1000);

  //purp
  digitalWrite(PIN10_RED, HIGH);
  digitalWrite(PIN7_GREEN, LOW);
  digitalWrite(PIN3_BLUE, HIGH);

  delay(1000);

  //turq
  digitalWrite(PIN10_RED, LOW);
  digitalWrite(PIN7_GREEN, HIGH);
  digitalWrite(PIN3_BLUE, HIGH);

  delay(1000);
}

void blink_custom_color(int r,int g, int b){
  digitalWrite(PIN10_RED, r);
  digitalWrite(PIN7_GREEN, g);
  digitalWrite(PIN3_BLUE, b);

  delay(1000);
}
