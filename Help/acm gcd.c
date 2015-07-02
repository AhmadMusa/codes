#include <stdio.h>
int main()
{
int G=0,i,N,j;
while(scanf("%d",&N)==1)
{
    if(N==0)
        break;
    G=0;
for(i=1;i<N;i++)
{
for(j=i+1;j<=N;j++)
{
    G+=GCD(i,j);
}

}
printf("%d\n",G);
}
return 0;
}

int GCD(int a,int b)
{
    int temp;
    temp=a%b;
    if(temp!=0)
        return GCD(b,temp);
    if(temp==0)
        return b;
}
