#include<bits/stdc++.h>

using namespace std;

int main()

{
    long long int n, w, t, i, j, c, sum;

    scanf("%lld", &t);

    for(i = 1; i <= t; i++){
            sum = 0;
            c = 0;

        scanf("%lld %lld", &n, &w);

        long long int a[n];

      for(j = 0; j < n; j++){
        scanf("%lld", &a[j]);
      }

      sort(a, a + n);

      for(j = 0; j < n; j++){

        sum  = sum + a[j];

        if(sum < w){
            c++;
        }
        else
        {
            break;
        }
      }

      printf("%lld\n", c);
    }

    return 0;
}
