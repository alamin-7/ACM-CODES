#include<stdio.h>
int main()
{
    long long int n, m, a1[1000000], a2[1000000], count, i, j, temp;

    while(scanf("%lld %lld", &n, &m) == 2 ){

            if(n == 0 && m == 0) break;
            count = 0;
        for(i = 0; i < n ; i++){
            scanf("%lld", &a1[i]);
        }

          for(i = 0; i < m ; i++){
            scanf("%lld", &a2[i]);
        }

        temp = 0;

        for(i = 0; i  < n ; i++){
                for(j = temp; j < m ; j++){
                  if(a1[i] == a2[j]){
                    count++;
                    temp = j+1;
                     break;
                  }
                    if(a2[j] > a1[i]){
                        break;
                    }

                    if(a1[i] > a2[j]){

                        temp = j+1;
                    }
                }
            }

    printf("%lld\n", count);
    }

    return 0;
}
