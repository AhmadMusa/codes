#include<stdio.h>
#include<math.h>
#define max 1004

int prime[max+1];
int twin[max];

void sieve()
{
int i,j;
for(i=2; i <= max; i++)
prime[i] = 1;
for(i=2; i <= sqrt(max);)
{
for(j = 2*i; j <= max; j += i)
{
prime[j]=0;
}
i++;
for(; !prime[i]; i++);
}
prime[1] = 1;
prime[2] = 1;
prime[0] = 0;
}

int main()
{
sieve();
int n,m,p = 0,k;
while(scanf("%d%d",&n,&m)==2)
{
k = p = 0;
printf("%d %d: ",n,m);
int r,i,j;
for( i = 1; i <= n; i++)
{
if(prime[i] == 1)
{
k++;
twin[++p] = i;
}
}
if(m*2 >= k)
{
for( r = 1; r <= n; r++)
{
if(prime[r] == 1)
printf("%d ",r);
}
}

else if(k % 2 == 0)
{
for(i = k/2-m+1,j = 0; j < m*2; i++)
{

printf("%d ",twin[i]);
j++;
}
}
else if(k % 2 != 0)
{
for( i = k/2-m+2,j = 0; j < m*2-1; i++)
{

printf("%d ",twin[i]);
j++;

}
}
printf("\n\n");

}
return 0;
}

