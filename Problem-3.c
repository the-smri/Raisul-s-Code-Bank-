#include<stdio.h>

int main()
{
    int i;
    for(i=1000;i>=1;i--)
    {
        printf("%d\t",i);
        if(i<=1000 && i%5==1)
          printf("\n");
    }
    return 0;
}
