/*#include<stdio.h>

int fibo(int n)
{
if(n == 0) return 0;
if(n == 1) return 1;

    int ask1, ask2, answer;
    ask1 = fibo(n -1);
    ask2 = fibo(n -2);
    answer = ask1 + ask2;
    return answer;
}
int main()
{
   int n, b, answer;
   scanf("%d", &n);
   b = fibo(n);

   printf("%d", b);
}*/

#include<stdio.h>

int cola(int n){
    int b;
    if(n == 1 || n == 0)
        return 1;


    return (cola(b+ n));
}

int main()
{
    int a, b;
    scanf("%d", &a);
    b = cola (a);

    printf("%d", b);
}
