#include <stdio.h>
int main()
{
    float x1, y1, x2, y2, d1, d2, distancia;

    scanf("%f %f", &x1, &y1);

    scanf("%f %f", &x2, &y2);

    d1 = (x2 - x1)*(x2 - x1);

    d2 = (y2 - y1)*(y2 - y1);

    distancia = sqrt(d1 + d2);

    printf("%.4f\n", distancia);

    return 0;
}