void i2c_eeprom_write_byte( int deviceaddress, unsigned int eeaddress, byte data ) {
    int rdata = data;
    Wire.beginTransmission(deviceaddress);
    Wire.write((int)(eeaddress >> 8)); // MSB
    Wire.write((int)(eeaddress & 0xFF)); // LSB
    Wire.write(rdata);
    Wire.endTransmission();
  }

  // WARNING: address is a page address, 6-bit end will wrap around
  // also, data can be maximum of about 30 bytes, because the Wire library has a buffer of 32 bytes
  void i2c_eeprom_write_page( int deviceaddress, unsigned int eeaddresspage, byte* data, byte length ) {
    Wire.beginTransmission(deviceaddress);
    Wire.write((int)(eeaddresspage >> 8)); // MSB
    Wire.write((int)(eeaddresspage & 0xFF)); // LSB
    byte c;
    for ( c = 0; c < length; c++)
      Wire.write(data[c]);
    Wire.endTransmission();
  }

  byte i2c_eeprom_read_byte( int deviceaddress, unsigned int eeaddress ) {
    byte rdata = 0xFF;
    Wire.beginTransmission(deviceaddress);
    Wire.write((int)(eeaddress >> 8)); // MSB
    Wire.write((int)(eeaddress & 0xFF)); // LSB
    Wire.endTransmission();
    Wire.requestFrom(deviceaddress,1);
    if (Wire.available()) rdata = Wire.read();
    return rdata;
  }

  // maybe let's not read more than 30 or 32 bytes at a time!
  void i2c_eeprom_read_buffer( int deviceaddress, unsigned int eeaddress, byte *buffer, int length ) {
    Wire.beginTransmission(deviceaddress);
    Wire.write((int)(eeaddress >> 8)); // MSB
    Wire.write((int)(eeaddress & 0xFF)); // LSB
    Wire.endTransmission();
    Wire.requestFrom(deviceaddress,length);
    int c = 0;
    for ( c = 0; c < length; c++ )
      if (Wire.available()) buffer[c] = Wire.read();
  }
  
  

  //Begin EEPROM test:
void EEPROMtest(void){
  Wire.begin(); // verbinding maken met eeprom
  int addr=32762; //Laatste adres -5 bytes (Test )
  byte b = i2c_eeprom_read_byte(0x50, 32762); // lees eerste byte van Test
  while (b!=0) {
      eepromtest.concat((char)b); //sla bytes op in eepromtest[array]
      addr++; //adres omhoog
      b = i2c_eeprom_read_byte(0x50, addr); //lees adres van eeprom
   }
  eepromtest.toCharArray(eepromtesta, 5);
}
  //Eindig EEPROM test


String LeesString(int addrs){
  String romstring;
  byte b = i2c_eeprom_read_byte(0x50, addrs); // lees eerste byte van Test
  while (b!=0) {
      romstring.concat((char)b); //sla bytes op in string
      addrs++; //adres omhoog
      b = i2c_eeprom_read_byte(0x50, addrs); //lees adres van eeprom
   }
   return(romstring);
}


void FlessenUpdate(void){
      String(Flessen).toCharArray(Telling, 4);
      String(Flessen / 4).toCharArray(Euros, 4);
      i2c_eeprom_write_page(0x50, 0, (byte *)Telling, sizeof(temp5));
      delay(10);
      i2c_eeprom_write_page(0x50, 64, (byte *)Telling, sizeof(temp5));
      delay(10);  
}

void kwartUpdate(void){
      String(kwart).toCharArray(temp6, 2);
      i2c_eeprom_write_page(0x50, 128, (byte *)temp6, sizeof(temp6));
      delay(10);
      i2c_eeprom_write_page(0x50, 192, (byte *)temp6, sizeof(temp6));  
      delay(10);
}
