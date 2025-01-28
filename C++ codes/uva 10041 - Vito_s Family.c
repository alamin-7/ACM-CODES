
#include<bits/stdc++.h>

using namespace std;

int main()
{
     int n, i, t, a[50], sum, j, ans;

    scanf("%d", &t);

    for(i = 1; i <= t; i++){
            sum = 0;

        scanf("%d", &n);
        for(j = 0; j < n; j++){
            scanf("%d", &a[j]);
        }
        sort (a, a + n);

        for(j = n - 1; j > 0; j--){

            sum = sum + (a[j ] - a[j - 1]);
        }
       printf("%d\n", sum);
    }
    return 0;
}
