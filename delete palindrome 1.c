#include<stdio.h>

int main()
{
    int a[1000], b[1000], n, i, j, c[1000], count;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
        b[i] = a[i];
    }
    for(j = 0; j < n; j++){
        count = 0;
        for(i = 0; i < n; i++){
            if(a[j] == a[i]){
                count++;
            }
            c[j] = count;
            printf("%d", count);
        }

    }
}
