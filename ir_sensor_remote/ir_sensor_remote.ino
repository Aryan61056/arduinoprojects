#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C(0x27,16,2)

#include <IRremote.hpp>
#define USE_IRREMOTE_HPP_AS_PLAIN_INCLUDE

void setup() {
  lcd.init();
  lcd.backlight ();
  Serial.begin(9600);
  IrReceiver.begin(2);

}

void loop() {
  while(IrReceiver.decode()==0)
  {

  }
  if(IrReceiever.decode())
  {
    unsigned long value = IrReceiver.decodedIRData.decodedRawData;
    Serial.print("KEY VALUE in DEC = ");
    Serial.println(value,DEC);

    switch(value)
    {
      case 4444039827:  // pause
      lcd.clear();
      lcd.setCursor(6,0);
      lcd.print("||");
      break;

      case 4444023491: // play
      lcd.clear();
      lcd.setCursor(6,0);
      lcd.print(">");
      break;

      case 4444015678: // skip
      lcd.clear();
      lcd.setCursor(6,0);
      lcd.print(">>");
      break;
    }
    IrReceiver.resume();

  }

}
