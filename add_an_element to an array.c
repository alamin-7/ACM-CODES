
#include<stdio.h>

int main()
{
    int n, i, a[100], p;
    scanf("%d", &n);
    scanf("%d", &p);

    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    for(i = n-1; i > 0; i--){

       a[i + 1] = a[i];
       if(i == p){
        a[i] = 10;
        break;
       }
    }
    for(i = 0; i <= n; i++){
    printf("%d ", a[i]);
    }
}
