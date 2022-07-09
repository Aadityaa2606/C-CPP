#include <iostream>

using namespace std;

class Mammals{
    public:
    void disp(){
        cout << "I am mammal" << endl;
    }
};

class MarineAnimals{
    public:
    void disp(){
        cout << "I am marine animal" << endl;
    }
};

class Bluewhale : public Mammals, public MarineAnimals{
    public:
    void disp(){
        cout << "I belong to both the categories" << endl;
    }
};
int main(){
    Mammals a1;
    MarineAnimals a2;
    Bluewhale a3;
    a1.disp();
    a2.disp();
    a3.disp();
    a3 *p1 = new a3;
    
    return 0;
}