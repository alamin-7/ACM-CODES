#include<stdio.h>

int main()
{
    int a[1000], n, i, j, k, b[1000], cnt, count = 0, c[1000];
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n; i++){
        b[i] = a[i];
    }
    for(k = 0; k < n ;k++){
            cnt = 0;
        for(i = k; i <= n -1; i++){
            a[i -1] = a[i];
        }
        for(i = 0, j = n - 2; i < n - 1, j >= 0; i++, j--){
            c[j] = a[i];
        }
        for(i = 0; i < n - 1; i++){
            if(a[i] = c[i]){
                cnt++;
            }
    }
    if(cnt == n -1){
        break;
        }
        for(i = 0; i < n; i++){
        a[i] = b[i];
       }
   }

   printf("%d", );
}
