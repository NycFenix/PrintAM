#include <iostream>
#include <thread>
#include <chrono>
#include <wiringPi.h>
using namespace std;


int main(void) {
    wiringPiSetupGpio();

    pinMode(17, INPUT);
    pullUpDnControl(17, PUD_DOWN);

    int valor = digitalRead(17);

    
        while (true)
        {
            digitalWrite(17, HIGH);
            cout << "LED ON" << endl;
            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
            digitalWrite(17, LOW);
            cout << "LED OFF" << endl;
            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        }
        
    return 0;
    }
    
