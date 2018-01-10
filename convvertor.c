#include<stdio.h>
#include<stdlib.h>

int main()
 {
    char par;
    float floa;
    printf("Enter temp: ^_^ ");
    scanf("%f %c",&floa,&par);

    switch (par)
    {
        case 'c':
    {
        printf("CONVETRING CEL - far - kelv\t");
        if (floa < -273.15)
        printf("nizje nulia");
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
            printf("nizje absolutly null");
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
            printf("slishkom nizko temp");
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
            printf("ne pravilna");
        {
            break;

        }
    }
 }
