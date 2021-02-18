#include<stdio.h>
#include<math.h>
int main()

{
    int a, b, i, j, count, ara[10000];
    while(scanf("%d", &a) != EOF){
            b = 0;
        for(i = 2; i <= a; i++){
                if(i == 2 || i == 3 || i == 5){
                    ara[b] = i;
                    b++;
                }
              else if(i % 2 != 0 && i % 3 != 0 && i % 5 != 0){
               ara[b] = i;
               b++;
             }
        }
        for(i = 0; i < b; i++){
            printf("%d\n", ara[i]);
        }
        max_sum = 0;
        for(i = 0, k = 0; i < b; i++){
            sum = ara[k] + ara[i];
            if(sum == a){
                if(max_sum < sum)
                    c = ara[k], d = ara[i + 1];
            }
            k++;
        }

    }
}
