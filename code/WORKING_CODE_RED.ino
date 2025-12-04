
#include <Bounce.h>
#include <Keyboard.h>


const int hydrant1startPin = 13;
const int ladder1startPin = 14;
const int hydrant2startPin = 18;
const int ladder2startPin = 19;

const int joyL1Pin = 1;
const int joyR1Pin = 2;
const int force1Pin = 3;

const int joyL2Pin = 4;
const int joyR2Pin = 5;
const int force2Pin = 6;

const int joyL3Pin = 7;
const int joyR3Pin = 8;
const int force3Pin = 9;

const int joyL4Pin = 10;
const int joyR4Pin = 11;
const int force4Pin = 12;






Bounce hydrant1startButton = Bounce(hydrant1startPin, 20);
Bounce ladder1startButton = Bounce(ladder1startPin, 20);
Bounce hydrant2startButton = Bounce(hydrant2startPin, 20);
Bounce ladder2startButton = Bounce(ladder2startPin, 20);

Bounce joyLeft1 = Bounce(joyL1Pin, 20);  //pin and debounce time
Bounce joyRight1 = Bounce(joyR1Pin, 20);
Bounce force1Button = Bounce(force1Pin, 20);

Bounce joyLeft2 = Bounce(joyL2Pin, 20);
Bounce joyRight2 = Bounce(joyR2Pin, 20);
Bounce force2Button = Bounce(force2Pin, 20);

Bounce joyLeft3 = Bounce(joyL3Pin, 20);  //pin and debounce time
Bounce joyRight3 = Bounce(joyR3Pin, 20);
Bounce force3Button = Bounce(force3Pin, 20);

Bounce joyLeft4 = Bounce(joyL4Pin, 20);
Bounce joyRight4 = Bounce(joyR4Pin, 20);
Bounce force4Button = Bounce(force4Pin, 20);





void setup() {

  pinMode(13, INPUT_PULLUP);  //hydrant start button
  pinMode(14, INPUT_PULLUP);  //ladder start
  pinMode(15, INPUT_PULLUP);  //hydrant 2 start button
  pinMode(16, INPUT_PULLUP);  //ladder 2 start



  pinMode(1, INPUT_PULLUP);  //joystick 1 left           
  pinMode(2, INPUT_PULLUP);  //joystick 1 right
  pinMode(3, INPUT_PULLUP);  //force 1 button

  pinMode(4, INPUT_PULLUP);  //joystick 2 left
  pinMode(5, INPUT_PULLUP);  //joystick 2 right
  pinMode(6, INPUT_PULLUP);  //force 2 button

  pinMode(7, INPUT_PULLUP);  //joystick 3 left           
  pinMode(8, INPUT_PULLUP);  //joystick 3 right
  pinMode(9, INPUT_PULLUP);  //force 3 button

  pinMode(10, INPUT_PULLUP);  //joystick 4 left
  pinMode(11, INPUT_PULLUP);  //joystick 4 right
  pinMode(12, INPUT_PULLUP);  //force 4 button





 
  Keyboard.begin();
}

void loop() {

  hydrant1startButton.update();
  ladder1startButton.update();
  hydrant2startButton.update();
  ladder2startButton.update();

  joyLeft1.update();  
  joyRight1.update();
  force1Button.update();

  joyLeft2.update();
  joyRight2.update();
  force2Button.update();

  joyLeft3.update();
  joyRight3.update();
  force3Button.update();

  joyLeft4.update();
  joyRight4.update();
  force4Button.update();




  //STATION 1
  if (hydrant1startButton.fallingEdge()) {
    Keyboard.press(KEY_Q);
  }
  if (hydrant1startButton.risingEdge()) {
    Keyboard.release(KEY_Q);
  }


  //JOYSTICK 1//
  if (joyLeft1.fallingEdge()) {  
    Keyboard.press(KEY_LEFT);      
    
  }
  if (joyLeft1.risingEdge()) {  
    Keyboard.release(KEY_LEFT);
   
  }


  if (joyRight1.fallingEdge()) {
    Keyboard.press(KEY_RIGHT);
  }

  if (joyRight1.risingEdge()) {
    Keyboard.release(KEY_RIGHT);
  }

  //FORCE 1 BUTTON
  if (force1Button.fallingEdge()) {  
    Keyboard.press(KEY_UP);
  }
  if (force1Button.risingEdge()) {  
    Keyboard.release(KEY_UP);
  }




  //STATION 2

  if (ladder1startButton.fallingEdge()) {
    Keyboard.press(KEY_R);
  }
  if (ladder1startButton.risingEdge()) {
    Keyboard.release(KEY_R);
  }

  //JOYSTICK 2
  if (joyLeft2.fallingEdge()) {  
    Keyboard.press(KEY_A);
  }
  if (joyLeft2.risingEdge()) {  
    Keyboard.release(KEY_A);
  }


  if (joyRight2.fallingEdge()) {
    Keyboard.press(KEY_D);
  }

  if (joyRight2.risingEdge()) {
    Keyboard.release(KEY_D);
  }

  //FORCE 2 BUTTON
  if (force2Button.fallingEdge()) {  
    Keyboard.press(KEY_W);
  }
  if (force2Button.risingEdge()) {  
    Keyboard.release(KEY_W);
  }


  //STATION 3

  if (hydrant2startButton.fallingEdge()) {
    Keyboard.press(KEY_E);
  }
  if (hydrant2startButton.risingEdge()) {
    Keyboard.release(KEY_E);
  }
  
  //JOYSTICK 3//
  if (joyLeft3.fallingEdge()) {  
    Keyboard.press(KEY_LEFT);      
  }
  if (joyLeft3.risingEdge()) {  
    Keyboard.release(KEY_LEFT);  
  }


  if (joyRight3.fallingEdge()) {
    Keyboard.press(KEY_RIGHT);
  }

  if (joyRight3.risingEdge()) {
    Keyboard.release(KEY_RIGHT);
  }

  //FORCE 3 BUTTON
  if (force3Button.fallingEdge()) {  
    Keyboard.press(KEY_UP);
  }
  if (force3Button.risingEdge()) {  
    Keyboard.release(KEY_UP);
  }



 //STATION 4

  if (ladder2startButton.fallingEdge()) {
    Keyboard.press(KEY_T);
  }
  if (ladder2startButton.risingEdge()) {
    Keyboard.release(KEY_T);
  }
  //JOYSTICK 4//
  if (joyLeft4.fallingEdge()) {  
    Keyboard.press(KEY_A);      
   
  }
  if (joyLeft4.risingEdge()) {  
    Keyboard.release(KEY_A);
   
  }


  if (joyRight4.fallingEdge()) {
    Keyboard.press(KEY_D);
  }

  if (joyRight4.risingEdge()) {
    Keyboard.release(KEY_D);
  }

  //FORCE 4 BUTTON
  if (force4Button.fallingEdge()) {  
    Keyboard.press(KEY_W);
  }
  if (force4Button.risingEdge()) {  
    Keyboard.release(KEY_W);
  }
}



    
