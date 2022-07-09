#include <stdio.h>
#include <string.h>


void reverse_name(char *name)
{
    int chk = 1;
    char fname[20], lname[20];
    int cnt = 0;
    while (chk)
    {
        if (*(name + cnt) == ' ') chk = 0;
        else fname[cnt] = *(name + cnt);
        cnt++;
    }
    chk = 1;
    while (chk)
    {
        if (*(name+cnt) == '/') chk = 0;
        else lname[cnt] = *(name+cnt);
        cnt++;
    }
    printf("%s%s", lname, fname);
}

int main()
{
    char name[20];
    char l = '/';
    gets(name);
    strcat(name, &l);
    // reverse_name(name);
    printf("%s", name);
    printf("%c", l);
    return 0;
}