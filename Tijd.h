
int RTC_init(){ 
	  pinMode(cs,OUTPUT); // chip select
	  // start the SPI library:
	  SPI.begin();
	  SPI.setBitOrder(MSBFIRST); 
	  SPI.setDataMode(SPI_MODE1); // both mode 1 & 3 should work 
	  //set control register 
	  digitalWrite(cs, LOW);  
	  SPI.transfer(0x8E);
	  SPI.transfer(0x60); //60= disable Osciallator and Battery SQ wave @1hz, temp compensation, Alarms disabled
	  digitalWrite(cs, HIGH);
	  delay(10);
}

String ReadDate(){
        
	String datum;
        for(int i=4; i<=6;i++){
		digitalWrite(cs, LOW);
		SPI.transfer(i+0x00); 
		unsigned int n = SPI.transfer(0x00);        
		digitalWrite(cs, HIGH);
		int a=n & B00001111;    
		if(i==4){
			int b=(n & B00110000)>>4;
			Date[0]=a+b*10;
		}
		else if(i==5){
			int b=(n & B00010000)>>4;
			Date[1]=a+b*10;
		}
		else if(i==6){
			int b=(n & B11110000)>>4;
			Date[2]=a+b*10;
                }
	}

	if (Date[0] < 10) {
             datum.concat("0");
             datum.concat(Date[0]); }
        else{
             datum.concat(Date[0]);
        }
	datum.concat("/") ;
	if (Date[1] < 10) {
            datum.concat("0");
            datum.concat(Date[1]); }
        else{
             datum.concat(Date[1]);
        }
	datum.concat("/") ;
        datum.concat("20") ;
	datum.concat(Date[2]);
	return(datum);
        }


String ReadTime(){
       	
	String tijd;
	for(int i=0; i<=2;i++){
		digitalWrite(cs, LOW);
		SPI.transfer(i+0x00); 
		unsigned int n = SPI.transfer(0x00);        
		digitalWrite(cs, HIGH);
		int a=n & B00001111;    
		if(i==2){	
			int b=(n & B00110000)>>4; //24 hour mode
			if(b==B00000010)
				b=20;        
			else if(b==B00000001)
				b=10;
			TimeDate[i]=a+b;
		}
		else{	
			int b=(n & B01110000)>>4;
			TimeDate[i]=a+b*10;
                     }
	}
	tijd.concat(TimeDate[2]);
	tijd.concat(":") ;
        if (TimeDate[1] < 10) {
             tijd.concat("0");
             tijd.concat(TimeDate[1]); }
        else{
             tijd.concat(TimeDate[1]);
        }
	tijd.concat(":") ;
	if (TimeDate[0] < 10) {
             tijd.concat("0"); 
             tijd.concat(TimeDate[0]);}
        else{
             tijd.concat(TimeDate[0]);
        }
        return(tijd);
}

String ReadDag(){
	String Dag;
        digitalWrite(cs, LOW);
	SPI.transfer(3+0x00); 
	unsigned int n = SPI.transfer(0x00);        
	digitalWrite(cs, HIGH);
	switch (n) {
          case 1: //Zaterdag voor het eerst aan met batterij
            Dag = "Zaterdag";
            break;
          case 2:
            Dag = "Zondag";
            break;
          case 3:
            Dag = "Maandag";
            break;
          case 4:
            Dag = "Dinsdag";
            break;
          case 5:
            Dag = "Woensdag";
            break;
          case 6:
            Dag = "Donderdag";
            break;
          case 7:
            Dag = "Vrijdag";
            break;
          }
        return(Dag);
 }
 
unsigned long dateToEpoch( int dateYear, int dateMonth, int dateDay, int dateHour, int dateMinute, int dateSeconds ){
		int sumYear;
		int sumMonth;
		int sumDay;
		unsigned long sumTotal;
		int leapMonth;


		// Is dateYear a leapMonth?
    		leapMonth = 28;
    		if ( dateYear / 4 > ( dateYear -1 ) / 4 )
        		if ( dateYear / 4 == ( dateYear +1 ) / 4 )
            			leapMonth = 29;


		// Calculate year
		sumYear = ((dateYear - 1970) * 365) + ((dateYear - 1970) / 4);
		//cout << "sumYear = " << sumYear << endl;

		
		// Calculate month number to number of days
		dateMonth = dateMonth - 1;

		if ( dateMonth == 0 )
			sumMonth = 0;

        	if ( dateMonth == 1 )
            		sumMonth = 31;

        	if ( dateMonth == 2 )
            		sumMonth = 31 + leapMonth;

        	if ( dateMonth == 3 )
            		sumMonth = 31 + leapMonth + 31;

        	if ( dateMonth == 4 )
            		sumMonth = 31 + leapMonth + 31 + 30;

        	if ( dateMonth == 5 )
            		sumMonth = 31 + leapMonth + 31 + 30 + 31;

        	if ( dateMonth == 6 )
            		sumMonth = 31 + leapMonth + 31 + 30 + 31 + 30;

        	if ( dateMonth == 7 )
            		sumMonth = 31 + leapMonth + 31 + 30 + 31 + 30 + 31;

        	if ( dateMonth == 8 )
            		sumMonth = 31 + leapMonth + 31 + 30 + 31 + 30 + 31 + 31;

	        if ( dateMonth == 9 )
        	    	sumMonth = 31 + leapMonth + 31 + 30 + 31 + 30 + 31 + 31 + 30;

        	if ( dateMonth == 10 )
            		sumMonth = 31 + leapMonth + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;

        	if ( dateMonth == 11 )
            		sumMonth = 31 + leapMonth + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;

        	if ( dateMonth == 12 )
            		sumMonth = 31 + leapMonth + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + 31;

		//cout << "sumMonth = " << sumMonth << endl;

		
		// Calculate day
		sumDay = dateDay - 1;
		//cout << "sumDay = " << sumDay << endl;


		// Calculate ((total days) to seconds) plus ( hours to seconds ) plus ( minutes to seconds ) plus seconds
		sumTotal = (( sumYear + sumMonth + sumDay) * 86400) + (( dateHour - 1 ) * 3600) + ( dateMinute * 60 ) + dateSeconds;


		// Return the results
		return sumTotal;
}


