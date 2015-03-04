// this is my blink sketch.  Is it going to work?
int led = 13; //set pin 13 as output

void setup() {                

  pinMode(led, OUTPUT);     
}


void loop() {
  digitalWrite(led, HIGH);   
  delay(1000);              
  digitalWrite(led, LOW);    
  delay(1000);              
}
