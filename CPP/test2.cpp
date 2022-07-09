// #include <iostream>

// using namespace std;

// class inputdata
// {
// public:
//     int data1[10];
//     float data2[10];
//     char data3[10];

//     void getvalue()
//     {
//         int chk;
//         cin >> chk;
//         if (chk == 0)
//         {
//             for (int i = 0; i < 10; i++)
//             {
//                 cin >> data1[i];
//             }
//         }
//         else if(chk == 1){
//             for (int i = 0; i < 10; i++)
//             {
//                 cin >> data2[i];
//             }
//         }
//         else{
//             for (int i = 0; i < 10; i++)
//             {
//                 cin >> data3[i];
//             }
//         }
//     }
// };

// class orderAscend:public inputdata{
//     public:
//         void Ascend(){
//             for (int i = 0; i < 10; i++)
//             {
//                 for (int j = 0; j < 10-i; j++)
//                 {
//                     if (data1[j] >                      
//                 }
//                 [[1   ]]
//             }
            
//         }

// };

// int main()
// {

//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;

// class Player{
//     public:
//     string name;
//     int xp;
//     int health;
//     public:
//     Player(string name_val,int xp_val,int health_val){
//     name = name_val;
//     xp = xp_val;    
//     health = health_val;
//     }

//     friend int getinp();

//     void get();
// };
// void Player::get()
//     {
//         cout<<name<<endl;
//     }
//     int getinp(){
//         sdfasdlkf
//         sfashf
//     }

// Player getinp(){}

// int main(){
//     Player hello{"NONE",10,12};
//     hello.get();
//     return 0;
// }




// C++ program to count words in
// a string using stringstream.
#include <iostream>
#include <sstream>
#include<string>
using namespace std;

stringstream countWords(string str)
{
	// Breaking input into word
	// using string stream

	// Used for breaking words
	stringstream s(str);

	// // To store individual words
	// string word;

	// int count = 0;
	// while (s >> word)
	// 	count++;
	// return count;
    return s;
}

// Driver code
int main()
{
	string s = "geeks for geeks geeks";
	cout << countWords(s);
	return 0;
}
