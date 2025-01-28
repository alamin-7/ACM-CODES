
///reverse array

#include<stdio.h>

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
}
