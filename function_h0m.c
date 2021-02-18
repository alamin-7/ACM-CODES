/*#include<stdio.h>
void sum_of_all(void)
{
    int n, sum;
    sum  = 0;
    for(n = 0; n <= 100; n++)
        sum = sum + n;
    printf("%d", sum);
    getch();
}
void main(void)
{
   // clrscr();
    sum_of_all();
}*/
/*#include<stdio.h>
#include<conio.h>

void square_num(void)
{
    int i, num;
    printf("\n\nnumber square\n");
    for(num = 1; num <= 10; num++)
        printf("%3d %3d\n", num , num * num);
}
void cube_num(void)
{
    int i, num;
    printf("\n\nnumber cube\n");
    for(num = 1; num <= 10; num++)
        printf("%3d %4d\n", num, num* num* num);
}
void main(void)
{

printf("\n\n press any key to see square number from 1 to 10");
getch();
square_num();
printf("\n\n press any key to see CUBE number from 1 to 10");
getch();
cube_num();
getch();
}*/
/*#include<stdio.h>
#include<conio.h>

void square_value(long int any_value)
{
    long int result;
    result = any_value * any_value;

    printf("%ld\n", result);
}
void main(void)
{
    square_value(5);
    getch();
}*/
/*#include<stdio.h>
#include<conio.h>

float change_data(int r, int n, int s)
{
    int result;
    result = r + n + s;
    return result;
}

void main(void)
{
    float result;

    result = change_data(15, 12 , 11);
    printf("%f", result);
    getch();
}*/

/*#include<stdio.h>
#include<conio.h>

int abs_val(int val)
{
    return ( val);
    return (-val);
}
void main(void)
{
    int val, get;

    scanf("%d", &val);
    get = abs_val(val);
    printf("%d", get);
    getch();
}*/

#include<stdio.h>

int minimum(int a, int b)
{
    int temp;
    if(a < b){
        temp = a;
    }
    else{
        temp = b;
    }

    return temp;
}

int main()
{
    int a, b, c, t1, t2;
    scanf("%d %d %d", &a, &b, &c);
    t1 = minimum(a, b);
    t2 = minimum(t1, c);
    printf("%d", t2);
}

/*#include<stdio.h>

int square(int x)
{
    int y;
    y = x * x;
    return y;
}
int main()
{
    int a, sq;
    scanf("%d", &a);
    sq = square(a);
    printf("%d",  sq);
}*/
