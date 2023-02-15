#include <stdio.h>
#include<stdlib.h>
#define SLEN 10
int mycomp(const void *p, const void *a);
void fillarray(double a[], int n);
int main(void)
{
    double vals[SLEN];
    fillarray(vals,SLEN);
    qsort(vals,SLEN,sizeof(double),mycomp);
    for(int i=0; i<SLEN; i++)
    {
        printf("%lf\n",vals[i]);
    }
    return 0;
}
void fillarray(double a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &a[i]);
    }
}
int mycomp(const void *p, const void *a)
{
    const double *a1 = (const double *)p;
    const double *a2 = (const double *)a;
    if (*a1 < *a2)
    {
        return -1;
    }
    else if (*a1 == *a2)
    {
        return 0;
    }
    else{
        return 1;
    }
}