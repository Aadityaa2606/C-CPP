#include <iostream>
#include <string>

using namespace std;

class Account{
    public:
        int c_name;
        int acc_num;
        string acc_type;
        float bal;
};

class savings : public Account{
    public:
        int penal = 0;
        int final_bal = 0;

};

class current : public Account{
    public:
        int penal;
        int final_bal;
        void chk_minbal(){
            if (bal < 500){
                penal = 20;
                final_bal = bal - 20;
            }
            else{
                penal = 0;
                final_bal = 0;
            }
        }
};

int main(){
    Account cus1;
    cin >> cus1.acc_num;
    cin >> cus1.acc_type;
    cin >> cus1.bal;
    if (cus1.acc_type == "Current"){
        current cus2;
        cus2.acc_num = cus1.acc_num;
        cus2.acc_type = cus1.acc_type;
        cus2.bal = cus1.bal;
        cus2.chk_minbal();
        cout << cus2.bal << endl;
        cout << cus2.penal << endl;
        cout << cus2.final_bal << endl;
    }
    else{
        cout << cus1.bal <<endl;
        cout << 0 << endl;
        cout << cus1.bal << endl;
    }
    return 0;
}