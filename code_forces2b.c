#include<stdio.h>

int main()

{
    int n, l, a1[10000], a2[10000], count, i, temp;

    while(scanf("%d %d", &n, &l) == 2){
            count = 0;
        for(i = 0; i < n ;i++){
            scanf("%d", &a1[i]);
        }
        for(i = 0; i < n; i++){
            scanf("%d", &a2[i]);
        }
        temp = a1[0]-a2[0];
        for(i = 1; i < n; i++){
            if(a1[i] >= a2[i]){
                if(a1[i] - a2[i] == temp){
                    count++;
                }
            }
            else{
                if(a1[i] - a2[i] == temp){
                    count++;
                }
            }
        }
        if(count == n-1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}
