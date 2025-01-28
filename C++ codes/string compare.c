
#include<stdio.h>

int string_compare(char s1[], char s2[])
{
  int i, j;
   for(i = 0; s1[i] != '\0' && s2[i] != '\0'; i++) {
      if(s1[i] < s2[i]) {
        return -1;
       }
       if(s1[i] > s2[i]) {
        return 1;
       }
 }
    / if(string_length(s1) == string_length(s2)) {
        return 0;
      }
      if(string_length(s1) < string_length(s2)) {
        return -1;
  }
   if(string_length(s1) > string_length(s2)) {
        return 1;
       }
  }
int string_length(char s1[], char s2[])
     {
      int i, length1, length2;

      for(i = 0; s1[i] != '\0'; i++){
        length1++;
      }
      return length1;

      for(i = 0; s2[i] != '\0'; i++){
        length2++;
      }
      return length2;

  }
 int main()
{
    int x;
    char s1[100];
    char s2[100];

    scanf("%s %s", s1, s2);

   x =  string_compare(s1,s2);
   if(x == 1){
    printf("Two string are same.\n");
   }
   else if(x > 0){
    printf("first string is big.\n");
   }
   else
    printf("second string is big.\n");

}
