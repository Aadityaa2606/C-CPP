#include <iostream>

using namespace std;

class registration{
    public:
        int parti, amt, tot_amt;
        void calc(){
            tot_amt = parti*amt;
        }
};

int totcalc(registration *x, int n){
    int tot_parti, final_amt;
    for (int i = 0; i < n; i++)
    {
        tot_parti += *(x[i]).parti
    } 
}

int main(){
    int n;
    cin >> n;
    registration event[n];
    for (int i = 0; i < n; i++)
    {
        cin >> event[i].tot_part;
        cin >> event[i].amt;
    }
    

}