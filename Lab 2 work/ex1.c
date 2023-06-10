#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

int main()
{
    float radius;
    double area=0.0;
    printf("Enter the Radius: ");
    scanf("%f",&radius);
    area = radius*radius* PI;
    printf("The area of the circle is: %f\n",area);

    return 0;
}