#include<stdio.h>
int main()
{
    /*int i;

    for(i = 33; i <= 256; i++){

        printf("ASCII code for %c is %d\n", i, i);
    }*/
   /* char s_l, c_l;
    printf("enter a small letter:");

    s_l = getchar();
    c_l = s_l - 32;

    printf("%c\n", c_l);
    return 0;*/

    char c1 = 'A', c2 =  'B';
    int n1 = 100, n2 = 100000;

    printf("%c %c\n", c1, c2);
    printf("%p %p\n", &c1, &c2);

    printf("%d %d\n", n1, n2);
    printf("%p %p\n", &n1, &n2);
}

