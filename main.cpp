#include <Arduino.h>

int main(void) 
{
    init();
    
    setup();

    for (;;)
    {
        loop();
    }

    return 0; 
}

void setup() 
{
    pinMode(13, OUTPUT);
}

void loop() 
{
    digitalWrite(13, HIGH); 
    delay(1000); 
    digitalWrite(13, LOW); 
    delay(1000);
    delay(1000);
}