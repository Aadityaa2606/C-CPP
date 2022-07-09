//Q1 cpp

// In a cricket season a player has 3 stastics , Runs(R), Wickets (W),Catches(C), there are 2 players, A and B, write a c++ program 
// to decide who the best player is. Create a class Player, and create variables for storing stats inside the class, then create a member 
// function to compare stats(parameters are both classes).

// (best player is the one who has better stats
// ex: A: 2 4 2
//     B: 4 3 1
//     better player is A )
// Input:
// 3 5 6
// 7 1 4
// Output:
// A

#include <iostream>
using namespace std;

class Player{
    public:
        int runs, wickets, catches;
        void better(Player a,Player b){
            int scrA{0}, scrB{0};
            if (a.runs > b.runs) scrA++;
            else scrB++;
            if (a.catches > b.catches) scrA++;
            else scrB++;
            if (a.wickets > b.wickets) scrA++;
            else scrB++;
            if (scrA > scrB) cout << "A";
            else cout << "B";
        }
};
int main(){
    Player A, B;
    cin >> A.runs >> A.catches >> A.wickets;
    cin >> B.runs >> B.catches >> B.wickets;
    A.better(A,B);
    return 0;
}