#include <iostream>
#include <string>
using namespace std;

class Calculator{
    private:
        float operan1;
        float operan2;
        char op;
    public:
        int result;
        void get_data(){
            cin >> operan1;
            cin >> operan2;
            cin >> op;
        }
        int show_result(){
            switch (op)
            {
            case '+':
                result = (operan1+operan2);
                return result;
                break;
            case '-':
                result = (operan1-operan2);
                return result;
                break;
            case '*':
                result = (operan1*operan2);
                return result;
                break;
            case '/':
                result = (operan1/operan2);
                return result;
                break;
            default:
                cout << "Invalid input!" << endl;
            }
        }
};

int main(){
    Calculator obj;
    obj.get_data();
    // cout << obj.result << endl;
    cout << obj.show_result() << endl;
    return 0;
}