#include<stdio.h>

    int main()
    {
        int b, a, x;
        scanf("%d %d", &a, &b);
        x = function(a,b);
        printf("%d", x);
        return 0;
    }

    int function(int a, int b){
        int mul = 0, i;
       for(i= 1; i <= b; i++)

            mul= mul + a;

        return mul;
    }

