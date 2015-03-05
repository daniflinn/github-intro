// this is my blink sketch.  Is it going to work? 
// Yes it will, if you want an LED on pin 13 to blink for one
// second thn wait one second befoer blinking again, and then repeat forever

int led = 13; // declares "led" to be on pin 13

void setup() {     //sets inputs and outputs           

  pinMode(led, OUTPUT);  //sets led (pin 13) as an output   
}


void loop() {                //declares a loop which will continue repeating each 
                             //comanded in order over and over agian
  digitalWrite(led, HIGH);   //led lights up
  delay(1000);              //delays 1 second before completing the next comande
  digitalWrite(led, LOW);   //led goes off  
  delay(1000);              //delays 1 second before repeating loop
}
