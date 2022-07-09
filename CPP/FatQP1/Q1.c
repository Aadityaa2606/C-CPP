#include<stdio.h>

void increment(int n)
{
    static int d=2;
    printf("%d\n",n);
    printf(" %d\n",d);
    ++d;
    if (n>1) increment(n-1);
    printf("%d\n",d);
}
int main(){
    increment(3);
    return 0;
}
// n=3->2->1
// d=2->3->4->5

// 3
// 2
// 2
// 3
// 1
// 4
// 5
// 5
// 5
// #include <stdio.h>

// int main(){
//     char c[] = "BCSE2022";
//     char *p = c;
//     printf("%s", p+(p[3]-p[1])+2);
//     return 0;
// }

// do{

// }while ();

// x = (int*) malloc(10*sizeof(int));

// struct 
// {
//     /* data */
// };


T search(T a[], int n){
    for (int i = 0; i < n; i++)
    {
        if (a[i] == n){
            return i;
        }
    } 
}
n = 6
[1,2,3,4,5,6]
[1.1,2.1,3.2,4.1]

T power()
