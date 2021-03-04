 #include <Servo.h>

/* Wiring:
 *  Digital Pin 3 = Index finger
 *  Digital Pin 5 = Middle finger
 *  Digital Pin 7 = Ring finger
 *  Digital Pin 9 = Pinky finger
 *  Digital Pin 11 = Thumb finger
 */

Servo index, middle, ring, pinky, thumb;

void setup() {
                      // all servo assignments made here
  Serial.begin(9600); 
  index.attach(3);
  middle.attach(5);
  ring.attach(7);
  pinky.attach(9);
  thumb.attach(11);
}

void loop() {         // the prototype currently only carries out the fist grip pattern
 
  fist_grab();
  delay(2000);
  fist_relax();
  delay(2000);

  delay(2000);
  keygrab();
  delay(2000);
  keygrab_relax();
  delay(2000); 
}

void fist_grab() {    // each finger is contracted individually, to form a fist
  index_move(180);
  middle_move(180);
  ring_move(180);
  pinky_move(180);
  
}

void fist_relax() {   // each finger is relaxed individually, to return to orignal position
  index_move(0);
  middle_move(0);
  ring_move(0);
  pinky_move(0);
}

void keygrab() {      // attempts to hold keys
  thumb_move(180);
  delay(1000);
  index_move(180);
}

void keygrab_relax() {      // returns thumb and index finger to relaxation after keygrab function used
  thumb_move(0);
  delay(1000);
  index_move(0);
}

void index_move(int angle) {    // function to move the index finger to a certain position based on servo angle
  index.write(angle);
  delay(25);
}

void middle_move(int angle) {   // function to move the middle finger to a certain position based on servo angle
  middle.write(angle);
  delay(25);
}

void ring_move(int angle) {     // function to move the ring finger to a certain position based on servo angle
  ring.write(angle);
  delay(25);
}

void pinky_move(int angle) {    // function to move the pinky finger to a certain position based on servo angle
  pinky.write(angle);
  delay(25);
}

void thumb_move(int angle) {    // function to move the thumb finger to a certain position based on servo angle
  thumb_move(angle);
  delay(25);
}
