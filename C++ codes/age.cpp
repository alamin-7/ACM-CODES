#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, i, j, temp, s = 0;

     while(scanf("%lld", &n) == 1){
            if(n == 0) break;

       long long int a[n];

        for(i = 0; i < n; i++){

            scanf("%lld", &a[i]);
        }
        sort(a, a+ n);

        for(i = 0; i < n; i++){

        printf("%lld", a[i]);
        if(i != (n - 1)){
            printf(" ");
        }
        else{
            printf("\n");
          }
        }
     }

    return 0;
}

