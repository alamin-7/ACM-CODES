
/// array reverse giving the range

#include<stdio.h>

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
}
