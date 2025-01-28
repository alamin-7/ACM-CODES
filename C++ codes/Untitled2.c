#include<stdio.h>
int main()
{
    int a=1,b=1,c=10;
    do
    {
        printf("%d\n",a);
        a+=b;
        c++;
    }
    while(a>=c);
    printf("%d %d %d\n",a,b,c);
}
