//find out Armstrong numbers between 1 and 500
#include <stdio.h>
int main()
{
    int i;
    int save, total=0, temp;

    for(i=1;i<=500;i++)
    {
        total=0;
        save=i;
        while(save!=0)
            {
                temp=save%10;
                total = total + (temp*temp * temp);
                save=save/10;
            }
            if(total==i)
                printf("%d ",i);
    }


}
