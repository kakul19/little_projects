/*
  Controlling LED using a push button

 LED will change its state whenever the switch is pressed. 
 If it is OFF, it will turn ON and if it is ON, it will turn OFF.

*/

// the setup function runs once when you press reset or power the board

int led = 7;        // Define the pin to which anode of the LED is connected (Any Digital I/O pin of Arduino Nano or Uno can be used)
int switch_pin = 8;     // Define the pin to which switch is connected (Any Digital I/O pin of Arduino Nano or Uno can be used)
bool state = false;     // Determines the state of LED, false -> if LED is OFF and true -> if LED is ON

void setup() {
  // initialize led pin as output and switch pin as input.
  pinMode(led, OUTPUT);
  pinMode(switch_pin, INPUT);

  // initially turn the LED OFF
  digitalWrite(led, LOW);     //boolean "state" has been initialized to false and the led has been turned OFF initially in accordance with our rule
}

// the loop function runs over and over again forever
void loop() {

  // checks if switch is pressed

  if(digitalRead(switch_pin == HIGH)){

    // if switch is pressed, change the state of the LED and output it to the LED pin
    
    /*Complement the state of boolean; It will keep a memory of the state of led; 
      If before pressing switch led is on (or state= true) then now the led should be turned off and hence "state=false" and 
      we will write the same on the output pin to led to reflect the change in led*/
    
    state = !state;                 
    
    digitalWrite(led, state);
    
  }
  
                      
}
