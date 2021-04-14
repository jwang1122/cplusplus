#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg{"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    int a = 5;
    int b = 6;
    int c = 33;
    cout << (a + b + c)/3.0 << endl;
    cout << "Hello World!!!" << endl;
    for (const string& word : msg)
    {
        cout<<word<<" ";
    }
    cout << endl;
}