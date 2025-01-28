///shift element of an array

#include<stdio.h>

int main()
{
    int i, n, a[100], shift, j, temp, x, y;

    scanf("%d", &n);
    scanf("%d", &shift);
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for(j = 1; j <= shift; j++){
      temp = a[n-1];
        for(i = n - 1; i > 0; i--){

         a[i] = a[i-1];
        }
           a[0] = temp;
    }
        for(i = 0; i < n ; i++){
        printf("%d ", a[i]);
    }
    return 0;
}
