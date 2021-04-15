#include <iostream>

using namespace std; 

int main () 
{   
    string s = "Hello, the world!";
    cout << s << endl;
    char c = 'A';
    cout << c << endl;

    s = "Hello " "the " "world " "!" "\n";
    cout << s;
    return 0;
}