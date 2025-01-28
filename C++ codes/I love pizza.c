#include<stdio.h>
#include<string.h>

int main()

{
    int m , a, r, i, t, test, j, count, length, k;
    char s[6000];

    scanf("%d", &test);

    for(k = 1; k <= test; k++){
        count = 0;
        m = 0, a = 0, r = 0, i = 0, t = 0;
        scanf("%s", s);
        length = strlen(s);

        for(j = 0; j <= length; j++){
            if(s[j] == 'M') {
                    m++;
            }
            else if(s[j] == 'A'){
                    a++;
            }

            else if(s[j] == 'R') {
                    r++;
            }
            else if(s[j] == 'I') {
                    i++;}
            else if(s[j] == 'T'){
                    t++;
            }
        }
        while(1){

        if(m >= 1 && a >= 3 && r >= 2 && i >= 1 && t >= 1){
            count++;

            m = m - 1;
            a = a - 3;
            r = r - 2;
            i = i - 1;
            t = t - 1;
        }
        else{
            break;
        }
     }
    printf("%d\n", count);
    }
    return 0;
}
