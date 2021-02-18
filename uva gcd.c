#include<stdio.h>

int main()
{
    int i, j, sum = 0, n = 100;

    for(i = 1; i < n; i++){
        for(j = i + 1; j <= n; j++){
            sum = sum + j;
        }
    }
    printf("%d", sum);
}
