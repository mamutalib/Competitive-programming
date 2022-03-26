#include<stdio.h>
int main()
{
    int h,l;
    double a;
    scanf("%d%d",&h,&l);
    a=(((double)l*(double)l)-((double)h*(double)h))/(2.0*(double)h);

    printf("%.13lf",a);
}