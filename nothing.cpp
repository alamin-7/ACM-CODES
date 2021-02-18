#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T, i, j, n, t, k, f;
    scanf("%d", &T);
    for(i = 1; i <= T; i++){
        scanf("%d %d", &n, &f);
      for(t = 1; t <= f; t++){
        for(j = 1; j <= n; j++){
            for(k = 1; k <= j; k++){
                printf("%d", j);
            }
            printf("\n");
        }
        for(j = n-1; j > 0; j--){
            for(k = 1; k <= j; k++){
                printf("%d", j);
            }
            printf("\n");
        }
        printf("\n");
      }
    }
    return 0;
}
