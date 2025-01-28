#include<stdio.h>

int main()

{
    int n, i, j, count;
    while(scanf("%d", &n) == 1){
        count = 0;
        for(i = 1; ; i++){
            for(j = 1; j <= i; j++){
                count++;
                if(count == n){
                break;
            }
           }
            if(count == n){
                break;
            }
        }
        printf("%d\n", j);
    }

    return 0;
}
