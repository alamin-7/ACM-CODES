
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, i, mx, c, cnt[100000], k, d;
    while(scanf("%d %d", &a, &b)== 2 && a > 0 && b > 0){
            k = 1;
            mx = 0;

            printf("%d %d ", a, b);

            if(a > b){
                d = a;
                a = b;
                b = d;
            }

        for(i = a; i <= b; i++){
                c = i;
                cnt[k] = 0;

            while(1){
                    cnt[k]++;
        if(c == 1)
            break;

                if(c % 2 == 0){
                    c = c / 2;
                }
                else{
                    c = c * 3 + 1;
                }
            }
            if(cnt[k] > mx){
                mx = cnt[k];

            }
            ++k;
        }
               printf("%d\n", mx);
    }
    return 0;
}

