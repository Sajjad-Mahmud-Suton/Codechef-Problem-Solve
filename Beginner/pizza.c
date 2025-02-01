#include<stdio.h>
int main()
{
    int T,N,X;
    scanf("%d",&T);
    for(int i=1; i<=T; i++)
    {
        scanf("%d %d",&N, &X);
        int a = N*X;
        if(a%4==0)
            printf("%d\n",a/4);
        else
            printf("%d\n",((a/4)+1));
    }
}
