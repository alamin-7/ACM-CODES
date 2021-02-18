#include<stdio.h>

int main()
{
    int start, end, mid, key, n, i;

    int a[1000];
    scanf("%d", &n);
    scanf("%d", &key);

    for(i = 1; i < n; i++){

        scanf("%d",&a[i]);
    }
    start = 0;
    end = (n - 1);


    do{
         mid = (int) ((start + end)/2);
        if(a[mid] == key){
            printf("Found the number!\n");
            break;
        }

        else if(a[mid] > key){

        end = mid - 1;
    }

    else {
        start = mid + 1;
      }
    }

   while(start <= end);
   if(start > end)
        printf("Not found");
    return 0;
}
