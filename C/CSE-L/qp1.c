#include <stdio.h>

void main(){
    int a,b, res_addition, res_sub, res_multiplication;
    float res_div;
    char condition;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf (" %c", &condition);
    if (condition == 'A'){
        res_addition = a+b;
        printf("%d", res_addition);
    }
    else if (condition == 'S'){
        res_sub = a-b;
        printf("%d", res_sub);
    }
    else if (condition == 'M'){
        res_multiplication = a*b;
        printf("%d", res_multiplication);
    }
    else{
        res_div = (float)a/b;
        printf("%.2f", res_div);
    }
}