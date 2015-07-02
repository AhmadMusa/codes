#include <stdio.h>
int main()
{

    float d, f;
    int i=0, n;
    scanf("%d",&n);
    while(i<n) // test case একটা লুপ এর মধ্যে ঘুরাব ।
    {
        scanf("%f %f",&d,&f); // মান নিয়ে নিলাম ।
d= d + (5*f /9);
        printf("Case %d: %.2f\n",i+1,d ); //হিসেব সহ মান
    i++;
    }
    return 0;
}

