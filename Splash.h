void Splash(void)
{
  u8g.setFont(u8g_font_gdr20r);
  u8g.drawStr(0, 25, "Scouting");
  u8g.drawHLine(2, 27, 122);
  u8g.drawStr(BvH , 55, "BvH");
  u8g.setFont(u8g_font_4x6r);
  u8g.drawStr(1, 63, datum);
  u8g.drawStr(50, 63, dag);
  u8g.drawStr(96 ,63 , tijd);
  
}

void Splashdisplay(void)
{
    ReadTime().toCharArray(tijd, 9);
    ReadDate().toCharArray(datum, 11);
    ReadDag().toCharArray(dag, 10);

    if (BvH <= 2){
      BvHp = 1;
    }
    if (BvH >= 60){
      BvHp = 0;
    }
    if (BvHp == 0){
      BvH = BvH - 1;
    }
    if (BvHp == 1){
       BvH = BvH + 1;
    }
    
  // picture loop
  u8g.firstPage();  
  do {
    Splash();
  } while( u8g.nextPage() );
}
