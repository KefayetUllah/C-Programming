#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct cricketer
    {
        char firstname[15];
        char lastname[15];
        int age;
        int noOfMatches;
        float average;
    } cricketer;

    cricketer arr[3];

    for(int i=0; i<3; i++)
    {
        scanf("%s\n", arr[i].firstname);
        scanf("%s\n", arr[i].lastname);
        scanf("%d\n", &arr[i].age);
        scanf("%d\n", &arr[i].noOfMatches);
        scanf("%f\n", &arr[i].average);
    }
    for(int i=0; i<3; i++)
    {
        printf("Name: %s %s\n", arr[i].firstname,arr[i].lastname);
        printf("Age: %d\n", arr[i].age);
        printf("No Of Matches: %d\n", arr[i].noOfMatches);
        printf("Average: %f", arr[i].average);
    }
    return 0;
}
