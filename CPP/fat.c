#include <stdio.h>

typedef struct defence
{
    char *name[10];
    int id;
    int yr_join;
}d;

int calc(d x){
    if (x.yr_join <= 2010) return 0;
    else return 1;  
}

int main(){
    d std;                    
    char sen[10] ="senior";
    char jun[10] = "junior";
    scanf("%s", &std.name);
    scanf("%d", &std.id);
    scanf("%d", &std.yr_join);
    printf("%s\n", std.name);
    printf("%d\n", std.id);
    if (calc(std) == 0) printf("%s", sen);
    else printf("%s", jun);
    return 0;
}