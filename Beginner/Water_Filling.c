
#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
     int X,Y,Z;
    for (int i=1; i<=T; i++)
        {

        scanf("%d %d %d", &X, &Y, &Z);

       if ((X==0&&Y==0&&Z==0) || (X==0 &&Y==0) || (Y==0 && Z==0) || (X==0 && Z==0))
        printf("Water filling time\n");
       else
        printf("Not now\n");
    }

}



