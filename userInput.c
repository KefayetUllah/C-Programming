#include <stdio.h>

int main() {
    char name[100];  // Use array to store a string
    int age;
    float gpa;

    printf("Enter your name: ");
    scanf("%s", name); // Correct: now name is a string

    printf("Enter your age: ");
    scanf("%d", &age); // Input for integer

    printf("Enter your GPA: ");
    scanf("%f", &gpa); // Input for float

    printf("You entered Name: %s, Age: %d and GPA: %.2f\n", name, age, gpa);
    return 0;
}
