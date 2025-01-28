
/// string addition.

#include <stdio.h>
#include<string.h>

int main()
{
   char s1[1000], s2[1000];
   int len1, len2, i, carry = 0, k = 0, sum, digit[10000], j, a, b;

   printf("Enter two large numbers(string)\n");
   scanf("%s %s", s1, s2);

   len1 = strlen(s1);
   len2 = strlen(s2);

     for(i = len1-1, j = len2-1; i >= 0 , j >= 0; i--, j--){
            a = s1[i] - '0';
            b = s2[j] - '0';

            if(i <0){
              a = 0;
             }

             if(j < 0){
              b = 0;
             }

        sum = a + b + carry;

        if(sum >= 10){
            carry = 1;
            digit[k] = sum % 10;
        }
        else{
            carry = 0;
            digit[k] = sum;
        }
        k++;

     }

     for(i = k - 1; i >= 0; i--){
        printf("%d",digit[i]);
     }
}
