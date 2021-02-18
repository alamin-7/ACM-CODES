#include<stdio.h>
int main()
{
    int i, j, n, T, count;
    char s[5000];
    scanf("%d", &T);

    for(i = 1; i <= T; i++){
        scanf("%d", &n);
        count = 0;

        for(j = 0; j < n; j++){
            scanf(" %c", &s[j]);
        }
        for(j = 0; j < n; j++){
            if(s[j] == 'L' || s[j] == 'D'){
                count++;
            }
            else if(s[j] == 'W'){
                count = 0;
            }
            if(count == 3){
                break;
            }
        }
        if(count == 3)
            printf("Case %d: %d\n", i, j+1);
        else
            printf("Case %d: Yay! Mighty Rafa persists!\n", i);
    }
    return 0;
}


