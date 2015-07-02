#include <iostream>
#include <stdio.h>
int check(int no, int *total, int *r, int *c);
int main()
{
     int parts,cases=1;
    while(scanf("%d",&parts)==1 && parts!=0)
    {
        int row, col, dimx, dimy, current_ch, chparts[1000];
        scanf("%d %d",&dimx,&dimy);
        col=dimy, row=dimx,current_ch=dimx*dimy;
        int flag=0;
        for(int i=0; i<parts;i++)
        {
            scanf("%d",&chparts[i]);
            int ans=check(chparts[i],&current_ch,&row,&col);
        if(ans==0)
            {
                printf("Case %d: No\n",cases);
                break;
            }
            else
                flag=1;
        }
        if(flag==1)
        {
            printf("Case %d: Yes\n",cases);
        }
    cases++;
    }

}

int check(int no, int *total, int *r, int *c)
{
    printf("%d %d %d I am case 1\n",*total,*r,*c);
    int diff= (*total)- no;
    if(diff%(*r)==0)
    {
        printf("%d I am sd 1\n",*total);
        *total=*total- diff;
        int cut= (diff/(*r));
        *c=*c-cut;
        return 1;
    }
    else if(diff%(*c)==0)
    {
        printf("%d I am sd 2\n",*total);
         *total=*total- diff;
        int cut= (diff/(*c));
        *r=*r-cut;
        return 1;
    }

    else if(diff%(*c+*r-1)==0);
    {
        printf("%d I am sd 3 %d\n",*total,*r+*c-1);
        *total=*total- diff;
        int cut= (diff/(*c+*r-1));
        *r=*r-cut;
        *c=*c-cut;
        return 1;
    }

    return 0;
}
