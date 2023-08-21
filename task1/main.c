#include <stdio.h>
#include <stdlib.h>

extern int multiply(int a, int b);
extern int division(int a, int b);

int main() {
int a=5;
int b = 5;
int result;
int result1;

result = multiply(a, b);
printf("Multiplication result: %d\n", result);
exit(EXIT_SUCCESS);

result1 = division(a, b);
printf("Division result: %d\n", result1);
exit(EXIT_SUCCESS);

}
