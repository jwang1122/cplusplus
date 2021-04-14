# C++ Introduction

## C++ reserved keywords

asm, auto, bool, break, case, catch, char, class, const, const_cast, continue, default, delete, 
do, double, dynamic_cast, else, enum, explicit, export, extern, false, float, for, friend, goto, 
if, inline, int, long, mutable, namespace, new, operator, private, protected, public, register, 
reinterpret_cast, return, short, signed, sizeof, static, static_cast, struct, switch, template, 
this, throw, true, try, typedef, typeid, typename, union, unsigned, using, virtual, void, 
volatile, wchar_t, while 

## Identifiers

variable name, method or function name, program file name

```cpp
int main () 
{   
    int a = 5; 
    int b = 2;
    cout << a + b;
    return 0; 
}
```

## Fundamental Data Type
Name | Description | Size* | Range*
|--- |---          |---    |---    | 
|char |Character or small integer. |1byte |signed: -128 to 127 unsigned: 0 to 255 |
|short int (short) |Short Integer. |2bytes |signed: -32768 to 32767 unsigned: 0 to 65535| 
|int |Integer. |4bytes |signed: -2147483648 to 2147483647 unsigned: 0 to 4294967295| 
|long int (long) |Long integer. |4bytes |signed: -2147483648 to  2147483647 unsigned: 0 to 4294967295| 
|bool  |Boolean value. It can take one of two values: true or false.  |1byte   |true or false | 
|float |Floating point number. |4bytes |+/- 3.4e +/- 38 (~7 digits)|
|double |Double precision floating point number. |8bytes |+/- 1.7e +/- 308 (~15 digits)|
|long double |Long double precision floating point number. |8bytes |+/- 1.7e +/- 308 (~15 digits)| 
|wchar_t |Wide character. |2 or 4 bytes |1 wide character| 

## Declaration of variables

```c++
int a; 
float mynumber;
int x, y, z;
unsigned short int NumberOfSisters;
signed int MyAccountBalance; 
short Year; 
short int Year;
unsigned NextYear; 
unsigned int NextYear;

```