
/// delete an elementof an array

#include<stdio.h>

int main()
{
    int i, n, p, a[100];

    scanf("%d", &n);
    scanf("%d", &p);

    for(i = 0; i < n; i++){

        scanf("%d", &a[i]);
    }

    for(i =  p; i <= n - 1; i++){

        a[i -1] = a[i];
    }

    for(i = 0; i < n - 1; i++){
        printf("%d ", a[i]);
    }
    return 0;
}
