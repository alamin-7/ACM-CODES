#include<stdio.h>

int main()
{
    int t, n, i, j, x, y, c = 0;

    scanf("%d", &t);
    int a[t];
    for(i = 0; i < t; i++){

        scanf("%d", &a[i]);
         x = 0, y = a[i];
       if(i >=1 && (a[i] != a[i -1])){
       c = 0;
       }
       if(i >= 1 && a[i] == a[i-1]){
            c++;
            x +=c, y-=c;
       }
    printf("%d %d\n", x, y);
    }
}
