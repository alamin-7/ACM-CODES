#include<stdio.h>

int main()

{
    int year;

    while (scanf("%d",&year)!=EOF){

        if((year%4==0) && ((year%100!=0) || (year%400==0))) && (year%15==0) && (year%55==0){

            printf("This is leap year.\nThis is huluculu festival year.\nThis is bulukulu festival year.");
        }

       else if((year%4==0) && (year%100!=0) || (year%400==0)) && (year%15==0) && (year%55!=0){

            printf("This is leap year.\nThis is hukuculu festival year.");
        }
        else if((year%4==0) && (year%100!=0) ||(year%400==0)) && (year%15!==0) && (year%55==0){

            printf("This is leap year.\nThis is bulukulu festival year.");
        }
        else if((year%4==0) && (year%10!=0) || (year%400==0)){

            printf("This is leap year.");
        }
        else
            printf("This is an ordinary year.");
    }
    return 0;
}
