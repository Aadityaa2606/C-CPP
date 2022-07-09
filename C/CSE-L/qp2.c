#include <stdio.h>

void pattern_1(){
    int i,j;
    for (i=0; i<7; i++){
        for (j = 0; j < i+1; j++){
            printf("# ");
        }
        printf("\n");
    }
}

void pattern_2(){
    int i,j;
    for (i=0; i<7; i++){
        for (j = 0; j < i+1; j++){
            printf("%d ", j+1);
        }
        printf("\n");
    }
}

void pattern_3(){
    int i,j;
    for (i=0; i<7; i++){
        for (j = 0; j < i+1; j++){
            printf("%d ", i+1);
        }
        printf("\n");
    }
}

int main(){
    int x;
    scanf("%d", &x);
    switch (x)
    {
    case 1:
        pattern_1();
        break;    
    case 2:
        pattern_1();
        pattern_2();
        break;
    case 3:
        pattern_1();
        pattern_2();
        pattern_3();
    }
    return 0;
}