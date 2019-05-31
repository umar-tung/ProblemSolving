// Author: Umar Tung
// takes arguments, length and width and prints the resultant area and
// perimeter of a rectangle with those dimensions

#include <stdio.h>
#include <stdlib.h>
void Print_Perimeter(int length, int width){
  if(length < 0 || width < 0){
    printf("Values must be greater than or equal to 0\n");
    return;
  }

  int perimeter = 2*length + 2*width;
  int area = length * width;
  printf("Area: %d\n",area);
  printf("Perimeter: %d\n",perimeter);
}

int main(int argc, char* argv[]){
  if(argc <3 || argc >3){
    printf("Usage: ./RectangleCalc <length> <width>");
    return 0;
  }
  Print_Perimeter(atoi(argv[1]),atoi(argv[2]));
}
