#include <stdio.h>
int* totalm(int *pns);
float* average (int *pns, int *ptotal);
int main()
{
    int ns;
    int *pns=&ns;
    scanf("%d",pns);

    int total, *ptotal=&total;
    ptotal=totalm(pns);
    float avg, *pavg=&avg;
    pavg=average(pns,ptotal);
    printf("%f",*pavg);
}

int* totalm(int *pns)
{
    int tom,*tm=&tom;
    *tm=0;
    int i, *pi=&i;
    int num, pnum=&num;

    for(*pi=1;*pi<=(*pns);(*pi)++)
    {
        scanf("%d",pnum);
        *tm+=num;
    }
    return tm;
}

float* average (int *pns, int *ptotal)
{
    float ans,*pans=&ans;
    *pans=(float)(*ptotal)/(*pns);
    return pans;
}
