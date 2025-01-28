/*#include<stdio.h>

int fact(int n)
{
    if(n == 0)
        return 1;
    else
        return (n * fact(n - 1));
}
int main()
{
    int x, m;
    scanf("%d", &m);
    x = fact(m);
    printf("%d", x);
    return 0;
}*/
  /// sumation

/*#include<stdio.h>

int sum(int n)
{
    if(n <=1)
        return 1;
    else
        return (n + sum(n - 1));
}
int main()
{
    int x, s;
    scanf("%d", &x);
    s = sum (x);
    printf("%d", s);
    return 0;
}*/
 /// fibonacci

#include<stdio.h>

int fibo(int n)
{
    int i;
    if(n == 1 || n == 2)
        return 1;
    else
        return (fibo(n - 1) + fibo(n - 2));
}
int main()

{
    int s, term;
    scanf("%d", &term);
    s = fibo(term);
    printf("%d", s);
    return 0;
}
