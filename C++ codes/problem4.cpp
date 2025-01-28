#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, i, j, cnt1, cnt2;

    scanf("%d", &t);

    for(i = 1; i <= t; i++){
        scanf("%d", &n);
        int ara[n];
        cnt2 = 1;

        for(j = 0; j < n; j++){
            scanf("%d", &ara[j]);
        }
          if(n  == 1){
            printf("Case %d: 1\n", i);
          }
          else{

        sort(ara, ara + n);

        for(j = 0; j < n - 1; j++){

            if(ara[j] == ara[j + 1]){
                cnt2++;
            }
        }
        if(cnt2 > 1)
            printf("Case %d: %d\n",i, cnt2);

        else
            printf("Case %d: 1\n", i);
        }
    }
    return 0;
}
