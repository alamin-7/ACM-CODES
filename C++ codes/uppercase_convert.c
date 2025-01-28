/// convert into uppercase.

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

