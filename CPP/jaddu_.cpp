#include <iostream>

using namespace std;

class Student{
    public:
        int roll_no;

};

class test : public Student{
    public:
        int mk1,mk2;

};

class Sport : public Student{
    public:
        int s_score;
};

int calc(test x, Sport y){
    cout << "Total score is" << endl;
    int tot = x.mk1+x.mk2+y.s_score;
    return tot;
}
int main(){
    test t1;
    Sport s1;
    cin >> t1.roll_no >> t1.mk1 >> t1.mk2 >> s1.s_score;
    cout << calc(t1,s1) << endl;
    if (calc(t1,s1)/300 > 0.75)
        cout <<  

    return 0;
}