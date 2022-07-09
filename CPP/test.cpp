// #include <iostream>
// #include <string>

// using namespace std;

// struct student{
//   int roll_no;
//   string name;
//   int age;

//   struct address{
//       int street_code;
//       int pin_code;
//   };
// };

// void disp(struct student s[]){
//     for (i = 0; i < 5; i++){
//         if (s[i].age == 14){
//             cout << s[i].name << endl;
//         }
//     }
// }

// void printroll(struct student s[]){
//     for (int i = 0; i < 5; i++)
//     {
//         if (s[i].roll_no%2 == 2){
//             cout << s[i].name << endl;
//         }
//     }
    
// }


// void justdisp(struct student s[], string name){
//     for (int i = 0; i < 5; i++)
//     {
//         if (s[i].name == name){
//             cout << s[i].name << endl;
//             cout << s[i].age << endl;
//             cout << s[i].roll_no << endl;
//         }   
//     }
    
// }
// int main() {
//   struct student studs[5];
//   for (int i = 0; i < 5; i++)
//   {
//       cin >> studs[i].roll_no;
//       cin >> studs[i].name;
//       cin >> studs[i].age;
//       cin >> studs[i].address.street_code;

//   }
  
//   return 0;


// #include <iostream>
// using namespace std;

// class addition{
// public:
//     int a, b;
    
//     void values(){
//         cin>>a;
//         cin>>b;
//     }
//     addition(int a, int b){
//         a = a;
//         b = b;
//     }
//     addition(){}

//     void ad(){
//         cout<<"Addition of a and b:";
//         cout<<a+b;
//     }
// };

// int main(){
//     addition add1;
//     add1.values();
//     add1.ad();
//     return 0;
// }


#include <iostream>

using namespace std;

class Account{
    private:
        float bal;
    public:
        float anul_int, mont_int{0};
        Account(){
            bal = 0;
        }
        Account(float a){
            bal = a;
        }
        void calc(){
            mont_int = (bal*anul_int)/12;
            bal+=mont_int;
            cout << "Bal = " << bal << endl;
        }
        void modify(float x){
            anul_int = x;
        }
};

int main(){
    Account saver1(2000), saver2(3000);
    saver1.anul_int = saver2.anul_int = 3;
    saver1.calc();
    saver2.calc();
    saver1.modify(4);
    saver2.modify(4);
    saver1.calc();
    saver2.calc();
    return 0;
}



