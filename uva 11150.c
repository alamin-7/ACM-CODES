#include<stdio.h>

int main()

{
int a,n;

while(scanf("%d",&n)==1)
{
a=n;
while(n>=2)
{
a=a+(n/2);
n=(n/2)+(n%2);
}
if(n==2)
{
a++;
}
printf("%d\n",a);
}
return 0;
}
