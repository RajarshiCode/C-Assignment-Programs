// C Program to Store Information of a Student using Structure
#include <stdio.h>

struct student {
    char first_name[50];
    char last_name[50];
    int roll_number;
    float marks;
} s[100];

int main() {
    int x, i;
    // x is the number of students

    printf("Enter the number of students: ");
    scanf("%d", &x);
    
    // It will store the student's information
    printf("\nEnter the students's informations:\n");
    for (i = 0; i < x; i++) {
        s[i].roll_number = i + 1;
        printf("\nInformation for Roll Number:\t%d\n", s[i].roll_number);

        printf("Enter the first name: ");
        scanf("%s", s[i].first_name);

        printf("Enter the last name: ");
        scanf("%s", s[i].last_name);

        printf("Enter the marks: ");
        scanf("%f", &s[i].marks);
    }

    // It will display the student's information
    printf("\n\nDisplay the student's information:\n");
    for (i = 0; i < x; i++) {
        printf("\nThe Roll Number:\t%d\n", i + 1);

        printf("The First Name: ");
        puts(s[i].first_name);

        printf("The Last Name: ");
        puts(s[i].last_name);

        printf("The Marks: %.1f", s[i].marks);
        printf("\n");
    }
    return 0;
}