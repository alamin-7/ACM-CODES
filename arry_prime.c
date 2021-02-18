#include<stdio.h>
#include<math.h>
int main()
{
    int a[101], i, k, x, count;

    for(i = 2; i <= 101; i++){
        a[i] = i;
    }
    for(i = 2; i <= 101; i++){
              x = sqrt(i);
              count = 0;
    for(k = 2; k <= x; k++){
        if(i % k == 0){
            count++;
          }
       }
       if(count == 0){
        printf("%d\n", i);
       }

    }
    return 0;
}
