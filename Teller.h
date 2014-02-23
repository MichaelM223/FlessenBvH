void Teller(void)
{
  u8g.drawXBMP(0, 0, fles_width, fles_height, fles_bits);
  u8g.setFont(u8g_font_gdr25r);
  u8g.drawStr(38 , 28, "x");
  u8g.drawStr(60 , 28, Telling);
  u8g.drawXBMP(36, 37, euro_width, euro_height, euro_bits);
  u8g.drawStr(60 , 60, Euros);
  //Kwart euro teller
  switch (kwart) {
    case 1:
    u8g.drawBox(118,55,8,5);
    break;
    case 2:
    u8g.drawBox(118,55,8,5);
    u8g.drawBox(118,49,8,5);
    break;
    case 3:
    u8g.drawBox(118,55,8,5);
    u8g.drawBox(118,49,8,5);
    u8g.drawBox(118,43,8,5);
    break;
    case 4:
    u8g.drawBox(118,55,8,5);
    u8g.drawBox(118,49,8,5);
    u8g.drawBox(118,43,8,5);
    u8g.drawBox(118,37,8,5);
    break;
  }
}

void Tellerdisplay(void)
{
  u8g.firstPage();  
  do {
    Teller();
  } while( u8g.nextPage() );
}


//IR  code
void Tellingen(void){
  if (digitalRead(2) == LOW && wacht == 10){
    digitalWrite(5, HIGH);
    backlight = 1;
    previousMillis = millis();
    pagina = 2;
    wacht = 0;
    tone(6, 2000, 192); //Toon 2000 (van 0t4000) op speaker pin 6
    delay(200);
      Flessen++;
      if (kwart < 4){
         kwart++;
      }
      else{
        kwart = 1;
      }
      FlessenUpdate();
      kwartUpdate();
    }
}
