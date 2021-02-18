#include<stdio.h>
int main()
{
    int n, i, l[1000], w[1000], h[1000], max_area, area1, max_h;
    while(scanf("%d", &n) == 1 && n != 0){
            max_area = 0;
            max_h = 0;
        for(i = 0; i < n; i++){
            scanf("%d %d %d", &l[i], &w[i], &h[i]);
        }
        for(i = 0; i < n ; i++){
            if(h[i] > max_h){
                    max_h = h[i];
                area1 = l[i] * w[i] * h[i];
                 max_area = area1;
            }
            else if(h[i] == max_h){
                   area1 = l[i] * w[i] * h[i];
                if(area1 >= max_area){
                    max_area = area1;
                }
            }
        }
        printf("%d\n", max_area);
    }
    return 0;
}
