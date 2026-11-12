#include <stdio.h>
int main()
{
    float diameter, radius;
    printf("Enter the diameter of the circle: ");
    scanf("%f", &diameter);
    radius = diameter / 2;
    printf("Radius of the circle = %.2f", radius);
    return 0;
}
