#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int i, n, q, t, j, b, x = 1, c;

    for(t = 1; t < 65; t++){

        scanf("%lld %lld", &n, &q);
        if(n == 0 && q == 0){
            break;
        }

       long long int a[n];
       long long int aq[q];

        for(i = 0; i < n; i++){

            scanf("%lld", &a[i]);
        }
        for(j = 0; j < q; j++){

            scanf("%lld", &aq[j]);
        }
        sort(a , a + n);

        for(j = 0; j < q; j++){
                b = 0;
                c = 0;
        for(i = 0; i < n; i++){
           if(t == x){
           printf("CASE# %lld:\n", t);
           x++;
           }
             if(a[i] == aq[j]){
              b = i;
              c++;
           printf("%lld found at %lld\n", aq[j], ++b);
           break;

           }
        }
        if(c == 0){
             printf("%lld not found\n", aq[j]);
        }
    }
    x = t + 1;
    }
    return 0;
}

