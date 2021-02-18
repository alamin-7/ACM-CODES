#include<stdio.h>

    float gpa(int score)
    {
      int grade;
      grade = score / 5;

      switch(grade) {
      case  20:
          case  19:
          case  18:
          case  17:
          case  16:
              return 4.0;
               break;
          case  15:
            return 3.75;
                 break;
          case  14:
            return 3.5;
             break;
          case 13:
            return 3.25;
             break;
          case 12:

            return 3;
             break;
          case 11:
            return 2.75;
             break;
          case 10:
            return 2.5;
              break;
          case 9:
              return 2.25;
              break;
          case 8:
            return 2;
            break;
          default:
            return 0;
            break;
          }
    }

int main()
{

    int p[100], c[100], m[100], i, j;
    float pc[100], cc[100], mc[100], cgpa[100];

    for(i = 0; i < 5; i++){
        scanf("%d %d %d",&p[i], &c[i], &m[i]);
    }
    for(i = 0; i < 5; i++){
        pc[i] = gpa(p[i]);
        cc[i] = gpa(c[i]);
        mc[i] = gpa(m[i]);
    }
    for(i = 0; i < 5; i++){
        cgpa[i] = (pc[i] + cc[i] + mc[i]) / 3.0;
    }
    for(i = 0; i < 5; i++){
        printf("%.2lf\n", cgpa[i]);
    }
    return 0;

}
