#ifndef INDEX_H
#define ALFAN_H

#include <iostream>
#include <string>
using namespace std;

class Body {
    private:
        int time;

    public:
        // ========== SETTER - GETTER ==========

        // time
        void setTime(int t)
        {
            time = t;
        }
        int getTime()
        {
            return time;
        }
        
        Body(){
            this -> setTime(5000);
        }

        void transmitTorsi(string frame){
            cout << "Berhasil men-trasnmit torsi ke " << frame << endl;
        }        
};

class Foot : public Body {    
    public:        
        void jalan();
        void belok();
};

class Hand : public Body {
    public:                        
        void ngasai();
        void barik();
};

class Foot28 : public Foot
{
    public:
        void jalan();
        void belok();
};

class Foot64 : public Foot
{
    public:
        void jalan();
        void belok();
};

#endif