#include <stdio.h>
int main() {
int a = 10, b = 3;

printf("Addition: %d\n", a + b); // Arithmetic
printf("Subtraction: %d\n", a - b);
printf("Multiplication: %d\n", a * b);
printf("Division: %d\n", a / b);
printf("Modulus: %d\n", a % b);

printf("Is a > b? %d\n", a > b); // Relational
printf("Is a == b? %d\n", a == b); // Equality
printf("Logical AND: %d\n", (a > 5 && b < 5)); // Logical
printf("Logical OR: %d\n", (a < 5 || b < 5));
return 0;
}
