#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std; 

int main(){
    int a, b, c, d, e;
    a = b = c = 10; // Assignment opertor
    d = e = 11;
    cout << (a+b)*c/d-e << endl; //Arithmetic operators
    cout << "d%2=" << d%2 << endl;

    int units = 10;
    double price = 1.99;
    price *= units + 1; // Compound assignment
    cout << "price=" << price << endl;

    a += 2;
    cout << a << endl;

    a++;
    cout << a << endl;

    b = ++a; // increase by 1 first and then assign
    cout << b << endl;
    b = a++; // assign first and then increase by 1
    printf("a=%d; b=%d\n", a, b);

    cout << (7==5) << endl; // Relational operators
    cout << (6>5) << endl; // Comparison operators
    if(a>b) cout << "a > b" << endl;
    if(a<b) cout << "a < b" << endl;

    cout << ( (5 == 5) && (3 > 6) ) << endl;
    cout << ( (5 == 5) || (3 > 6) ) << endl;

    string s = a>b?"a > b":"a < b"; //Conditional operator(?)
    cout << s << endl; 

    a = (b=3, b+2); // Comma operator
    cout << a << endl;
    return 0;
}