#include<stdio.h>
int main()
{
    int t,v,s;
    while(scanf("%d%df",&t,&v)!=EOF)
        if(-100<=v&&v<100 && 0<=t&&t<=200)
    {
        s=(2*t)*v;
        printf("%d\n",s);
    }
    return 0;
}
