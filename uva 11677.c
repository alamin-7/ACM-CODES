#include<stdio.h>

int main()

{
    int h1, m1, h2, m2, minutes;

    while (scanf("%d %d %d %d", &h1, &m1, &h2, &m2) == 4){

        if(h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0)
            break;

        if(h1 == h2 && m1 > m2)

           minutes = 24 * 60 - (m1 - m2);

           else if(h1 == h2 && m1 < m2)
            minutes = m2 - m1;

      else if(h1 > h2 ){

              minutes = (23 - h1 + h2) * 60 +(60 - m1) + m2;

      }

      else if(h1 < h2){

            if(m1 >= m2)

                minutes = (h2 - h1 ) * 60 -(m1 - m2);

         else  if(m1 <= m2)

                minutes = (h2 - h1) * 60 + (m2 - m1);
        }

        printf("%d\n",minutes);

    }
    return 0;

}
