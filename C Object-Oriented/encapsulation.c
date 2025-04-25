#include <stdio.h>

typedef struct
{
    int pin;
    void (*turnOn)(struct LED*);
    void (*turnOff)(struct LED*);

} LED;

void ledTurnON(LED *led){
    printf("LED on Pin %d is turned on. \n", led->pin);
}

void ledTurnOFF(LED *led){
    printf("LED on pin %d is turned off.\n", led->pin);
}

void ledInit(LED *led, int pin){
    led->pin = pin;
    led->turnOn = ledTurnON;
    led->turnOff = ledTurnOFF;
}

int main(void){
    
    LED myLed;

    ledInit(&myLed, 13);
    myLed.turnOn(&myLed);
    myLed.turnOff(&myLed);

    return 0;
}