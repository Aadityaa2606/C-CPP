// #include <stdio.h>
// int main(){
//     int n, i;
//     scanf("%d", &n);
//     for (i=0; i < n; i++){
//         printf("%d,", i+1);
//     }
//     printf("\n");
//     for (i=n; i>0;i--){
//         printf("%d,", i);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int n,i, s=0;
//     scanf("%d", &n);
//     for (i=0; i<n; i++){
//         s+=i+1;
//     }
//     printf("%d", s)
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int n,i;
//     scanf("%d", &n);
//     for (i=0; i<10; i++){
//         printf("%d * %d = %d", n, i+1, n*(i+1));
//         printf("\n");
//     }
// }

// #include <stdio.h>
// int main(){
//     int i,n,cntr=2;
//     scanf("%d", &n);
//     for (i=0;i<n;i++){
//         printf("%d,", cntr);
//         cntr+=2;
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int n, i, j, k, cntr = 1;
//     scanf("%d", &n);
//     for (i = 1; i < n + 1; i++){
//         for (k = n - i; k > -1; k--)
//             printf(" ");
//         for (j = 1; j < i + 1; j++){
//             printf("%d ", cntr);
//             cntr++;
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int i,n, cntr=0;
//     scanf("%d", &n);
//     for (i=0;i<(n/15) ;i++){

//         cntr+=15;
//     }
//     return 0;
// }

// #include <stdio.h>

// int Rec_Area(int h, int w){
//     return h*w;
// }

// int Max_digit(int num){
//     if (num > 9 && num < 100){
//         int max = num%10, min = num/10;
//         if (max>min)
//             return max;
//         else
//             return min;
//     }
//     else
//         printf("This is not a two digit number Try again!");
//         return 0;
// }

// int Factorial(int num){
//     int ans=1;
//     while (num>0){
//         ans*=num;
//         num-=1;
//     }
//     return ans;
// }
// int main(){
//     printf("%d", Factorial(4));

// }

// #include <stdio.h>

// int RootCalc(int *a, int *b, int *c){
//     float root;
//     root = (-*b+((*b**2)-(4*(*a)*(*c)))**(1/2))/(2*a);
// }

// void main(){
//     int a,b,c;
//     printf("Enter the values of a,b,c seperated by space: ");
//     scanf("%d %d %d", &a, &b, &c);
//     RootCalc(a,b,c);

// }

// #include<stdio.h>

// int main(){
//         int z=10, x;
//         scanf("%d", &x);
//         if (x>z)
//                 printf("%d is greatest", x);
//         else
//             printf("%d is greatest", z);
//         return 0;
// }

// #include <stdio.h>

// int main(){
//     int a;
//     scanf("%d", &a);
//     switch (a){
//     case 0:
//         printf("Value of a is between 0 and 10");
//         break;
//     case 1:
//         printf("Value of a is between 0 and 10");
//         break;
//     case 2:
//         printf("Value of a is between 0 and 10");
//         break;
//     case 3:
//         printf("Value of a is between 0 and 10");
//         break;
//     case 4:
//         printf("Value of a is between 0 and 10");
//         break;
//     case 5:
//         printf("Value of a is between 0 and 10");
//         break;
//     case 6:
//         printf("Value of a is between 0 and 10");
//         break;
//     case 7:
//         printf("Value of a is between 0 and 10");
//         break;
//     case 8:
//         printf("Value of a is between 0 and 10");
//         break;
//     case 9:
//         printf("Value of a is between 0 and 10");
//         break;
//     case 10:
//         printf("Value of a is between 0 and 10");
//         break;
//     default:
//         printf("Value of a is not between 0 and 10");
//         break;
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int q, v;
//     scanf("%d\n", &q);
//     scanf("%d", &v);
//     if (q >= 155 && v >= 155){
//         if (q+v >= 320)
//             printf("Eligible");
//         else
//             printf("Not eligible");
//     }
//     else
//         printf("Not eligible");
//     return 0;
// }

// #include <stdio.h>

// int GRADE(char grade)
// {
//     switch (grade)
//     {
//     case 'S':
//         return 10;
//         break;
//     case 'A':
//         return 9;
//         break;
//     case 'B':
//         return 8;
//         break;
//     case 'C':
//         return 7;
//         break;
//     case 'D':
//         return 6;
//         break;
//     case 'F':
//         return 0;
//         break;
//     }
// }

// int main()
// {
//     int i, subjects, s = 0, cs = 0;
//     printf("number of subjects= ");
//     scanf("%d", &subjects);
//     for (i = 0; i < subjects; i++)
//     {
//         char a;
//         int b;
//         printf("Grade %d= ", i + 1);
//         scanf(" %c", &a);
//         printf("Credits %d= ", i + 1);
//         scanf("%d", &b);
//         s += (GRADE(a) * b);
//         cs += b;
//     }
//     printf("Student's GPA = %.2f", (float)s / (float)cs);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a = 0, n, tot = 0;
//     printf("Total students = ");
//     scanf("%d", &n);
//     while (a < n)
//     {
//         int b;
//         printf("Mark of student %d= ", a + 1);
//         scanf("%d", &b);
//         a++;
//         tot += b;
//     }
//     printf("Average = %.2f", (float)tot / (float)n);
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int first,m,c,p;
//     printf("Enter [0/1]= ");
//     scanf("%d",&first);
//     printf("Phy mark= ");
//     scanf("%d",&p);
//     printf("Che mark= ");
//     scanf("%d",&c);
//     printf("Math mark= ");
//     scanf("%d",&m);
//     if (first==1)
//     {
//         if ((p+m+c)/3>98)
//         {
//             printf("Qualified");
//         }
//         else
//         {
//             printf("Not qualified");
//         }
//     }
//     else
//     {
//         printf("Not qualified");
//     }
//     return 0;
// }

// #include <stdio.h>

// int checksum(int PN[25]){

//     int i,n,arr55[25],cntr=0;
//     for (i = 0; i < 25; i++){
//         int sum=0,m,multi;
//         n = PN[i];
//         while (n>0){
//             m = n%10;
//             sum+=m;
//             n=n/10;
//         }
//         n = PN[i];
//         if (n%5 == 0)//1->not multiple
//             multi = 1;
//         else
//             multi = 0;
//         if (multi == 0 && sum == 5){
//             arr55[cntr] = n;
//             cntr++;
//         }
//     }
//     return arr55;
// }

// #include <stdio.h>

// int main(){
//     int n, i, check=0;
//     scanf("%d", &n);
//     int nums[n];
//     for (i=0; i<n; i++){
//         scanf("%d", &nums[i]);
//     }
//     for (i=0; i<n/2; i++){
//         if (nums[i] != nums[n-1-i])
//             check = 1;
//             break;
//     }
//     if (check == 1)
//         printf("It's not a palindrome");
//     else
//         printf("It is a palindrome");
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// struct bank{
//     int acc;
//     char name[20];
//     int bal;
// };
// void check(int a, char na[],int b);
// void sort(struct bank *s1, int a);
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     struct bank s[n];
//     for(int i=0; i<n; i++)
//     {
//         scanf("%d",&s[i].acc);
//         scanf("%s",&s[i].name);
//         scanf("%d",&s[i].bal);
//     }
//     for(int i=0; i<n; i++)
//     {
//         check(s[i].acc, s[i].name, s[i].bal);
//     }
//     sort(s,n);
//     return 0;
// }
// void check(int a, char na[], int b)
// {
//     if(b<5000)
//     {
//         printf("%d\n",a);
//         printf("%s\n",na);
//     }
// }
// void sort(struct bank *s1, int a){
//     for(int i=0; i<a; i++){
//         for(int j=0; j<a-i-1; j++){
//             if(s1[j].bal<s1[j+1].bal){
//                 char c[20];
//                 int s=s1[j].acc;
//                 int t=s1[j].bal;
//                 strcpy(c,s1[j].name);
//                 s1[j].acc=s1[j+1].acc;
//                 s1[j].bal=s1[j+1].bal;
//                 strcpy(s1[j].name,s1[j+1].name);
//                 s1[j+1].acc=s;
//                 s1[j+1].bal=t;
//                 strcpy(s1[j+1].name,c);
//             }
//         }
//     }
//     for(int i=0; i<a; i++){
//         printf("%d\n",s1[i].acc);
//         printf("%s\n",s1[i].name);
//         printf("%d\n",s1[i].bal);
//     }
// }


// #include <stdio.h>
// #include <string.h>

// typedef struct Book{
//     int bookid;
//     char name[20];
//     int price;
// }BK;

// int main(){
//     BK B1;
//     scanf("%d", &B1.bookid);
//     // scanf("%[^\n]%*c", B1.name);
//     gets(B1.name);
//     scanf("%d", &B1.price);
//     printf("%d\n", B1.bookid);
//     // printf("%s\n", B1.name);
//     puts(B1.name);
//     printf("%d\n", B1.price);
// }

#include <stdio.h>
#include <string.h>

typedef struct FOODCOURT
{
    char C_name[20];
    int Vouch_ID;
    float Vouch_Bal;
}fc;

fc updat(fc consumer, int cost){
    consumer.Vouch_Bal-=cost;
}

int main(){
    fc con1;
    int cost;
    printf("Enter the consumer name: ");
    scanf("%s", con1.C_name);
    printf("Enter the voucher id: ");
    scanf("%d", con1.Vouch_ID);
    printf("Enter the voucher balance: ");
    scanf("%f", con1.Vouch_Bal);
    printf("Enter the product cost");
    scanf("%d", cost);
    updat(con1, cost);
    return 0;
}