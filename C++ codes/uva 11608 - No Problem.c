#include<stdio.h>

int main()
{
    int s, t, i, a1[15], a2[15];
    t = 1;

    while(scanf("%d", &s) == 1 && s >= 0){

         a1[0] = s;

        for(i = 1; i  < 13; i++){
            scanf("%d", &a1[i]);
        }

        for(i = 0; i < 12 ; i++){
            scanf("%d", &a2[i]);
        }
        printf("Case %d:\n", t++);

        for(i = 0; i < 12 ; i++){

        if( s >= a2[i] ){
            s -= a2[i];
            printf("No problem! :D\n");
        }
        else
            printf("No problem. :(\n");
             s += a1[i + 1];
    }
  }
 return 0;
}


