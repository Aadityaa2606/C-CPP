#include <iostream>

using namespace std;

class game{
    public:
        int n;
        int credit;
};

class game1 : public game{
    public:
        int scr;
        void cacl(){
            if (scr < 100){
                credit = 1;
            }
        }
};

class game2 : public game{
    public:
        int scr;
        void cacl(){
            if (scr < 100){
                credit = 1+1;
            }
            else if (scr < 150 && scr > 100){
                credit = 3;
            }
        }
};

int main(){
    game1 chess;
    
    return 0;
}