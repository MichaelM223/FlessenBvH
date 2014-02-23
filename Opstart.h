void Opstart(void)
{
  u8g.setFont(u8g_font_gdr25r);
  u8g.drawStr(0, 25, "FAS-1.0");
  u8g.drawHLine(2, 27, 122);
  u8g.setFont(u8g_font_4x6r);
  u8g.drawStr(2, 34, "Flessen Actie Systeem      v1.0");
  digitalWrite(cs, LOW);
  SPI.transfer(4+0x00); 
  unsigned int n = SPI.transfer(0x00);        
  digitalWrite(cs, HIGH);
  int a=n & B00001111;    
  int b=(n & B00110000)>>4;
  checktijd=a+b*10;
  if (checktijd > 0 && checktijd <= 31){
       u8g.drawStr(2, 50, "RTC gereed......");
      }
  else{
       u8g.drawStr(2, 50, "Fout in RTC!");
       tone(6, 4000, 4092);
       delay(120000);
  }	
  if (eepromtest == "Test"){
    u8g.drawStr(2, 63, "EEPROM gereed....");
  }
  else{
    u8g.drawStr(2, 63, "Fout in EEPROM! - ");
    u8g.drawStr(75, 63, eepromtesta);
       tone(6, 4000, 4092);
       delay(12000);
  }
}

void Opstartdisplay(void)
{
    u8g.firstPage();  
  do {
    Opstart();
  } while( u8g.nextPage() );
  delay(3000);
}

//Tellerwaardes uitlezen bij opstarten
void FlessenROM(void){
  String(LeesString(0)).toCharArray(temp1, 4);
  String(LeesString(64)).toCharArray(temp2, 4);
  int Temp7 = atoi(temp1);
  int Temp8 = atoi(temp2);
  String(LeesString(128)).toCharArray(temp3, 2);
  String(LeesString(192)).toCharArray(temp4, 2);
  int Temp9 = atoi(temp3);
  int Temp10 = atoi(temp4);
  
  if (Temp7 == Temp8){
    Flessen = Temp7;
    String(Flessen).toCharArray(Telling, 4);
    String(Flessen / 4).toCharArray(Euros, 4);
  }
  else {
    tone(6, 4000, 4092);
    delay(1000);
  }
  if (Temp9 == Temp10){
    kwart = Temp9;
  }
  else {
    tone(6, 4000, 4092);
    delay(1000);
  }  
}
