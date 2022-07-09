#include <stdio.h>

typedef struct Bsort{
    int num0[10];
    float num1[10];
    char num2[10][1];
}BS;

void swapele0(int *x1, int *x2){
    int temp = *x1;
    *x1 = *x2;
    *x2 = temp;
}

void intsrt(int nums[]){
    int x,y;
    for(x = 0; x < 10 - 1; x++){       
        for(y = 0; y < 10 - x - 1; y++){          
            if(nums[y] > nums[y + 1]){               
                swapele0(&nums[y], &nums[y+1]);
            }
        }
    }
}

void swapele1(float *x1, float *x2){
    float temp = *x1;
    *x1 = *x2;
    *x2 = temp;
}

void floatsrt(float nums[]){
    int x,y;
    for(x = 0; x < 10 - 1; x++){
        for(y = 0; y < 10 - x - 1; y++){
            if(nums[y] > nums[y + 1]){
                swapele1(&nums[y], &nums[y+1]);
            }
        }
    }
}

void charsrt(const char a[], char * b[]){
    char * temp;
    int i,j;
    for (i=0;i<10;i++){
        b[i] = (char *)(a) + i;
    }
    for(i=0;i<10;i++){
        for(j=i+1;j<10-1;j++){
            if(*b[j-1]>*b[j]){
                temp = b[j];
                b[j] = b[j-1];
                b[j-1] = temp;
            }
        }   
    }
}

int main(void){
    int chk,i;
    BS vals;
    scanf("%d",  &chk);
    switch (chk){
    case 0:
        for (i = 0; i < 10; i++){
            scanf("%d", &vals.num0[i]);
        }
        intsrt(vals.num0);
        for (i = 0; i < 10; i++){
            printf("%d\n", vals.num0[i]);
        }
        for (i=8; i>-1; i--){
            printf("%d\n", vals.num0[i]);
        }
        break;
    case 1:
        for (i = 0; i < 10; i++){
            scanf("%f", &vals.num1[i]);
        }
        floatsrt(vals.num1);
        for (i = 0; i < 10; i++){
            printf("%.2f\n", vals.num1[i]);
        }
        for (i=8; i>-1; i--){
            printf("%.2f\n", vals.num1[i]);
        }
    default:
        break;
    }
    if (chk ==2){
        char * s_letters[10];
        char letters[10];
        for (i = 0; i < 10; i++){
            char tem;
            scanf("%c", tem);
            letters[0] = tem;
        }
        charsrt(letters,s_letters);
        for (i=0;i<10;i++){
            printf("%c\n", *s_letters[i]);
        }
    }
    return 0;
}