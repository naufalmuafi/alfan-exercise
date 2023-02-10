#include "index.h"
#include <iostream>

int main()
{
    Hand s1;
    Foot28 s11;
    Foot64 s21;    

    s1.transmitTorsi("Servo Tangan 1");
    s1.ngasai();
    s1.barik();
    
    s11.transmitTorsi("Servo Kaki28 11");
    s11.jalan();
    s11.setTime(7000);
    s11.belok();

    s21.transmitTorsi("Servo Kaki64 21");
    s21.setTime(3000);
    s21.jalan();
    s21.setTime(5000);
    s21.belok();

    return 0;
}
