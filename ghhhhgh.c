#include <stdio.h>
#include <math.h>

void main()
{
    float a, b, c, D, r1, r2;

    printf("Enter the values of a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    D = b * b - 4 * a * c;

    if (D < 0)
    {
        printf("The roots are imaginary\n");
    }
    else if (D == 0)
    {
        r1 = -b / (2 * a);
        printf("Roots are equal\n");
        printf("Root = %f\n", r1);
    }
    else
    {
        r1 = (-b + sqrt(D)) / (2 * a);
        r2 = (-b - sqrt(D)) / (2 * a);

        printf("Roots = %f and %f\n", r1, r2);
    }
}

