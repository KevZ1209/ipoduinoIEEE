#include "pitches.h"
#define speaker 9
int analogPin0 = A0;
int analogPin1 = A1;

bool b = true;

int red = 9;
int green = 11;
int blue = 12;

int tempo = 80;
int t = 402;
int val = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);           //  setup serial
  pinMode(speaker, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //  val = analogRead(analogPin0);  // read the input pin
  //  Serial.println(val);

  //  if (analogRead(analogPin0) > 100) {
  //    darude();
  //    darude();
  //    darude();
  //    darude();
  //  }
  //  if (analogRead(analogPin1) > 100) {
  //    chorus();
  //  }
  tetris();
  //colorLED(0, 0, 0);
}

void colorLED(int r, int g, int b) {
  analogWrite(red, r);
  analogWrite(green, g);
  analogWrite(blue, b);
}

void chorus() {

  play1(NOTE_A4, tempo);

  play1(NOTE_B4, tempo);

  play1(NOTE_C5, tempo);

  play1(NOTE_A4, tempo);

  play1(NOTE_E5, 3 * tempo);

  play1(NOTE_E5, 3 * tempo);

  play1(NOTE_D5, 6 * tempo);

  play1(NOTE_G4, tempo);

  play1(NOTE_A4, tempo);

  play1(NOTE_B4, tempo);

  play1(NOTE_G4, tempo);

  play1(NOTE_D5, 3 * tempo);

  play1(NOTE_D5, 3 * tempo);

  play1(NOTE_C5, 3 * tempo);

  play1(NOTE_B4, tempo);

  play1(NOTE_A4, 2 * tempo);


  play1(NOTE_A4, tempo);

  play1(NOTE_B4, tempo);

  play1(NOTE_C5, tempo);

  play1(NOTE_A4, tempo);

  play1(NOTE_C5, 4 * tempo);

  play1(NOTE_D5, tempo * 2);

  play1(NOTE_B4, tempo * 3);

  play1(NOTE_A4, tempo);

  play1(NOTE_G4, tempo * 4);

  play1(NOTE_G4, tempo * 2);

  play1(NOTE_D5, tempo * 4);

  play1(NOTE_C5, tempo * 8);



  play1(NOTE_A4, tempo);

  play1(NOTE_B4, tempo);

  play1(NOTE_C5, tempo);

  play1(NOTE_A4, tempo);

  play1(NOTE_E5, 3 * tempo);

  play1(NOTE_E5, 3 * tempo);

  play1(NOTE_D5, 6 * tempo);

  play1(NOTE_G4, tempo);

  play1(NOTE_A4, tempo);

  play1(NOTE_B4, tempo);

  play1(NOTE_G4, tempo);

  play1(NOTE_G5, 4 * tempo);

  play1(NOTE_B4, 2 * tempo);



  play1(NOTE_C5, 3 * tempo);

  play1(NOTE_B4, tempo);

  play1(NOTE_A4, 2 * tempo);


  play1(NOTE_A4, tempo);

  play1(NOTE_B4, tempo);

  play1(NOTE_C5, tempo);

  play1(NOTE_A4, tempo);

  play1(NOTE_C5, 4 * tempo);

  play1(NOTE_D5, tempo * 2);

  play1(NOTE_B4, tempo * 3);

  play1(NOTE_A4, tempo);

  play1(NOTE_G4, tempo * 4);

  play1(NOTE_G4, tempo * 2);

  play1(NOTE_D5, tempo * 4);

  play1(NOTE_C5, tempo * 8);


}


void darude() {

  play2(NOTE_B4, t);

  play2(NOTE_B4, t);

  play2(NOTE_B4, t);

  play2(NOTE_B4, t);

  play2(NOTE_B4, 2 * t);

  play2(NOTE_B4, t);

  play2(NOTE_B4, t);

  play2(NOTE_B4, t);

  play2(NOTE_B4, t);

  play2(NOTE_B4, t);

  play2(NOTE_B4, t);

  play2(NOTE_B4, 2 * t);

  play2(NOTE_E5, t);

  play2(NOTE_E5, t);

  play2(NOTE_E5, t);

  play2(NOTE_E5, t);

  play2(NOTE_E5, t);

  play2(NOTE_E5, t);

  play2(NOTE_E5, 2 * t);

  play2(NOTE_D5, t);

  play2(NOTE_D5, t);

  play2(NOTE_D5, t);

  play2(NOTE_D5, t);

  play2(NOTE_D5, t);

  play2(NOTE_D5, t);

  play2(NOTE_D5, 2 * t);

  play2(NOTE_A4, t);

  play2(NOTE_A4, t);



  play2(NOTE_B4, t);

  play2(NOTE_B4, t);

  play2(NOTE_B4, t);

  play2(NOTE_B4, t);

  play2(NOTE_B4, 2 * t);

  play2(NOTE_B4, t);

  play2(NOTE_B4, t);

  play2(NOTE_B4, t);

  play2(NOTE_B4, t);

  play2(NOTE_B4, t);

  play2(NOTE_B4, t);

  play2(NOTE_B4, 2 * t);

  play2(NOTE_E5, t);

  play2(NOTE_E5, t);

  play2(NOTE_B4, t);

  play2(NOTE_B4, t);

  play2(NOTE_B4, t);

  play2(NOTE_B4, t);

  play2(NOTE_B4, 2 * t);

  play2(NOTE_B4, t);

  play2(NOTE_B4, t);

  play2(NOTE_B4, t);

  play2(NOTE_B4, t);

  play2(NOTE_B4, t);

  play2(NOTE_B4, t);

  play2(NOTE_B4, 2 * t);

  play2(NOTE_E5, t);

  play2(NOTE_E5, t);

}


void play1(int note, int dur) {
  toggleColor1();
  tone (speaker, note);
  delay(dur);
  noTone(speaker);
  delay(dur);
}

void play2(int note, int dur) {
  toggleColor2();
  tone(speaker, note);
  delay(dur);
  noTone(speaker);
  delay(dur);

}

void play(int note, int dur) {
  tone(speaker, note);
  delay(dur);
}

void rest(int dur) {
  delay(dur);
}

void toggleColor1() {
  if (b) {
    colorLED(255, 0, 0);
    b = false;
  }
  else {
    colorLED(0, 255, 0);
    b = true;
  }
}



void tetris() {
  play(NOTE_E5, t);
  play(NOTE_B4, 0.5*t);
  play(NOTE_C5, 0.5*t);
  play(NOTE_D5, t);
  play(NOTE_C5, 0.5*t);
  play(NOTE_B4, 0.5*t);
  play(NOTE_A4, t);
  play(NOTE_A4, 0.5*t);
  play(NOTE_C5, 0.5*t);
  play(NOTE_E5, t);
  play(NOTE_D5, t*0.5);
  play(NOTE_C5, 0.5*t);
  play(NOTE_B4, t);
  play(NOTE_B4, 0.5*t);
  play(NOTE_C5, 0.5*t);
  play(NOTE_D5, t);
  play(NOTE_E5, t);
  play(NOTE_C5, t);
  play(NOTE_A4, t);
  play(NOTE_A4, t);
  }

void toggleColor2() {
  if (b) {
    colorLED(255, 140, 180);
    b = false;
  }
  else {
    colorLED(255, 140, 0);
    b = true;
  }

}
