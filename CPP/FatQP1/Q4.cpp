#include <iostream>
using namespace std;

class cuboid{
    int l,b,h,vol;
    public:
    cuboid(){
        l = 0;
        b = 0;
        h = 0;
    }
    cuboid(int len, int brt){
        l = len;
        b = brt;
        h = 0;
    }
    cuboid(int len, int brt, int hig){
        l = len;
        b = brt;
        h = hig;
    }
    void calc(){
        vol = l*b*h;
    }
};

int main(){
    cuboid y(10, 20),z(10,20,30),x();
    y.calc();
    z.calc();
    
    return 0;
}