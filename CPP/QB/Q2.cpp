#include <iostream>

using namespace std;


class Appels{
    public:
        int apple;
};

class Mangoes{
    public:
        int mango;
};

class Fruit: public Appels, public Mangoes{
    public:
        int tot;
        void tot_calc(){
            tot = apple + mango;
        }
};

int main(){
    Fruit basket1;
    cin >> basket1.apple >> basket1.mango;
    basket1.tot_calc();
    cout << "Total fruits = " << basket1.tot << endl;
    return 0;
}

