/*#include<stdio.h>

main()

{
    int x, y;
    double power(int , int );
    printf("Enter x  and y\n");
    scanf("%d %d", &x, &y);
    printf("%f", power(x, y));
}

double power(int x, int y)
{
    double p;
    p = 1.0;
    if(y >=0)
        while(y--)
        p*=x;
    else
        while(y++)
        p/=x;
    return p;
}*/
/*#include<stdio.h>

int fibonacci(int n)
{
    if(n == 0) return 0;
    if(n == 1) return 1;
    int ask1, ask2, answer;

    ask1 = fibonacci(n - 1);
    ask2 = fibonacci (n - 2);

    answer = ask1 + ask2;

    return answer;

}
int main()
{
   int x;
   scanf("%d", &x);
   printf("%d", fibonacci(x));
}*/
#include<stdio.h>

void star(int n)
{
    if(n == 1)
        return 1;
    int i;
     star(n - 1);
    for(i =1 ; i <= n; i++){
        printf("*\n");
    }
}
void main()
{
    int x;
    scanf("%d", &x);
    star(x);
}

