#include<bits/stdc++.h>
using namespace std;

int main()
{
    struct player{
        char name[1000];
        int a;
        int d;
    };
    int i, j, T, c;
    scanf("%d", &T);

    for(c = 1; c <= T; c++){

    struct player b[10], temp;

    for(i = 0; i < 10; i++){
        scanf("%s", b[i].name);
        scanf("%d", &b[i].a);
        scanf("%d", &b[i].d);
      }
      for(i = 0; i < 10-1; i++){
        for(j = i + 1; j < 10; j++){
                if(b[i].a < b[j].a){
            temp = b[i];
            b[i] = b[j];
            b[j] = temp;
                }

              else if(b[i].a == b[j].a){
                    if(b[i].d > b[j].d){
                        temp = b[i];
                        b[i] = b[j];
                        b[j] = temp;
                    }
                    else if(b[i].d == b[j].d){
                        if(strcmp(b[i].name , b[j].name) > 0){

                            temp = b[i];
                            b[i] = b[j];
                            b[j] = temp;
                        }
                    }
                }
             }
          }
      for(i = 0; i < 4; i ++){
            for(j = i + 1; j < 5; j++){
        if(strcmp(b[i].name, b[j].name) > 0){
            temp = b[i];
            b[i] = b[j];
            b[j] = temp;
               }
            }
      }
       for(i = 5; i < 9; i ++){
            for(j = i + 1; j < 10; j++){
        if(strcmp(b[i].name, b[j].name) > 0){
            temp = b[i];
            b[i] = b[j];
            b[j] = temp;
               }
            }
      }
      printf("Case %d:\n", c);
      printf("(");

      for(i = 0; i < 5; i++){
          if(i != 4){
        printf("%s, ", b[i].name);
          }
          else if(i == 4)
            printf("%s)\n", b[i].name);
      }
      printf("(");
      for(i = 5; i < 10; i++){
               if(i != 9){
        printf("%s, ", b[i].name);
          }

      else if(i == 9)
            printf("%s)\n", b[i].name);

      }


    }
    return 0;
}

#include <stdio.h>
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
 }
