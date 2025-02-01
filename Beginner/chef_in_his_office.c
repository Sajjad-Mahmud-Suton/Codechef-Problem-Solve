
#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    int Y,X;

    for(int i=1; i<=T; i++)
    {
        scanf("%d %d",&X, &Y);
        printf("%d\n",(4*X)+Y);
    }
}
