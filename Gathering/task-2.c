#include <stdio.h>
#define PI 3.14

double Circle( double radius) {
    return PI * radius * radius;
}

main() {
    double radius, area;

    printf( "Radius of the circle: ");
    scanf("%lf", &radius);

    area = Circle(radius);


    printf(" %.2lf is %.2lf\n", radius, area);

}



