#include <stdio.h>

int* divisible(int *a, int k, int n){
    for (int i = 0; i < n; i++)
    {
        if (*(a+i) % k == 0) 
            *(a+i) = 0;
        else 
            *(a+i) = (*(a+i)%k);
    }
    return a;
}

int main(){
    int n,k;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &k);

    int* ptr = divisible(a, k, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(ptr+i));
    }
    return 0;
}

// N=5
// K=2

// [2, 5 , 8, 9, 7]
// [0, 1, 0, 1, 1]
