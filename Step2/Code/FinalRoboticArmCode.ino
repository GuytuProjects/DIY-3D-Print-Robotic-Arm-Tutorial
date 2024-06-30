#include <Servo.h>

Servo Thumb, Index, Middle, Ring, Little;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 45;    // variable to store the servo position

void setup() {
  Serial.begin(9600); // Initialize Serial Terminal
  
  // Print User option to the Serial Monitor
  Serial.println("1. One Finger");
  Serial.println("2. Two Fingers");
  Serial.println("3. Three Fingers");
  Serial.println("4. Four Fingers");
  Serial.println("5. Fist");
  
  // attaches the servo objects to pins 2-6
  Little.attach(10);
  Ring.attach(3);
  Middle.attach(9);
  Index.attach(5);
  Thumb.attach(6); 

  // Sets the origianl position of the servos to 45
  Little.write(pos);
  Ring.write(pos);
  Middle.write(pos);
  Index.write(pos);
  Thumb.write(pos);
}

void loop() {
  Serial.println("Which gesture would you like to execute?"); // Prints to Serial Monitor asking the user to choose options
  
  while (Serial.available() == 0){
  }
  
  int menuChoice = Serial.parseInt(); // Takes User Input and stores in an Integer variable
  
  // Takes User Input and runs it through a series of scenarios
  switch (menuChoice) {
    // Tells the code to run option 1: One finger
    case 1:
    	for (pos = 45; pos <= 150; pos += 1) { // Thumb goes from 45 degrees to 150 degrees
          // in steps of 1 degree
          Index.write(pos);              // tell Index servo to go to position in variable 'pos'
          Middle.write(pos);             // tell Middle servo(Middle Finger) to go to position in variable 'pos'
          Ring.write(pos);               // tell Ring servoe to go to possition in variable 'pos'
          Little.write(pos);             // tell Little servoe(Pinkie Finger) to go to position in variable 'pos'
          delay(20);                       // waits 20ms for the servo to reach the position
        }
    	delay(2000); // waits 2 seconds before openning back up
        for (pos = 150; pos >= 45; pos -= 1) { // goes from 150 degrees to 45 degrees
          // in steps of 1 degree
          Index.write(pos);              // tell Index servo to go to position in variable 'pos'
          Middle.write(pos);             // tell Middle servo(Middle Finger) to go to position in variable 'pos'
          Ring.write(pos);               // tell Ring servoe to go to possition in variable 'pos'
          Little.write(pos);             // tell Little servoe(Pinkie Finger) to go to position in variable 'pos'
          delay(20);                       // waits 20ms for the servo to reach the position
        }
    	break; // ends the scenario
    
    // Tell the code to run option 2: Two fingers
    case 2:
  		for (pos = 45; pos <= 150; pos += 1) { // goes from 45 degrees to 150 degrees
          // in steps of 1 degree
          Middle.write(pos);              // tell Middle servo (Middle Finger) to go to position in variable 'pos'
          Ring.write(pos);                // tell Ring servo (Ring Finger) to go to position in variable 'pos'
          Little.write(pos);              // tell Little servo (Pinkie Finger) to go to position in variable 'pos'
          delay(20);                       // waits 20ms for the servo to reach the position
        }
    	delay(2000); // waits 2 seconds before openning back up
        for (pos = 150; pos >= 45; pos -= 1) { // goes from 150 degrees to 45 degrees
          // in steps of 1 degree
          Middle.write(pos);              // tell Middle servo (Middle Finger) to go to position in variable 'pos'
          Ring.write(pos);                // tell Ring servo (Ring Finger) to go to position in variable 'pos'
          Little.write(pos);              // tell Little servo (Pinkie Finger) to go to position in variable 'pos'
          delay(20);                       // waits 20ms for the servo to reach the position
        }
    	break; // ends the scenario
    
    case 3:
  		for (pos = 45; pos <= 150; pos += 1) { // goes from 45 degrees to 150 degrees
          // in steps of 1 degree
          Ring.write(pos);                // tell Ring servo (Ring Finger) to go to postion in variable 'pos'
          Little.write(pos);              // tell Little servo (Pinkie Finger) to go to position in variable 'pos'
          delay(20);                       // waits 15ms for the servo to reach the position
        }
    	delay(2000);
        for (pos = 150; pos >= 45; pos -= 1) { // goes from 180 degrees to 0 degrees
          // in steps of 1 degree
          Ring.write(pos);                // tell Ring servo (Ring Finger) to go to postion in variable 'pos'
          Little.write(pos);              // tell Little servo (Pinkie Finger) to go to position in variable 'pos'
          delay(20);                       // waits 15ms for the servo to reach the position
        }
    	break;
    
    case 4:
  		for (pos = 45; pos <= 150; pos += 1) { // goes from 0 degrees to 180 degrees
          // in steps of 1 degree
          Little.write(pos);              // tell Little servo (Pinkie Finger) to go to position in variable 'pos'
          delay(20);                       // waits 15ms for the servo to reach the position
        }
    	delay(2000);
        for (pos = 150; pos >= 45; pos -= 1) { // goes from 180 degrees to 0 degrees
          // in steps of 1 degree
          Little.write(pos);              // tell Little servo (Pinkie Finger) to go to position in variable 'pos'
          delay(20);                       // waits 15ms for the servo to reach the position
        }
    	break;
    
    case 5:
  		for (pos = 45; pos <= 150; pos += 1) { // goes from 0 degrees to 180 degrees
          // in steps of 1 degree
          Thumb.write(pos);              // tell Thumb servo (Thumb) to go to position in variable 'pos'
          Index.write(pos);              // tell Index servo (Index Finger) to go to position in variable 'pos'
          Middle.write(pos);             // tell Middle servoe (Middle Finger) to go to position in variable 'pos'
          Ring.write(pos);               // tell Ring servo (Ring Finger) to go to position in variable 'pos'
          Little.write(pos);             // tell Little servoe (Pinkie Finger) to go to position in variable 'pos'
          delay(20);                       // waits 15ms for the servo to reach the position
        }
    	delay(2000);
        for (pos = 150; pos >= 45; pos -= 1) { // goes from 180 degrees to 0 degrees
           // in steps of 1 degree
          Thumb.write(pos);              // tell Thumb servo (Thumb) to go to position in variable 'pos'
          Index.write(pos);              // tell Index servo (Index Finger) to go to position in variable 'pos'
          Middle.write(pos);             // tell Middle servoe (Middle Finger) to go to position in variable 'pos'
          Ring.write(pos);               // tell Ring servo (Ring Finger) to go to position in variable 'pos'
          Little.write(pos);             // tell Little servoe (Pinkie Finger) to go to position in variable 'pos'
          delay(20);                       // waits 15ms for the servo to reach the position
        }
    	break;
  }
}