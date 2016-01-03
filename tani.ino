#include <LedControl.h>
LedControl ta = LedControl(12, 11, 10, 1);
int tt=11;
int tt2=50;
int longtt=200;
void setup() {
  ta.shutdown(0, false);
  ta.setIntensity(0, 1);
  ta.clearDisplay(0);
}

void loop() {
  tani();

}

void tani() {

ta.setRow(0,0,B11111111);
ta.setRow(0,1,B11111111);
ta.setRow(0,2,B00011000);
ta.setRow(0,3,B00011000);
ta.setRow(0,4,B00011000);
ta.setRow(0,5,B00011000);
ta.setRow(0,6,B00011000);
ta.setRow(0,7,B00011000);

delay(longtt);

ta.clearDisplay(0);

delay(longtt);

ta.setRow(0,0,B11111111);
ta.setRow(0,1,B11111111);
ta.setRow(0,2,B00011000);
ta.setRow(0,3,B00011000);
ta.setRow(0,4,B00011000);
ta.setRow(0,5,B00011000);
ta.setRow(0,6,B00011000);
ta.setRow(0,7,B00011000);

ta.clearDisplay(0);

delay(longtt);
delay(longtt);
ta.setRow(0,0,B11111111);
ta.setRow(0,1,B11111111);
ta.setRow(0,2,B00011000);
ta.setRow(0,3,B00011000);
ta.setRow(0,4,B00011000);
ta.setRow(0,5,B00011000);
ta.setRow(0,6,B00011000);
ta.setRow(0,7,B00011000);

delay(longtt);
delay(1000);
ta.clearDisplay(0);
delay(longtt);
  
//TTTTTTTTTTTTTTTTTTTTTT

  
  for (int i = 7; i >= 0; i--) {
    ta.setLed(0, 0, i, true);
    ta.setLed(0, 0, i + 1, false);
    delay(tt);
  }

  for (int i = 7; i >= 1; i--) {
    ta.setLed(0, 0, i, true);
    ta.setLed(0, 0, i + 1, false);
    delay(tt);
  }


  for (int i = 7; i >= 2; i--) {
    ta.setLed(0, 0, i, true);
    ta.setLed(0, 0, i + 1, false);
    delay(tt);
  }

  for (int i = 7; i >= 2; i--) {
    ta.setLed(0, 1, i, true);
    ta.setLed(0, 1, i + 1, false);
    delay(tt);
  }

  for (int i = 7; i >= 2; i--) {
    ta.setLed(0, 2, i, true);
    ta.setLed(0, 2, i + 1, false);
    delay(tt);
  }

  for (int i = 7; i >= 2; i--) {
    ta.setLed(0, 3, i, true);
    ta.setLed(0, 3, i + 1, false);
    delay(tt);
  }

    for (int i = 7; i >= 2; i--) {
    ta.setLed(0, 4, i, true);
    ta.setLed(0, 4, i + 1, false);
    delay(tt);
  }

  for (int i = 7; i >= 3; i--) {
    ta.setLed(0, 0, i, true);
    ta.setLed(0, 0, i + 1, false);
    delay(tt);
  }

  for (int i = 7; i >= 4; i--) {
    ta.setLed(0, 0, i, true);
    ta.setLed(0, 0, i + 1, false);
    delay(tt);
  }
delay(longtt);

ta.setLed(0,0,4,false);
ta.setLed(0,1,1,true);
ta.setLed(0,1,2,false);
ta.setLed(0,2,1,true);
ta.setLed(0,2,2,false);
ta.setLed(0,3,1,true);
ta.setLed(0,3,2,false);
ta.setLed(0,4,1,true);
ta.setLed(0,4,2,false);
delay(longtt);

ta.setLed(0,0,3,false);
ta.setLed(0,1,0,true);
ta.setLed(0,1,1,false);
ta.setLed(0,2,0,true);
ta.setLed(0,2,1,false);
ta.setLed(0,3,0,true);
ta.setLed(0,3,1,false);
ta.setLed(0,4,0,true);
ta.setLed(0,4,1,false);
delay(longtt);

ta.setLed(0,0,2,false);
ta.setLed(0,1,0,false);
ta.setLed(0,2,0,false);
ta.setLed(0,3,0,false);
ta.setLed(0,4,0,false);
delay(longtt);

ta.setLed(0,0,1,false);
delay(longtt);

ta.setLed(0,0,0,false);
delay(longtt);







//AAAAAAAAAAAAAAAAAAAAAAAAA
  for (int i = 7; i >= 1; i--) {
    ta.setLed(0, 0, i, true);
    ta.setLed(0, 0, i + 1, false);
    delay(tt);
  }


  for (int i = 7; i >= 0; i--) {
    ta.setLed(0, 1, i, true);
    ta.setLed(0, 1, i + 1, false);
    delay(tt);
  }


  for (int i = 7; i >= 0; i--) {
    ta.setLed(0, 2, i, true);
    ta.setLed(0, 2, i + 1, false);
    delay(tt);
  }


  for (int i = 7; i >= 0; i--) {
    ta.setLed(0, 3, i, true);
    ta.setLed(0, 3, i + 1, false);
    delay(tt);
  }

  for (int i = 7; i >= 0; i--) {
    ta.setLed(0, 4, i, true);
    ta.setLed(0, 4, i + 1, false);
    delay(tt);
  }


  for (int i = 7; i >= 2; i--) {
    ta.setLed(0, 1, i, true);
    ta.setLed(0, 1, i + 1, false);
    delay(tt);
  }


  for (int i = 7; i >= 2; i--) {
    ta.setLed(0, 2, i, true);
    ta.setLed(0, 2, i + 1, false);
    delay(tt);
  }


  for (int i = 7; i >= 2; i--) {
    ta.setLed(0, 3, i, true);
    ta.setLed(0, 3, i + 1, false);
    delay(tt);
  }

  for (int i = 7; i >= 2; i--) {
    ta.setLed(0, 4, i, true);
    ta.setLed(0, 4, i + 1, false);
    delay(tt);
  }


  for (int i = 7; i >= 1; i--) {
    ta.setLed(0, 2, i, true);
    ta.setLed(0, 2, i + 1, false);
    delay(tt);
  }
ta.setLed(0,2,2,true);

delay(longtt);

ta.setLed(0,0,0,true);
ta.setLed(0,0,1,false);
ta.setLed(0,2,0,true);
ta.setLed(0,2,1,false);
ta.setLed(0,1,1,true);
ta.setLed(0,1,2,false);
ta.setLed(0,2,1,true);
ta.setLed(0,2,2,false);
ta.setLed(0,3,1,true);
ta.setLed(0,3,2,false);
ta.setLed(0,4,1,true);
ta.setLed(0,4,2,false);
ta.setLed(0,1,0,false);
ta.setLed(0,3,0,false);
ta.setLed(0,4,0,false);
delay(longtt);

ta.setLed(0,0,0,false);
ta.setLed(0,1,1,false);
ta.setLed(0,2,1,false);
ta.setLed(0,3,1,false);
ta.setLed(0,4,1,false);

ta.setLed(0,1,0,true);
ta.setLed(0,2,0,true);
ta.setLed(0,3,0,true);
ta.setLed(0,4,0,true);

delay(longtt);

ta.setLed(0,1,0,false);
ta.setLed(0,2,0,false);
ta.setLed(0,3,0,false);
ta.setLed(0,4,0,false);

delay(longtt);
delay(longtt);



//NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN

  for (int i = 7; i >= 0; i--) {
    ta.setLed(0, 0, i, true);
    ta.setLed(0, 0, i + 1, false);
    delay(tt);
  }

  for (int i = 7; i >= 0; i--) {
    ta.setLed(0, 1, i, true);
    ta.setLed(0, 1, i + 1, false);
    delay(tt);
  }

  for (int i = 7; i >= 0; i--) {
    ta.setLed(0, 2, i, true);
    ta.setLed(0, 2, i + 1, false);
    delay(tt);
  }

  for (int i = 7; i >= 0; i--) {
    ta.setLed(0, 3, i, true);
    ta.setLed(0, 3, i + 1, false);
    delay(tt);
  }

  for (int i = 7; i >= 0; i--) {
    ta.setLed(0, 4, i, true);
    ta.setLed(0, 4, i + 1, false);
    delay(tt);
  }



  for (int i = 7; i >= 1; i--) {
    ta.setLed(0, 1, i, true);
    ta.setLed(0, 1, i + 1, false);
    delay(tt);
  }

  for (int i = 7; i >= 2; i--) {
    ta.setLed(0, 2, i, true);
    ta.setLed(0, 2, i + 1, false);
    delay(tt);
  }



  for (int i = 7; i >= 3; i--) {
    ta.setLed(0, 3, i, true);
    ta.setLed(0, 3, i + 1, false);
    delay(tt);
  }





  for (int i = 7; i >= 4; i--) {
    ta.setLed(0, 0, i, true);
    ta.setLed(0, 0, i + 1, false);
    delay(tt);
  }

  for (int i = 7; i >= 4; i--) {
    ta.setLed(0, 1, i, true);
    ta.setLed(0, 1, i + 1, false);
    delay(tt);
  }

  for (int i = 7; i >= 4; i--) {
    ta.setLed(0, 2, i, true);
    ta.setLed(0, 2, i + 1, false);
    delay(tt);
  }

  for (int i = 7; i >= 4; i--) {
    ta.setLed(0, 3, i, true);
    ta.setLed(0, 3, i + 1, false);
    delay(tt);
  }

  for (int i = 7; i >= 4; i--) {
    ta.setLed(0, 4, i, true);
    ta.setLed(0, 4, i + 1, false);
    delay(tt);
  }


ta.setLed(0,0,0,false);
ta.setLed(0,2,0,false);
ta.setLed(0,3,0,false);
ta.setLed(0,4,0,false);

ta.setLed(0,0,4,false);
ta.setLed(0,1,4,false);
ta.setLed(0,2,4,false);
ta.setLed(0,3,4,false);
ta.setLed(0,4,4,false);

ta.setLed(0,1,1,false);
ta.setLed(0,2,2,false);
ta.setLed(0,3,3,false);


ta.setLed(0,2,1,true);
ta.setLed(0,3,2,true);
ta.setLed(0,0,3,true);
ta.setLed(0,1,3,true);
ta.setLed(0,2,3,true);
ta.setLed(0,3,3,true);
ta.setLed(0,4,3,true);

delay(longtt);

ta.setLed(0,0,1,false);
ta.setLed(0,2,1,false);
ta.setLed(0,3,2,false);
ta.setLed(0,0,3,false);
ta.setLed(0,1,3,false);
ta.setLed(0,2,3,false);
ta.setLed(0,3,3,false);
ta.setLed(0,4,3,false);
ta.setLed(0,1,0,false);


ta.setLed(0,2,0,true);
ta.setLed(0,3,1,true);
ta.setLed(0,0,2,true);
ta.setLed(0,1,2,true);
ta.setLed(0,2,2,true);
ta.setLed(0,3,2,true);
ta.setLed(0,4,2,true);


delay(longtt);
ta.setLed(0,2,0,false);
ta.setLed(0,3,1,false);
ta.setLed(0,0,2,false);
ta.setLed(0,0,1,false);
ta.setLed(0,1,2,false);
ta.setLed(0,2,2,false);
ta.setLed(0,3,2,false);
ta.setLed(0,4,2,false);
ta.setLed(0,0,2,false);

ta.setLed(0,3,0,true);
ta.setLed(0,0,1,true);
ta.setLed(0,1,1,true);
ta.setLed(0,2,1,true);
ta.setLed(0,3,1,true);
ta.setLed(0,4,1,true);


delay(longtt);

ta.setLed(0,3,0,false);
ta.setLed(0,0,1,false);
ta.setLed(0,1,1,false);
ta.setLed(0,2,1,false);
ta.setLed(0,3,1,false);
ta.setLed(0,4,1,false);

ta.setLed(0,0,0,true);
ta.setLed(0,1,0,true);
ta.setLed(0,2,0,true);
ta.setLed(0,3,0,true);
ta.setLed(0,4,0,true);

delay(longtt);

ta.clearDisplay(0);



//IIIIIIIIIIIIIIIIIIIIIIIIIIII

  for (int i = 7; i >= 0; i--) {
    ta.setLed(0, 0, i, true);
    ta.setLed(0, 0, i + 1, false);
    delay(tt);
  }

  for (int i = 7; i >= 1; i--) {
    ta.setLed(0, 0, i, true);
    ta.setLed(0, 0, i + 1, false);
    delay(tt);
  }


  for (int i = 7; i >= 2; i--) {
    ta.setLed(0, 0, i, true);
    ta.setLed(0, 0, i + 1, false);
    delay(tt);
  }


  for (int i = 7; i >= 3; i--) {
    ta.setLed(0, 0, i, true);
    ta.setLed(0, 0, i + 1, false);
    delay(tt);
  }

  for (int i = 7; i >= 4; i--) {
    ta.setLed(0, 0, i, true);
    ta.setLed(0, 0, i + 1, false);
    delay(tt);
  }

  for (int i = 7; i >= 2; i--) {
    ta.setLed(0, 1, i, true);
    ta.setLed(0, 1, i + 1, false);
    delay(tt);
  }

  for (int i = 7; i >= 2; i--) {
    ta.setLed(0, 2, i, true);
    ta.setLed(0, 2, i + 1, false);
    delay(tt);
  }

  for (int i = 7; i >= 2; i--) {
    ta.setLed(0, 3, i, true);
    ta.setLed(0, 3, i + 1, false);
    delay(tt);
  }


  for (int i = 7; i >= 0; i--) {
    ta.setLed(0, 4, i, true);
    ta.setLed(0, 4, i + 1, false);
    delay(tt);
  }

  for (int i = 7; i >= 1; i--) {
    ta.setLed(0, 4, i, true);
    ta.setLed(0, 4, i + 1, false);
    delay(tt);
  }


  for (int i = 7; i >= 2; i--) {
    ta.setLed(0, 4, i, true);
    ta.setLed(0, 4, i + 1, false);
    delay(tt);
  }


  for (int i = 7; i >= 3; i--) {
    ta.setLed(0, 4, i, true);
    ta.setLed(0, 4, i + 1, false);
    delay(tt);
  }

  for (int i = 7; i >= 4; i--) {
    ta.setLed(0, 4, i, true);
    ta.setLed(0, 4, i + 1, false);
    delay(tt);
  }

delay(longtt);

ta.setLed(0,0,4,false);
ta.setLed(0,4,4,false);
ta.setLed(0,1,2,false);
ta.setLed(0,2,2,false);
ta.setLed(0,3,2,false);
ta.setLed(0,1,1,true);
ta.setLed(0,2,1,true);
ta.setLed(0,3,1,true);

delay(longtt);

ta.setLed(0,0,3,false);
ta.setLed(0,4,3,false);
ta.setLed(0,1,1,false);
ta.setLed(0,2,1,false);
ta.setLed(0,3,1,false);
ta.setLed(0,1,0,true);
ta.setLed(0,2,0,true);
ta.setLed(0,3,0,true);

delay(longtt);

ta.setLed(0,0,2,false);
ta.setLed(0,4,2,false);
ta.setLed(0,1,0,false);
ta.setLed(0,2,0,false);
ta.setLed(0,3,0,false);

delay(longtt);

ta.setLed(0,0,1,false);
ta.setLed(0,4,1,false);

delay(longtt);

ta.clearDisplay(0);


}
