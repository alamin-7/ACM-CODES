#include<stdio.h>
#include<math.h>

int main()
{
    int a[31], i, x, j;
    for(i = 1; i <= 30; i++){
        a[i] = i;
    }
    x = sqrt(30);
    for(j = 2; j <= x; j++){
        for(i = 1; i <= 30; i++){
            if(a[i]% j == 0){
                    if(a[i] / j == 1){
                        a[i] = i;
                    }
                    else{
                     a[i] = 0;
                    }
            }
            else{
                a[i] = i;
            }
        }
    }
    for(i = 1; i <= 30 ;i++){
        printf("%d ", a[i]);
    }
}
