#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    int Y,X,Z;

    for(int i=1; i<=T; i++)
    {
        scanf("%d %d %d",&X, &Y, &Z);
        float total = (X*Y)/2;
        if( total<Z)
            printf("YES \n");
        else
            printf("NO");
    }
}
