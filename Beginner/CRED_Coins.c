
#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
     int X,Y;
    for (int i=1; i<=T; i++)
        {

        scanf("%d %d", &X, &Y);

       int a = X*Y/100;
       printf("%d\n",a);
    }

}


