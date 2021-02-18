#include<stdio.h>
int main()

{
    long long int a, b;

   while(scanf("%lld %lld", &a, &b) == 2){
      if(a == 0 && b == 0){
        printf("NO\n");
      }

       else if(a == b){
            printf("YES\n");
        }
       else if(a > b){
                if((a - b) == 1){
                   printf("YES\n");
                }
                else{
                    printf("NO\n");
                }
        }
      else if(b > a){
                if((b - a) == 1){

              printf("YES\n");
                }
                else{
                    printf("NO\n");
                }
        }
   }
   return 0;
}
