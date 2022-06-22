#include <stdio.h>

double module(double n);

int main (void) {
    double x = 0.0, dx = 0.0, y = 0.0, dy = 0.0, z = 0.0, dz = 0.0;
    
    printf ("Entry x, dx(x deviation), y, dy(y deviation):\n");
    scanf ("%lf, %lf, %lf, %lf", &x, &dx, &y, &dy);
    
    z = module(x - y);
    dz = dx + dy;

    if (z < 2 * dz) {
        printf ("It's equivalent.\n");
        printf ("|x - y| = %lf\n2(dx + dy) = %lf", z, (2*dz));
    } else if (z > 3 * dz) {
        printf ("It's not equivalent.\n");
        printf ("|x - y| = %lf\n3(dx + dy) = %lf", z, (3*dz));
    } else {
        printf ("It's inconclusive");
        printf ("|x - y| = %lf\n2(dx + dy) = %lf\n3(dx + dy) = %lf", z, (2*dz), (3*dz));
    }

    return 0;
}

double module(double n) {
    if (n < 0) {
        return -1 * n;
    } else {
        return n;
    }
}