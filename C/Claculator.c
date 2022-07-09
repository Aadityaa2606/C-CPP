#include <stdio.h>

int main(){
    char opp;
    scanf("%c", &opp);
    int a=0,b=0,i,pwr=1;
    scanf("%d %d", &a, &b);
    switch(opp){
        case '+':
            printf("%d %c %d = %d", a, opp, b, a+b);
            break;
        case '-':
            printf("%d %c %d = %d", a, opp, b, a-b);
            break;
        case '*':
            printf("%d %c %d = %d", a, opp, b, a*b);
            break;
        case '/':
            printf("%d %c %d = %.2f", a, opp, b, a*1.0/b);
            break;
        case '%':
            printf("%d %c %d = %d", a, opp, b, a%b);
            break;
        case '^':
            for (i = 0; i < b; i++){
                pwr = pwr*a;
            }
            printf("%d",pwr);
            break;
        default :
            printf("Wrong Input Try again");
    }
    return 0;
}