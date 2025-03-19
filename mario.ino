#include "pitches.h"
int buzzer_pin = 2;
int joystick_press_pin = 10;

int melody[] = {NOTE_E5, NOTE_E5, NOTE_E5, NOTE_C5, NOTE_E5, NOTE_G4, }; //E, E, E, C, E, G Octave 5
int duration[] = {270, 270, 270, 470, 240, 240};

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzer_pin, OUTPUT);
  pinMode(joystick_press_pin, INPUT_PULLUP);

}

void loop() {
  // put your main code here, to run repeatedly:
  int press_state = digitalRead(joystick_press_pin);
  if(press_state == LOW){
    for(int i = 0; i <6; i++){
      tone(buzzer_pin, melody[i]);
      delay(duration[i]);
      noTone(buzzer_pin);
      delay(50);
    }
  }
}
