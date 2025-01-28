#include<stdio.h>
#include<math.h>

int main()
{
    char s[100000];
    int i, j, len, digit;

    while(gets(s)){
        len = strlen(s);

        for(i = len ; i >= 0; i--){
            digit = (int)(s[i]);
            printf("%d\n", digit);
        }
    }
}
/*#include <stdio.h>

#include <string.h>

main()

{

char num[50];

int  i, len;

int result=0;

printf("Enter a number: ");

gets(num);

len = strlen(num);

for(i=0; i<len; i++){

result = result * 10 + ( num[i] - '0' );

}

printf("%d", result);

}*/
