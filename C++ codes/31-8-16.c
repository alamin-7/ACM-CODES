/*#include<stdio.h>

int main()
{
    int n, i, a[100], p;
    scanf("%d", &n);
    scanf("%d", &p);

    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    for(i = n-1; i > 0; i--){

       a[i + 1] = a[i];
       if(i == p){
        a[i] = 10;
        break;
       }
    }
    for(i = 0; i <= n; i++){
    printf("%d ", a[i]);
    }
}*/

/*#include<stdio.h>

int main()
{
    int i, n, p, a[100];

    scanf("%d", &n);
    scanf("%d", &p);

    for(i = 0; i < n; i++){

        scanf("%d", &a[i]);
    }

    for(i =  p; i <= n - 1; i++){

        a[i -1] = a[i];
    }

    for(i = 0; i < n - 1; i++){
        printf("%d ", a[i]);
    }
}*/

////reverse array

/*#include<stdio.h>

int main()
{
    int i, j, a[1000], n, temp;

    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    for(i = 0 ; i < n; i++){
        printf("%d ", a[i]);
    }
    for(i = 0; i  < n ;i++){
        for(j = n - (i + 1); j == (n -(i + 1)); j--){
                a[j] = a[i];
        }

    }
    for(i = 0; i < n; i++){
            a[i] = a[j];
        printf("%d ", a[i]);
    }
}*/

#include<stdio.h>

int main()
{
    int i, n, a[100], shift;

    scanf("%d", &n);
    scanf("%d", &shift);
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

}
