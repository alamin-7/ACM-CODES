#include<stdio.h>
/*int test_function(x);
int main()
    {
        int x,y,z;
        x = 10;
        y = 20;
        z = test_function(x);
        printf("%d %d %d", x,y,z);
        return 0;
    }
     int test_function(x)
    {
        int y = x;
        x = 2 * y;
        return (x * y);
    }*/

    /*double pi = 3.14;
    void my_fnc()
    {
        double pi = 3.1416;
    }
    int main()
    {
        printf("%.4lf\n", pi);
        my_fnc();
        printf("%.4lf\n", pi);
    }*/
   /* int find_min(int ara[], int n);

    int main()
    {
        int ara[] = {100, 0, -6, 9, 8, 6, 5, 3, 7777, 9};
        int n = 10;
        int minimum = find_min(ara, n);
        printf("%d", minimum);
    }
    int find_min(int ara[],int n)
    {
      int min = ara[0];
      int i;
      for(i = 1; i < n; i++){
        if(ara[i] < min){
            min = ara[i];
        }
      }
      return min;
    }*/

    double area(double r)
    {
        return (3.1416 * r * r);
    }
    int main()
    {
        double r = 3, x;

        x =  area(r);
        printf("%.4lf", x);
    }



