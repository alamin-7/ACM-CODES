

/// Determine string length

/*#include<stdio.h>

int length(char str[])
{
    int i, l = 0;
    for(i = 0; str[i] != '\0'; i++){
        l++;
    }
    return l;
}

int main()
{
    int l, string_length ;
    char str[10000];
    gets(str);
    string_length = length(str);
    printf("%d", string_length);
}*/

/// add two string using a function.

/*#include<stdio.h>
#include<string.h>

 void add_two_string(char s1[],char s2[])
{
    int  i, j;

    i = strlen(s1);

    for(j = 0; s2[j] != '\0'; i++, j++){
        s1[i] = s2[j];
    }
    s1[i] = '\0';

}
int main()

{
    char s1[1000], s2[1000];
    scanf("%s %s", s1, s2);

    add_two_string(s1, s2);
    printf("%s\n", s1);
    return 0;
}*/





/// convert into uppercase.

 /*#include <stdio.h>
 #include <string.h>
 int main()
 {
 char s[1002], ch;
 int i, length, start;
 gets(s);
 length = strlen(s);
 start = 0;
 for (i = 0; i < length; i++) {
    if (s[i] >= 'a' && s[i] <= 'z') {
      if (start == 0) {
          start = 1;
          ch =   s[i] - 32;
          printf("%c", ch);
          }
   else {
    printf("%c", s[i]);
      }
     }
    else if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <='9')){

         if (start == 0) {
            start = 1;
         }
         printf("%c", s[i]);

    }
    else {
     if (start == 1) {
         start = 0;
         printf("%c", s[i]);
       }
    }
  }
   printf("\n");
   return 0;
}*/



/// word counting in a sentence.

/*#include<stdio.h>
#include<string.h>

int main()
{
    char a[1000];
    int i, count, c;

    while(gets(a)){
            count = 0;
            c = 1;
        for(i = 0; a[i] != '\0'; i++){
           if((a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= 'a' && a[i] <= 'z')){
                    if(c)
                        count++;
                        c = 0;
           }
           else
           c = 1;

        }
    printf("%d\n", count + 1);
    }
}*/

/*///  string palindrome.

#include<stdio.h>
#include<string.h>

int main()
{
    char str1[1000], str2[1000];
    int ln, i, j;

    while(scanf("%s", str1) != EOF){
    ln = strlen(str1);
    i = ln -1;
    j = 0;

    while(i >= 0){
        str2[j] = str1[i];
        j++;
        i--;
    }
    str2[j] = '\0';

    if(strcmp(str1,str2) == 0){
        printf("Palindrome\n");
    }
    else
        printf("Not palindrome\n");
    }

    return 0;
}*/




