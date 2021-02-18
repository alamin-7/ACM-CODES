#include<stdio.h>
#include<string.h>

int main()
{
    char n[10000];
    int i, count, sum, b;

    while(gets(n)){
            if(strcmp(n, "0") == 0)
            break;
            sum = 0;
            count = 1;
        for(i = 0; n[i] != '\0'; i++){
            sum = sum + n[i]-48;
        }
    if(sum % 9 != 0)
        printf("%s is not a multiple of 9.\n", n);

    else{
        while(sum > 9){
            count++;
            b = 0;
            while(sum > 0){
                b = b + sum % 10;
                sum = sum / 10;
              }
            sum = b;
          }
        printf("%s is a multiple of 9 and has 9-degree %d.\n", n, count);
      }

    }
    return 0;

}
