#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define M_PI 3.14159

// Helper function to ask for user input and return it as a double
double askForUserInput(char* prompt) {
    double value;
    printf("%s", prompt);
    scanf("%lf", &value);
    return value;
}

// Helper function to calculate the distance between two points
double findD(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Function to calculate and print the distance
void calculateDistance() {
    double x1 = askForUserInput("Enter the x1 value: ");
    double y1 = askForUserInput("Enter the y1 value: ");
    double x2 = askForUserInput("Enter the x2 value: ");
    double y2 = askForUserInput("Enter the y2 value: ");
    
    double distance = findD(x1, y1, x2, y2);
    
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The distance between the points is %.2lf\n", distance);
}

// Function to calculate and print the perimeter of the circle using the distance
void calculatePerimeter() {
    double x1 = askForUserInput("Enter the x1 value: ");
    double y1 = askForUserInput("Enter the y1 value: ");
    double x2 = askForUserInput("Enter the x2 value: ");
    double y2 = askForUserInput("Enter the y2 value: ");
    
    double perimeter = findD(x1, y1, x2, y2) * M_PI;
    
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The perimeter of the city encompassed by your request is %.2lf\n", perimeter);
}

// Function to calculate and print the area of the circle using the distance
void calculateArea() {
    double x1 = askForUserInput("Enter the x1 value: ");
    double y1 = askForUserInput("Enter the y1 value: ");
    double x2 = askForUserInput("Enter the x2 value: ");
    double y2 = askForUserInput("Enter the y2 value: ");
    
    double radius = findD(x1, y1, x2, y2) / 2;
    double area = pow(radius, 2) * M_PI;
    
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The area of the city encompassed by your request is %.2lf\n", area);
}

// Function to calculate and print the width (diameter) of the circle
void calculateWidth() {
    double x1 = askForUserInput("Enter the x1 value: ");
    double y1 = askForUserInput("Enter the y1 value: ");
    double x2 = askForUserInput("Enter the x2 value: ");
    double y2 = askForUserInput("Enter the y2 value: ");
    
    double width = findD(x1, y1, x2, y2);
    
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The width of the city encompassed by your request is %.2lf\n", width);
}

// Function to calculate and print the height (radius) of the circle
void calculateHeight() {
    double x1 = askForUserInput("Enter the x1 value: ");
    double y1 = askForUserInput("Enter the y1 value: ");
    double x2 = askForUserInput("Enter the x2 value: ");
    double y2 = askForUserInput("Enter the y2 value: ");
    
    double height = findD(x1, y1, x2, y2) / 2;
    
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The height of the city encompassed by your request is %.2lf\n", height);
}

int main(int argc, char** argv) {

    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}
