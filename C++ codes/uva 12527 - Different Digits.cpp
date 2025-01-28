#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, i, j, k, rem, count, w_count, ara[1000], flag, num, d_count[1000], x, e, f, g, h, p, l, m, n, o;

    while(scanf("%d %d", &a, &b) == 2){
            count = 0;
            flag = 0;
        for(i = a ; i <= b ;i++){
            if(i >= 1 && i <= 9){
                count++;n
            }
            else{
                    num = i;
                    j = 0;
                    w_count = 0;

            for(x = 0; x < 10; x++){
                d_count[x] = 0;
            }

            while(num != 0){
                w_count++;

                rem = num % 10;
                ara[j] = rem;
                if(ara[j] == 0){
                    d_count[0]++;
                }
                 if(ara[j] == 1){
                    d_count[1]++;
                }
                 if(ara[j] == 2){
                    d_count[2]++;
                }
                 if(ara[j] == 3){
                    d_count[3]++;
                }
                 if(ara[j] == 4){
                    d_count[4]++;
                }
                 if(ara[j] == 5){
                    d_count[5]++;
                }
                 if(ara[j] == 6){
                   d_count[6]++;
                }
                 if(ara[j] == 7){
                   d_count[7]++;
                }
                 if(ara[j] == 8){
                   d_count[8]++;
                }
                 if(ara[j] == 9){
                   d_count[9]++;
                }
                num = num / 10;

                 j++;
                  e = d_count[0];
                  f = d_count[1];
                  g = d_count[2];
                  h = d_count[3];
                  p = d_count[4];
                  o = d_count[5];
                  k = d_count[6];
                  l = d_count[7];
                  m = d_count[8];
                  n = d_count[9];
               }
                if(e <=1 && f <=1 && g <=1 && h <=1 && p<=1 && o <=1 && k <=1 && l <=1 && m <=1 && n <=1) {
                    flag = 1;
                }

               else
                flag = 0;
            }
            if(flag == 1){
                count++;
            }

        }
        printf("%d\n", count);
    }
    return 0;
}
