void Zomerkamp(void)
{
  u8g.drawXBMP(0, 0, BvH_width, BvH_height, BvH_bits);
  u8g.setFont(u8g_font_4x6r);
  u8g.drawStr(87, 12, "Nog");
  u8g.drawStr(84, 53, "dagen");
  u8g.drawStr(65, 59, "tot Zomerkamp!");
  u8g.setFont(u8g_font_gdr25r);
  if (dagentotkamp < 100){
    u8g.drawStr(74, 43, dagentotkamparray);
  }
  else if (dagentotkamp < 10){
    u8g.drawStr(83, 43, dagentotkamparray);
  }
  else{
  u8g.drawStr(64, 43, dagentotkamparray);
  }
}

void Zomerkampdisplay(void)
{
    ReadTime();
    ReadDate();
    dagentotkamp = ((1405764000 - dateToEpoch((2000+Date[2]), Date[1], Date[0], TimeDate[2], TimeDate[1], TimeDate[0])) / 86400); //1405764000 = 19 juli 2014
    String(dagentotkamp).toCharArray(dagentotkamparray, 4);
    
  // picture loop
  u8g.firstPage();  
  do {
    Zomerkamp();
  } while( u8g.nextPage() );
    
}
