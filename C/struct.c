// #include <stdio.h>
// #include <string.h>
// // 30/06/2022

// typedef struct Date{
//     int day;
//     int month;
//     int year;
// }Date;


// Date inputdate(){
//     Date dt;
//     printf("Enter the date: ");
//     scanf("%d", &dt.day);
//     printf("Enter the month: ");
//     scanf("%d", &dt.month);
//     printf("Enter the year: ");
//     scanf("%d", &dt.year);
//     return dt;
// }

// Date printdate(Date d){
//     printf("The date is %d/%d/%d\n", d.day, d.month, d.year);
// }

// typedef struct empdata{
//     int empID;
//     char name[20];
//     Date joindt;
//     int num;
// }Empdata;

Empdata inputdata(){
    Empdata dat;
    printf("Enter the employee ID: ");
    scanf("%d", &dat.empID);
    printf("Enter name of employee: ");
    gets(dat.name);
    printf("Enter the join date: ");
    dat.joindt = inputdate();
    printf("Enter the phone number: ");
    scanf("%d", &dat.num);
    return dat;
}

typedef struct allemps{
    Empdata d1;
}all;

void main(){
    int n,i;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++){
    inputdata;
    }
    
}
#include <stdio.h>
typedef struct CONSUMER{
    int ConNum;
    char ConName[20];
    float prevUnits;
    float presentUnits;
    float TotUnits;
    float TotBill;}CONS;
CONS readConsumerdata(){
    CONS dat;
    scanf("%d", &dat.ConNum);
    scanf("%s", dat.ConName);
    scanf("%f", &dat.prevUnits);
    scanf("%f", &dat.presentUnits);
    return dat;}    
CONS writeConsumerdata(CONS data){
    printf("%d\n", data.ConNum);
    printf("%s\n", data.ConName);
    printf("%.2f\n", data.prevUnits);
    printf("%.2f\n", data.presentUnits);
    printf("%.2f\n", data.TotUnits);
    printf("%.2f\n", data.TotBill);}
CONS computeConsumerbill(CONS data){
    data.TotUnits = data.presentUnits-data.prevUnits;
    float x = data.TotUnits;
    if (x < 0)
        data.TotBill = 0;
    else if (x <= 50)
        data.TotBill = x*2.0;
    else if (x >50 && x <= 100)
        data.TotBill = x*2.25; 
    else if (x > 100 && x <= 200)
        data.TotBill = x*2.5;
    else if (x > 200 && x <= 400)
        data.TotBill = x*3.0;
    else if (x > 400 && x <= 600)
        data.TotBill = x*3.5;
    else
        data.TotBill = x*4.0;
    return data;}
int main(){
    CONS dat = readConsumerdata();
    CONS dat1 = computeConsumerbill(dat);
    if (dat1.TotBill == 0)
        printf("Invalid");
    else    
        writeConsumerdata(dat1);}