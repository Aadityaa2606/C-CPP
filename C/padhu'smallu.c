#include <stdio.h>

typedef struct student
{
    char name[10];
    int roll;
    int mark;
}std;

std get_data(){
    int num;
    scanf("%d", &num);
    std X[num];
    for (int i = 0; i < num; i++)
    {
        scanf("%c", &X[i].name);
        scanf("%d", &X[i].roll);
        scanf("%d", &X[i].mark);
    }
}

void sort_data(char chk, std x, int len){
    if (chk = "name"){
        for (int i = 0; i < len; i++)
        {
            
        }
        
    }
}

int main(){
    return 0;
}