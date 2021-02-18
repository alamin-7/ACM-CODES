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

/// delete an elementof an array

#include<stdio.h>

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
}

///reverse array

/*#include<stdio.h>

int main()
{
    int i, j, a[1000], n, temp;

    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
      j = i - 1;
      i = 0;
      while(i < j){
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
      }

    for(i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
}*/


///shift element of an array

/*#include<stdio.h>

int main()
{
    int i, n, a[100], shift, j, temp, x, y;

    scanf("%d", &n);
    scanf("%d", &shift);
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for(j = 1; j <= shift; j++){
      temp = a[n-1];
        for(i = n - 1; i > 0; i--){

         a[i] = a[i-1];
        }
           a[0] = temp;
    }
        for(i = 0; i < n ; i++){
        printf("%d ", a[i]);
    }
    return 0;
}*/

/// array reverse giving the range

/*#include<stdio.h>

int main()

{
    int n, i, j, a[1000], start, end, temp;

    scanf("%d", &n);

    scanf("%d %d", &start, &end);

    for(i = 0; i < n; i++){

    scanf("%d", &a[i]);
    }
    j = end;
    i = start;

    while(i < j){
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
    for(i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
}*/





