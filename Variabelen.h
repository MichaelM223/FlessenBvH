//splashscreen
int BvH = 60;
int BvHp = 0;   
//Knoppenwinkel
int pagina = 1;
int lastButton = LOW;   // the previous reading from the input pin
int timer = 0; //knop debounce idee
const int refreshtimer = 6; //debounce tijd (hoog wanneer snelle fps van LCD, splash is +- 6-7fps
//RTC
const int  cs=10; //RTC chip select 
char tijd[9];
char datum[12];
char dag[10];
int TimeDate [2]; //second,minute,hour,null,day,month,year
int Date [2]; //day,month,year
char dagentotkamparray[4];
int dagentotkamp;
//Flessenteller
char Telling[4];
char Euros[4];
int kwart;
int Flessen;
int wacht = 0;
char temp1 [4]; 
char temp2 [4]; 
char temp3 [2]; 
char temp4 [2]; 
char temp5 [4]; 
char temp6 [2];
//Opstart check
int checktijd;
String eepromtest;
char eepromtesta[5];
unsigned long previousMillis = 0; // laatste tijd update
long interval = 15000; // backlight uit na
int backlight = 1;
