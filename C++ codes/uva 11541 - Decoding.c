#include<stdio.h>
#include<string.h>

int main()
{
    int c, l, i, w = 1;
    char a[10000];

    while(gets(a)){
            c = 0;
      l = strlen(a);
      for(i = 0; i < l; i++){
      if((a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= 'a' && a[i]  <= 'z')){
        if(w){
            c++;
            w = 0;
        }
      }

       else
            w = 1;
      }
      printf("%d\n", c);
    }
    return 0;
}
