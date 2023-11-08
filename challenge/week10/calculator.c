#include <stdio.h>
//더하기 함수
void summation(double* a, double* b, double* result) {
    *result = *a + *b;
}
//빼기함수
void subtraction(double* a, double* b, double* result) {
    *result = *a - *b;
}
//곱하기 함수
void multiplication(double* a, double* b, double* result) {
    *result = *a * (*b);
}
//나누기함수
void division(double* a, double* b, double* result) {
        *result = *a / (*b);
}

int main() {

    double a = 2, b = 3;
    double result;
    //더하기 함수 호출
    summation(&a, &b, &result);
    printf("%.0lf + %.0lf = %.2lf \n", a, b, result);
    //빼기 함수 호출
    subtraction(&a, &b, &result);
    printf("%.0lf - %.0lf = %.2lf \n", a, b, result);
    //곱하기 함수 호출
    multiplication(&a, &b, &result);
    printf("%.0lf * %.0lf = %.2lf \n", a, b, result);
    //나누기 함수 호출
    division(&a, &b, &result);
    printf("%.0lf / %.0lf = %.2lf \n", a, b, result);

    return 0;
}
