#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int i, j, n, a1[50000], a2[50000], count;

    while(scanf("%lld", &n) == 1 && n != 0){
            count= 0;

        for(i = 0; i < n; i++){
            scanf("%lld %lld", &a1[i], &a2[i]);
        }
        sort(a1, a1 + n);
        sort(a2, a2 + n);

        for(i = 0; i < n ; i++){
            for(j = i; j <= i; j++){
                if(a1[i] == a2[j]){
                    count++;
                }
                else{
                        count = 0;
                    break;
                }
            }
            if(count == 0) break;
        }

        if(count == n){
            printf("YES\n");
        }
        else
            printf("NO\n");
    }

    return 0;
}
