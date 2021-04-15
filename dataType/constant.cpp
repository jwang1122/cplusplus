#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std; 

#define PI 3.14159
#define NEWLINE '\n'

int main()
{
    cout << PI << NEWLINE;
    float r = 3.0;
    cout << "The area of circle with radius 2 is " << PI * pow(r,2) << NEWLINE;
    float area = PI * pow(r, 2);
    printf("THe area of circle with radius %.2f is %.3f.", r, area);
}