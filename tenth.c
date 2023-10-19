#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
    float radius, length, width, side;
    int n;
    float perimeter, area;

    printf(" \n Perimeter and area of rectangle \n");
    printf("---------------------------\n");
    printf("\n Enter width and length of the rectangle : ");
    scanf("%f%f", &width,& length);
    area=length*width;
    perimeter = 2 * (width + length);
    printf("Area of Rectangle is %f\n",area);
    printf("Perimeter of rectangle is: %.3f", perimeter);

    printf(" \n Perimeter and area of square \n");
    printf("---------------------------\n");
    printf("Enter length of side of square\n");
    scanf("%f", &side);
    area = pow(side, 2);
    perimeter = 4*side;
    printf("Area of square : %0.4f\n", area);
    printf("Perimeter of Square : %0.4f\n", perimeter);


    printf(" \n Perimeter and area of circle \n");
    printf("---------------------------\n");
    printf("\n Enter the radius of the circle : ");
    scanf("%f", &radius);
    area=3.14159*radius*radius;
    perimeter = 2 * (22 / 7) * radius;
    printf("Area of Circle %f\n",area);
    printf("Perimeter of circle is: %.3f", perimeter);

return 0;
}

