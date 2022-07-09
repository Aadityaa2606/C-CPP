// #include <iostream>

// using namespace std;

// int main(){
//     cout << "Hello!, this is Aadityaa's room cleaning company.\n\n";

//     int small_rooms{0};
//     cout << "Enter the total number of small rooms to be cleaned: ";
//     cin >> small_rooms;

//     int large_rooms{0};
//     cout << "Enter the total number of large rooms to be cleaned: ";
//     cin >> large_rooms;

//     const double cost_small{25};
//     const double cost_large{35};
//     const double sales_tax{0.06};
//     const int estimate{30};
    
//     cout << "\n\nEstimate for carpet cleaning service\n";
//     cout << "Number of small rooms: " << small_rooms << endl;
//     cout << "Number of large rooms: " << large_rooms << endl;
    
//     cout << "Price per small room: " << cost_small << endl;
//     cout << "Price per large room: " << cost_large << endl;
    
//     double cost{(cost_small*small_rooms)+(cost_large*large_rooms)};
    
//     cout << "cost: " << cost << endl;
//     cout << "Tax: $" << cost*sales_tax << endl;
//     cout << "====================================================\n";
//     cout << "Total estimate: $" << (cost*sales_tax)+cost << endl;
//     cout << "This estimate is valid for " << estimate << " days\n\n";
// }

#include <iostream>
#include <string.h>

using namespace std;

class student{
    public:
    char name[10];
    string regno;
    int mark;
    friend void search(student s[], int p, int f);
    friend void search(student s[], int p, char reg[]);
    void get(){
        cin >> name;
        cin >> regno;
        cin >> mark;
    }
};

void student::search(student s[], int p, int f){
    for (int i = 0; i < p; i++)
    {
        if (s.regno[i] > s.regno[f]){
            cout << s.name[i] << "\n" << s.regno[i] << "\n" << s.marks[i] << endl;
        }
    }
}

void student::search(student s[], int p, char reg[10]){
    for (int i = 0; i < p; i++)
    {
        if (s.regno[i] == reg){
            cout << s.name[i] << "\n" << s.regno[i] << "\n" << s.marks[i] << endl;
        }
    }
}
















