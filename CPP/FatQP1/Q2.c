#include <stdio.h>

int product_sum(int *a, int *b, int n)
{
    int tot = 0;
    int lena=0, lenb=0;
    while (lena < n)
    {
        lenb=0;
        while (lenb < n)
        {
            tot += (*(a+lena) * *(b+lenb));
            lenb++;
        }
        lena++;
    }
    return tot;
}

int main()
{
    int a[] = {1,1,1,1,1}, b[] = {1,1,1,1,1};
    printf("%d", product_sum(&a[0], &b[0], 5));
    return 0;
}

//25