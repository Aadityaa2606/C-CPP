// #include <iostream>

// using namespace std;

// class Commision{
//     double sales_amt;
//     int months;
//     int comm_rates;
// };

// Commision::Commision (double sales_amt = 100000, int comm = 10, int months = 3);
// Commision::Commision (double sales_amt, int comm): Commision {sales_amt, comm, months=1};   
// Commision::Commision (double sales_amt, int comm, int months): Commision {sales_amt,comm,months}

// int main(){
//     float bonus; 
//     Commision test1;
//     Commision test2 {150000, 15};
//     Commision test3 {150000, 15, 4};
//     bonus1 = test1.sales_amt * test1.comm_rate * test1.months
//     bonus2 = test2.sales_amt * test2.comm_rate * test2.months
//     bonus3 = test3.sales_amt * test3.comm_rate * test3.months
//     return 0;
// }


// // test case
// // input
// // 150000
// // 15
// // 4
// // output
// // 9000000

// s1:create a class named Commision
// s2:define the objects inside the class sales amount, months, commision rates.
// s3:define the constructor overloads 1st.all default values, 2nd.months default value, 3rd. no default values.
// s4:Get the input from the user and save it in a new object using the values calculate the bonuses for 3 overloads.

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;
class xyz{
    friend int calc();
};

int calc(){

}

int main(){
    string s1, s2, s3;
    cin >> s1;
    cin >> s2;
    for (int i = 0; i < s1.length(); i++){
        int x = abs(int(s1[i])-int(s2[i]))+int(s2[i]);
        if (x > 132){
            cout << x << endl;
            x = 132-x;
            cout << x << endl;
        }
        cout << x << endl;
        s3.push_back(char(x));
    }
    cout <<  s3 << endl;
    return 0;
}