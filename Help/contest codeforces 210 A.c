#include <stdio.h>
int main()
{
    int n ,k;
    while(scanf("%d %d",&n,&k)==2)
    {
        int t1[2];
        t1[0]=k/2;
        t1[1]=k-t1[0];

        int t2[2];
        t2[0]=t1[1];
        t2[1]=t1[0];

        if(n%2==0)
        {

            int i,j,count,c;
            for(i=0; i<n; i++)
            {
                c=0;
                for(j=0; j<n; j++)
                {
                    if(i%2==0)
                    {
                        if(j==i)
                        {
                            if(j==n-1)
                            {
                                printf("%d",t1[c++]);
                            }
                            else
                            {
                                printf("%d ",t1[c++]);
                            }
                        }
                        else if(j==i+1)
                        {
                            if(j==n-1)
                            {
                                printf("%d",t1[c++]);
                            }
                            else
                            {
                                printf("%d ",t1[c++]);
                            }
                        }
                        else
                        {
                            if(j==n-1)
                                printf("0");
                            else
                                printf("0 ");
                        }
                    }
                    else
                    {
                        if(j==i)
                        {
                            if(j==n-1)
                            {
                                printf("%d",t2[c++]);
                            }
                            else
                            {
                                printf("%d ",t2[c++]);
                            }
                        }
                        else if(j==i-1)
                        {
                            if(j==n-1)
                            {
                                printf("%d",t2[c++]);
                            }
                            else
                            {
                                printf("%d ",t2[c++]);
                            }
                        }
                        else
                        {
                            if(j==n-1)
                                printf("0");
                            else
                                printf("0 ");
                        }
                    }

                }
                printf("\n");
            }
        }
        else
        {
            int i,j,count,c;
            for(i=0; i<n; i++)
            {
                c=0;
                if(i==n-1)
                {
                    for(j=0; j<n-1; j++)
                        printf("0 ");
                    printf("%d",t1[0]+t1[1]);
                    printf("\n");
                }
                else
                {

                    for(j=0; j<n; j++)
                    {

                        if(i%2==0)
                        {
                            if(j==i)
                            {
                                if(j==n-1)
                                {
                                    printf("%d",t1[c++]);
                                }
                                else
                                {
                                    printf("%d ",t1[c++]);
                                }
                            }
                            else if(j==i+1)
                            {
                                if(j==n-1)
                                {
                                    printf("%d",t1[c++]);
                                }
                                else
                                {
                                    printf("%d ",t1[c++]);
                                }
                            }
                            else
                            {
                                if(j==n-1)
                                    printf("0");
                                else
                                    printf("0 ");
                            }
                        }
                        else
                        {
                            if(j==i)
                            {
                                if(j==n-1)
                                {
                                    printf("%d",t2[c++]);
                                }
                                else
                                {
                                    printf("%d ",t2[c++]);
                                }
                            }
                            else if(j==i-1)
                            {
                                if(j==n-1)
                                {
                                    printf("%d",t2[c++]);
                                }
                                else
                                {
                                    printf("%d ",t2[c++]);
                                }
                            }
                            else
                            {
                                if(j==n-1)
                                    printf("0");
                                else
                                    printf("0 ");
                            }
                        }
                    }
                    printf("\n");
                }
            }
        }
    }
    return 0;
}
