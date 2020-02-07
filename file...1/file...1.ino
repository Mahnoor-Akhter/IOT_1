const int ledpin=2;
const int buttonpin=3;
int buttonstate=0;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(ledpin, OUTPUT);
  pinMode(buttonpin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
buttonstate=digitalRead(buttonpin);
if(buttonstate==HIGH)
{
  digitalWrite(ledpin,HIGH);
  
}
else{
  digitalWrite(ledpin,LOW);
}

