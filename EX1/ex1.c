#include <stdio.h>
 
int main(void) {
    double gpa;
 
    printf("Enter the GPA (0.0 - 4.0): ");
    scanf("%lf", &gpa);
 
    if (gpa < 3.0) {
        if (gpa < 2.0) {
            if (gpa < 1.0) {
                printf("Failed semester - registration suspended\n");
            } else {
                printf("On probation for next semester\n");
            }
        }
    } else {
        if (gpa < 3.5) {
            printf("Dean's list for semester\n");
        } else {
            printf("Highest honors for semester\n");
        }
    }
 
    return 0;
}
 
