#include <iostream>

using namespace std;

class Mobile
{
protected:
    int battery;
    int cam;
};

class Apple : protected Mobile
{
protected:
    int ram;
    int rom;
};

class iphone : protected Apple
{
protected:
    string date_rel;
    float cost;

public:
    void get_details()
    {
        cin >> cam;
        cin >> battery;
        cin >> ram;
        cin >> rom;
        cin >> date_rel;
        cin >> cost;
    }
    void disp_detail()
    {
        cout << cam << endl;
        cout << battery << endl;
        cout << ram << endl;
        cout << rom << endl;
        cout << date_rel << endl;
        cout << cost << endl;
    }
};

int main()
{
    iphone phone;
    phone.get_details();
    phone.disp_detail();
    return 0;
}