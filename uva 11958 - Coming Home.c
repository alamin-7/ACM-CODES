#include<stdio.h>
int main()
{
    int t, i, h1, m1,h2, m2, k, time, t_spend, min, ans, j;

    scanf("%d", &t);

    for(i = 1; i <= t; i++){
            min = 1000;
        scanf("%d", &k);
        scanf("%d:%d", &h1, &m1);

        for(j = 1; j <= k; j++){
            scanf("%d:%d %d", &h2, &m2, &t_spend);

            if(h2 >= h1 && m1 >= m2){
                time = ((h2 - h1) * 60 ) - (m1 - m2) + t_spend;
            }
            else if(h1 >= h2  && m1 <= m2){
                time = (((24 - h1) + h2) * 60) + (m2 -m1) + t_spend;
            }
            else if(h1 >= h2 && m1 >= m2){
                time = (((24 - h1)+ h2) * 60) - (m1 - m2) + t_spend;
            }
            else if(h2 >= h1 && m1 <= m2){
                time = ((h2 - h1) * 60) + (m2 - m1) + t_spend;
            }
            else if(h2 >= h1 && m2 >= m1) {

            time = (h2 - h1) * 60 + (m2 - m1) + t_spend;
            }
              if(time < min){
                min = time;
                ans = min;
              }

        }
        printf("Case %d: %d\n", i, ans);
    }
  return 0;
}
