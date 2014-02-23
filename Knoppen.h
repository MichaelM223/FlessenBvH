//Knop voor paginawissel
void Knop(void) {
  if (digitalRead(7) == LOW && lastButton == HIGH && timer == refreshtimer)
  {
    digitalWrite(5, HIGH);
    backlight = 1;
    previousMillis = millis();
    pagina++;
      tone(6, 2600, 24);
      delay(24);
      timer = 0;
      if (pagina > 3){
        pagina = 1;
        }
    lastButton = LOW;
  }
  else
  {
    //lastButton = LOW;
    lastButton = digitalRead(7);
  }   
}

void ResetKnop(void) {
  if (digitalRead(A0) == LOW && lastButton == HIGH && timer == refreshtimer){
    pagina = 2;
    if (Flessen != 0 && kwart != 0){
      tone(6, 4000, 24);
      delay(24);
      timer = 0;
      lastButton = LOW;
      Flessen = 0;
      kwart = 0;
      FlessenUpdate();
      kwartUpdate();     
    }
  }
  else
  {
    //lastButton = LOW;
    lastButton = digitalRead(A0);
  }   
}



