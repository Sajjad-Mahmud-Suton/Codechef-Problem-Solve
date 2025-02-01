#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    int N,X;

    for(int i=1; i<=T; i++)
    {
        scanf("%d",&X);
        if((10-X)>=3)
        printf("YES\n");
        else
        printf("NO\n");
    }
}
