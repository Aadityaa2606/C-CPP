// #exam putukuchu XD   
#include <iostream>

using namespace std;

class array
{
public:
    int arr[12];
    void get_details()
    {
        for (int i = 0; i < 12; i++)
        {
            cin >> arr[i];
        }
    }
    friend class oddeven;
};

class oddeven
{
public:
    int oddarr, evenarr;
    void perform()
    {
        for (int i = 0; i < 12; i++)
        {
            if ([i] % 2 == 0)
        }
    }
};

int main()
{
}