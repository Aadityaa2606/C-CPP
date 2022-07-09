#include <stdio.h>
#include <conio.h>  
#include <math.h>

float calc_skew(float price[10]){
    float mn=0;
    int i;
    for (i = 0; i < 10; i++){
        mn+=price[i];
    }
    mn = mn/10;
    float nume=0;
    for (i = 0; i < 10; i++){
        nume+=((price[i]-mn)*(price[i]-mn));
    }
    float s = sqrt((nume/10));
    float sknume=0;
    for (i = 0; i < 10; i++){
        sknume+= ((price[i]-mn)*(price[i]-mn)*(price[i]-mn));
    }
    float sk = sknume/(9*s*s*s);
    return sk;
}

void main(){
    float price[10];
    int i;
    for (i = 0; i < 10; i++){
        scanf("%f", &price[i]);
    }
    printf("%.2f", calc_skew(price));
}

// 10
// 20
// 15
// 17
// 50
// 11
void chekc()[]
// 14
// 9
// 21
// 19

// m =18.6
s = 10.45

