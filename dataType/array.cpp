#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

int arr[5]; //declear an array

int main()
{
    cout << arr << endl; // display the address of variable arr
    cout << &arr << endl;
    for (int i = 0; i < 5; i++)
    {
        arr[i] = i + 1; // assign value to array
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl; // display content in the array
    }

    int a[] = {11, 22, 33, 44, 55}; // declear and intialize array
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << endl; // display content in the array
    }

    for(int i:a){ // for-each loop
        cout << i << endl;
    }

    int jimmy[3][5]; // 2 dimensional array
    
}