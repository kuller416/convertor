#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
    float t;
    if (argc == 3)
    {
        t = atof(argv[1]);
        switch (*argv[2])
        {
            case 'F':
            case 'f':
                {
                    if (t <= -459.4)
                    {
                        printf("Low than absolutely 0");
                        break;
                    }
                    else
                    {
                        printf("%.2f F = %.3f C\n%.2f F = %.3f K", t, (t - 32)*(5.0/9.0), t, (t - 32)/(9.0/5.0)+273);
                        break;
                    }
      }
      case 'C':
      case 'c':
      {
          if (t <= -273.15)
          {
              printf("Low than absolutely 0");
              break;
          }
          else
          {
            printf("%.2f C = %.3f F\n%.2f C = %.3f K", t, t * (9.0/5.0)+32, t, t + 273);
            break;
          }
      }
      case 'K':
      case 'k':
      {
          if (t <= 0.15)
          {
              printf("Low than absolutely 0");
              break;
          }
          else
        {
            printf("%.2f K = %.3f C\n%.2f K = %.3f F", t, t - 273, t, (t - 273)*(9.0/5.0)+32);
            break;
        }
      }
    }
    }
    else if(argc == 2)
    {
        t = atof(argv[1]);
        printf ("If input temperature C:\n");
        if (t <= -273.15)
            printf("Low than absolutely 0");
        else
            printf("%.2f C = %.3f F\n%.2f C = %.3f K", t, t * (9.0/5.0)+32, t, t + 273);
        printf ("If input value is F:\n");
        if (t <= -459.4)
            printf("Low than absolutely 0");
        else
            printf("%.2f F = %.3f C\n%.2f F = %.3f K", t, (t - 32)*(5.0/9.0), t, (t - 32)/(9.0/5.0)+273);
        printf ("If input value is K:\n");
        if (t <= 0.15)
            printf("Low than absolutely 0");
        else
        printf("%.2f K = %.3f C\n%.2f K = %.3f F", t, t - 273, t, (t - 273)*(9.0/5.0)+32);
    }
    else
        printf ("Error");
    return 0;
}
