#include <stdio.h>

int main(){
    int cnum[16];
    for (int i = 0; i < 16; i++)
    {
        scanf("%d", &cnum[i]);
    }
    int revsum=0, norsum=0;
    for (int i = 15; i > -1; i-=2)
    {
        revsum+=cnum[i];
    }
    for (int i = 0; i < 16; i+=2)
    {
        norsum+=cnum[i];
    }
    if (revsum == 2*norsum) printf("Valid\n");
    else printf("Invalid\n");
    return 0;
}

// 2 5 4 5 6 6 4 7 0 8 3 8 6 9 0 2