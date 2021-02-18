#include<stdio.h>
int main()
{
    int n, i, j, a[1000], b[1000], cnt, temp;

    scanf("%d", &n);
    for(i = 0; i < n; i++){

        scanf("%d", &a[i]);
    }

    for(i = 0, j = n - 1; i < n, j >= 0;i++, j-- ){
        b[j] = a[i];
    }
    cnt = 0;
    for(i = 0, j = 0; i  < n, j < n; i++, j++){
        if(a[i] = b[j]){
            cnt++;
        }
    }
        if(cnt == n){
            printf("palindrome");
        }
        else
            printf("not palindrome");
}




