#include <stdio.h>

int main(){
    int logic, verbal, arth, puzz;
    scanf("%d", &logic);
    scanf("%d", &verbal);
    scanf("%d", &arth);
    scanf("%d", &puzz);
    if (logic+verbal+arth+puzz >= 180) printf("Eligible of lvl1\n");
    else printf("Not eligible of lvl1\n");
    if (logic > 40 && verbal > 40 && arth > 40 && puzz > 40) printf("Eligible for lvl2\n");
    else printf("Not eligible of lvl2\n");
    return 0;
}