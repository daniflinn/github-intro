// this is my blink sketch.  Is it going to work?
int led = 13; //"led" to pin 13

void setup() {                

  pinMode(led, OUTPUT);  //sets led (pin 13) as an output   
}


void loop() {
  digitalWrite(led, HIGH);   //led lights up
  delay(1000);              //delays 1 second 
  digitalWrite(led, LOW);    
  delay(1000);              
}
