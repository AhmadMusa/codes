#include<stdio.h>
int main()
{
    long long int c=1;
    double m;
    while(scanf("%lf",&m)==1)
    {
        long long n= (long long )m;
        /*we need to figure the kuti  first*/
        long long kuti=0,k_kuti=0,k_lakh=0,k_hajar=0,k_shata=0,extra_kuti=0,lakh=0,hajar=0,shata=0,extra=0,flag=0;
        kuti = n/10000000;
        k_lakh=kuti/100000;
        if(k_lakh>=100)
        {
            k_kuti=k_lakh/100;
            k_lakh=k_lakh%100;
        }
        k_hajar=(kuti%100000)/1000;
        k_shata=((kuti%100000)%1000)/100;
        extra_kuti= ((kuti%100000)%1000)%100;

        lakh=(n%10000000)/100000;
        hajar=((n%10000000)%100000)/1000;
        shata=(((n%10000000)%100000)%1000)/100;

        extra = (((n%10000000)%100000)%1000)%100;
        printf("%4lld.",c++);
        if(kuti!=0)
        {
            if(k_kuti!=0)
            {
                 printf(" %lld kuti",k_kuti);
                flag=1;
            }
            if(k_lakh!=0)
            {

                printf(" %lld lakh",k_lakh);
                flag=1;
            }
            if(k_hajar!=0){
                printf(" %lld hajar",k_hajar);
                flag=1;
            }
            if(k_shata!=0){
                printf(" %lld shata",k_shata);
            flag=1;
            }
            if(flag==0)
            {
                printf(" %lld kuti",kuti);
            }
            else
            {
                if(extra_kuti!=0)
                printf(" %lld kuti",extra_kuti);
                else
                    printf(" kuti",extra_kuti);
                flag=0;
            }
            flag=1;
        }
        if(lakh!=0)
        {
            flag=1;
            printf(" %lld lakh",lakh);
        }
        if(hajar!=0){
                flag=1;
            printf(" %lld hajar",hajar);
        }
        if(shata!=0){
                flag=1;
            printf(" %lld shata",shata);
        }
        if(extra!=0 || flag==0)
        printf(" %lld",extra);

        printf("\n");
    }
    return 0;
}

