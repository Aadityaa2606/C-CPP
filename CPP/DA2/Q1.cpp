#include <iostream>
#include <string>

using namespace std;

class Attendance{
    public:
        string name;
        int roll_no;
        float percent;

    void get_details(string s, int r, float p){
        name = s;
        roll_no = r;
        percent = p;
    }
    void show_details();
    float get_attendance(){
        return percent;
    }
};

Attendance::Attendance(){
            name = "";
            roll_no = 0;
            percent = 0.0;
}

void Attendance :: show_details(){
    cout << "Name: " << endl;
    cout << "Roll Number: " << endl;
    cout << "Percentage: " << endl;  
}
int main(){
    int n;
    cin >> n;
    Attendance classx[n];
    for (int i = 0; i < n; i++)
    {
        string s;
        int r;
        float p;
        cin >> s >> r >> p;
        classx[i].get_details(s,r,p);
    }
    for (int i = 0; i < n; i++)
    {
        classx[i].show_details();
    }
    float aten[n];
    for (int i = 0; i < n; i++)
    {
        aten[i] = classx[i].get_attendance();
    }

    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (aten[i] < aten[j]){
                temp = aten[i];
                aten[i] = aten[j];
                aten[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << aten[i] << endl;
    }
    return 0;
}