#include "DigiKeyboard.h"
void setup() {
  //empty
}
void loop() {
  DigiKeyboard.sendKeyStroke(0); //start program off
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); //open run.exe
  DigiKeyboard.delay(500); //delay 500 ms
  DigiKeyboard.print("https://youtu.be/dQw4w9WgXcQ?t=40s"); //open and play rick roll youtube vid, start at 40 sec
  DigiKeyboard.sendKeyStroke(KEY_ENTER); 
  DigiKeyboard.delay(5000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); 
  DigiKeyboard.delay(5000);
  DigiKeyboard.print("http://fakeupdate.net/win8/"); //open fake update website
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);
  DigiKeyboard.sendKeyStroke(KEY_F11); //make full screen
  for(;;){ /*empty*/ } //end program
}
