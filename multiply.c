#include <stdio.h>

int main (void) {
    double x = 0.0, dx = 0.0, y = 0.0, dy = 0.0, dz = 0.0;
    
    printf ("Entry x, dx(x deviation), y, dy(y deviation):\n");
    scanf ("%lf, %lf, %lf, %lf", &x, &dx, &y, &dy);
    dz = (x * dy + y * dx);
    printf ("multiply deviation is dz = %lf", dz);

    return 0;
}