#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, m, a1[100000], a2[100000], i, j, sum, flag, temp;

    while(scanf("%lld %lld", &n, &m) == 2 && n != 0 && m != 0){

            sum = 0;
            flag = 0;

       for(i = 0; i < n; i++){
        scanf("%lld", &a1[i]);
       }
       for(i = 0; i < m; i++){
           scanf("%lld", &a2[i]);
       }
       if(n > m)
        printf("Loowater is doomed!\n");

       else{
        sort(a1, a1 + n);
        sort(a2, a2 + m);

        temp = 0;

        for(i = 0; i < n; i++){
            for(j = temp ; j < m; j++){
                if(a1[i] <= a2[j]){
                    sum = sum + a2[j];
                    flag = 1;
                    temp = j+1;
                    break;
                }
                else if(a1[i] > a2[j]){
                    flag = 0;
                }
            }

            if(flag == 1){

             if(temp >= m && i < n-1){
                   flag = 0;
                   break;
                }
            }
            else if(flag == 0){
                break;
            }
         }
         if(flag == 0){
            printf("Loowater is doomed!\n");
         }
          else{
              printf("%lld\n", sum);
            }
       }
    }

    return 0;
}
