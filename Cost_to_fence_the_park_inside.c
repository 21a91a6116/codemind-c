#include<stdio.h>
int main()
{
    int l,b,w,c,area;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    if(l<=2*w || b<=2*w)
    {
      printf("Impossible");
    }
    else
    { 
        area=(l*b-(l-2*w)*(b-2*w));
        printf("%d",area*c);
    }
    return 0;
}