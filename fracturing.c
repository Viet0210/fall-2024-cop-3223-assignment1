#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define M_PI 3.14159

// Helper function that calculates distance using the parameters of int argc and the char aray argv
  double findD(char* argv[]) {
  // prints out the values of x1, x2, y1, and y2
    printf("x1 = %s; y1 = %s\n", argv[1], argv[2]);
    printf("x2 = %s; y2 = %s\n", argv[3], argv[4]);

    //calculates the distance between the two points in double d while casting the values of the char array into double
    double d = sqrt(pow(atof(argv[3]) - atof(argv[1]), 2) + pow(atof(argv[4]) - atof(argv[2]), 2));

    // returns the distance d
    return d;
  };

  //Function prints out the calculated distance from function findD()
  double calculateDistance(char* argv[]) {
    double d = findD(argv);
    printf("The distance is %lf.\n", d);
    return 1.0;
  }

  double calculatePerimeter(char* argv[]) {
    // calculates the perimeter using calculateDistance()
    double p = findD(argv) * M_PI;
    printf("The perimeter is %lf.\n", p);
    return 3.0;
  }

  
  int main (int argc, char* argv[])  {

    calculateDistance(argv);
    calculatePerimeter(argv);
    

    return 0;
  }



