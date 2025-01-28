#include<stdio.h>
#include<string.h>

int main()
{
    char s1[100000], s2[1000];
    int T, q, i, count, j, k;

    scanf("%d", &T);

    for(i = 1; i <= T; i++){
        scanf("%s", s1);
        scanf("%d", &q);
        for(k = 1; k<= q; k++){
            scanf("%s", s2);
            count = 0;
            for(j = 0; s2[j] != '\0'; j++){
                if(s1[j]== s2[j])
                    count++;
            }
            if(count == j)
                printf("y\n");
            else
                printf("n\n");
        }
    }
    return 0;
}
