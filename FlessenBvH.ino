#include <SPI.h>
#include <Wire.h>

#include "Variabelen.h"
#include "Eepromi2c.h"
#include "U8glib.h"
#include "Logos.h"
U8GLIB_ST7920_128X64 u8g(4, 9, 8, U8G_PIN_NONE); // SPI Com: SCK = 4, MOSI = 9, CS = 8, A0 = U8G_PIN_NONE
#include "Tijd.h"
#include "Splash.h"
#include "Teller.h"
#include "Zomerkamp.h"
#include "Knoppen.h"
#include "Opstart.h"


void setup(void) {
  RTC_init();
  pinMode(7, INPUT); //Knop voorkant
  digitalWrite(7, HIGH);
  pinMode(A0, INPUT); //Knop achterkant
  digitalWrite(A0, HIGH);
  pinMode(2, INPUT); //IR Sensor
  //attachInterrupt(0, telling, FALLING); //interrupt op IR sensor
  pinMode(5, OUTPUT); //LCD backlight
  digitalWrite(5, HIGH);
  EEPROMtest();
  Opstartdisplay();
  FlessenROM();
}

void loop(void) {
  Knop();
  Tellingen();
  ResetKnop();
  if (timer < 6){
    timer++;
  }
  if (wacht < 10){
    wacht++;
  }
    switch(pagina){
      case 1:
        Splashdisplay();
       break;
      case 2:
        Tellerdisplay();
      break;
      case 3:
        Zomerkampdisplay(); 
       break;
    }
    unsigned long currentMillis = millis();
      if(currentMillis - previousMillis > interval) {
       previousMillis = currentMillis;
       digitalWrite(5, LOW);
       backlight = 0;
       pagina = 1;
      }
}


