#include <iostream>
using namespace std;

int add(int a, int b)
{
    int r;
    r = a + b;
    return (r);
}
int main()
{
    int z;
    z = add(5, 3);
    cout << "The result is " << z;
    return 0;
}