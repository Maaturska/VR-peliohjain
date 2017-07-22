#include <SoftwareSerial.h>
SoftwareSerial BTserial(2, 3);
int n;
int array[16];
 
void setup() 
{
    Serial.begin(9600);
    Serial.println("Arduino with HC-06 is ready");
 
    BTserial.begin(9600);  
    Serial.println("BTserial started at 9600");
}
 
void loop()
{
    if (BTserial.available())
    {
        for(n=0; n<16; n++)
        {
          if (BTserial.available())
          {
              array[n]=BTserial.read();
              Serial.println(array[n]);
          }
        }
    }
}
