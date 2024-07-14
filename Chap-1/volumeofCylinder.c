#include<stdio.h>
int main() {
    int radius, height;
    printf("Enter the radius of the cylinder: ");
    scanf("%d", &radius);
    printf("Enter the height of the cylinder: ");
    scanf("%d", &height);
    printf("The volume of the cylinder is: %f\n", 3.14*radius*radius*height);
    return 0;
}