#include <LiquidCrystal.h>

LiquidCrystal lcd(1, 2, 4, 5, 6, 7);

void setup(){ 
lcd.begin(16, 2); 
Serial.begin(9600);
}

char rx_byte = 0;
int i = 0;
char string[15] = "";

void loop(){
if (Serial.available() > 0) {
  for(i = 0; i <= 15; i++){
  rx_byte = Serial.read();
  lcd.print(rx_byte);
  string[i] = rx_byte;
  delay(10);
    }
   lcd.setCursor(0, 1);
   Serial.print(string);
  }  
}
