#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, i, j, global_sum, current_sum, T = 0;
    while(scanf("%lld", &n) == 1){
        long long int a[n];

         for(i = 0; i < n; i++){
        scanf("%lld", &a[i]);
        }
    current_sum = 1, global_sum = 1;

    for(j = 0; j < n; j++){
        current_sum = current_sum * a[j];

        if(current_sum < 0){
            current_sum = 0;
        }

        if(current_sum > global_sum){
            global_sum = current_sum;
              }
         }

        printf("Case #%lld: The maximum product is %lld.\n", ++T, global_sum);
        printf("\n");
      }
    return 0;
}
