#include<stdio.h>
#include<stdlib.h>

int main()
 {
    char par;
    float floa;
    printf("Enter temp: ");
    scanf("%f %c",&floa,&par);

    switch (par)
    {
        case 'c':
    {
        printf("CONVETRING CEL - far - kelv\t");
        if (floa < -273.15)
        printf("Lower 0");
        else
       {
        floa = (floa *9/5) + 32;
        printf ("cel to fahr = %.2f\t", floa);
        floa = floa + 273.15;
        printf ("cel to kelv = %.2f\t", floa);
       }
       break;
    }
        case 'f':
    {
       printf ("CONVERTING FAR-CEL-KELV\n ");
        if (floa < -459.4)
            printf("Lower 0");
        else
        {
       floa = ((floa - 32)*5)/9;
       printf ("far to cel = %.2f\t", floa);
       floa = floa + 273.15;
       printf ("far to kelv = %.2f\t", floa);
        }
        break;
    }
        case 'k':
    {
        printf("CONVERTING KEL-CEL-FAHR\n");
        if (floa < 0)
            printf("Lower 0");
        else
            {
        floa = floa - 273.15;
        printf ("kelv to cel = %.2f\t", floa);
        floa = floa*1.8 + 32;
        printf ("kelv to far = %.2f\t", floa);
        }
        break;
    }
default:
            printf("Error\n");
        {
            cels = (floa *9/5) + 32;
            kelv = ((floa - 32)*5)/9 + 273.15;
            printf(" if Enter - fahr \n fahr - cel = %.2f\t fahr - kelv = %.2f\n",cels , kelv);
            cels = 0;
            kelv = 0;
            kelv = floa + 273.15;
            fahr = (floa *9/5) + 32;
            printf("if Enter - cels\n cels - fahr = %.2f\t cels - kelv = %.2f\n", fahr, kelv );
            cels = 0;
            kelv = 0;
            fahr = 0;
            cels = floa - 273;
            fahr = (floa - 273.15)*1.8 + 32;
            printf("if Enter - kelv\n kelv - cels = %.2f\t kelv - fahr = %.2f\t", cels, fahr);
            break;
        }
    }
 }
