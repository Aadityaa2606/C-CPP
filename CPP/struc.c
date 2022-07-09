#include <stdio.h>

int lenghtnum(int n){
    int b=0;
    if (n<=9){
        for(int i=0;i<n;i++){
            b=b*10+i+1;
        }
        return b;
    }
    else{
        for(b=0;b<n;b++){
            b=b*10+9;
        }
        return b;
    }
}
int main(){
    int a;
    scanf("%d",&a);
    printf("%d", lenghtnum(a));
    return 0;
}