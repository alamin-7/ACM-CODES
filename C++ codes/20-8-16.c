/*#include<stdio.h>

int main()
{
   long long int a[5], i, sum = 0;

    for(i = 0; i < 5; i++){

        scanf("%lld", &a[i]);

        sum = sum + a[i];
    }

     printf("%lld\n", sum);
}*/

/*#include<stdio.h>

int MIN(int a, int b)
{
    if(a < b){
        return a;
    }
    else
        return b;
}

int MAX(int a, int b)
{
    if(a > b){
        return a;
    }
    else
        return b;
}

int main()
{
    int a[5], i, max = -100000, min =  100000;

    for(i = 0; i < 5; i++){
        scanf("%d", &a[i]);
    }

    for(i = 0; i < 5; i++){

        if(a[i] > max){
            max = a[i];
          }
        }

        for(i = 0; i < 5; i++){
        if(a[i] < min){
            min = a[i];
        }
    }
    printf("%d %d", max, min);
}*/
#include<stdio.h>

int main()

{
    int n;
    scanf("%d", &n);
    int fibo[n], i;

    fibo[0] = 0, fibo[1] = 1;

    for(i = 2; i < n; i++){

        fibo[i] = fibo[i -1] + fibo[i -2];
    }

    for(i =0 ; i < n; i++){
        printf("%d\n", fibo[i]);
    }
}

