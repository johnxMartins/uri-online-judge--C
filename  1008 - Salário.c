#include <stdio.h>
int main(){
    int NUMBER, HORAS;
    double SALARY, VHORAS;
    scanf("%d %d %lf", &NUMBER, &HORAS, &VHORAS);
    SALARY = (HORAS * VHORAS);
    printf("NUMBER = %d\n", NUMBER);
    printf("SALARY = U$ %.2f\n", SALARY);
    return 0;

}