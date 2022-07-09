#include <iostream>
using namespace std;

template <typename T>
  
T Maxswap(T *x, T *y, int *chk)
{
    if (*x > *y){
        T temp;
        temp = *x;
        *x = *y;
        *y = temp;   
        *chk = 1;  
    } 
}


int main(){
    int n;
    cin >> n;
    int chk = 0;
    if (n == 0){
        int num;
        cin >> num;
        int testarr[num];
        for (int i = 0; i < num; i++)
        {
            cin >> testarr[i];
        }
        Maxswap<int>(&testarr[0], &testarr[num-1], &chk);
        if (chk == 1){
            for (int i = 0; i < num; i++)
            {
                cout << testarr[i] << endl;
            }
        }
        else{
            cout << "No swap" << endl;
        }
    }
    else{
        int num2;
        cin >> num2;
        string testarr2[num2];
        for (int i = 0; i < num2; i++)
        {
            cin >> testarr2[i];
        }
        Maxswap<string>(&testarr2[0], &testarr2[num2-1], &chk);
        if (chk == 1){
            for (int i = 0; i < num2; i++)
            {
                cout << testarr2[i] << endl;
            }
        }
        else{
            cout << "No swap" << endl;
        }
    }
    return 0;
}