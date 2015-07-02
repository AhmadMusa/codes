#include <stdio.h>
#include <string.h>
int main()
{
    freopen("input.txt","r",stdin);
    int dataset;
    scanf("%d",&dataset);
    while(dataset--){
        int pch[1000] , paid ;
        scanf("%d\n",&paid) ;
        while(paid--){
            char c; int p;
            scanf("%c %d\n",&c,&p);
            pch[c]=p;
        }
        long int lines , i , sum=0 ;
        scanf("%d",&lines) ;  getchar();
        long int count=0;
        while(lines--){
            char str[10009] ;
            gets(str) ;
            for(i=0 ; i<strlen(str); i++){
                    sum+=pch[str[i]];
            }
        }
        double ansreal = (double)sum/100 ;
        printf("%.2lf$\n",ansreal);
    }
    return 0;
}
