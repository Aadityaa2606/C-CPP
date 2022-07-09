#include <iostream>

using namespace std;

class Cricket{
    private:
        int runs,wickets,catches,stmps,pts{0} ; // pts = points
        friend int mom(Cricket x); // mom = man of the match
};

int mom(Cricket x){
    x.pts = x.runs + x.wickets + x.catches + x.stmps ; 
    return x.pts;
}

int  

int main(){
    int n=3; // total 11 players in a cricket team
    Cricket team[n];
    for(int i=0;i<n;i++){ //taking inputs of total numbers of 3 matches 
        cin >> team[i].runs ;
        cin >> team[i].wickets ;
        cin >> team[i].catches ;
        cin >> team[i].stmps ;
    }

    for(int i=0;i<n;i++){
        team[i].pts = mom(team[i]);
    }

    int max{0};
    for (int i = 0; i < n; i++)
    {
        if (team[i].pts > max)
        {
            max = team[i].pts;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (team[i].pts == max){
            cout <<"Player number "<< i+1 << " is the man of the series"<< endl;
        }
    }
    

}
