## EXP2
## AIM
To study and implement C++ Program Structure (Data Types)

## C++ Data Type Size Experiment Theory
This C++ program demonstrates how to determine the size of various fundamental data types in C++ using the sizeof operator. The sizeof operator returns the number of bytes used to store a variable of a specified type. This is useful for understanding how much memory each type occupies.

Data Types Covered
int: Represents integer values. The size of int can vary depending on the system, but it is typically 4 bytes on most modern systems.

float: Represents single-precision floating-point numbers. It usually occupies 4 bytes.

char: Represents a single character. It is typically 1 byte, sufficient to store any standard ASCII character.

short int: Represents a smaller integer. The size is usually 2 bytes, which is less than int.

double: Represents double-precision floating-point numbers. It generally occupies 8 bytes, providing greater precision than float.

## Explanation of storage classes



### Global Variable (gv):
Purpose: Global variables are declared outside of any function or class. They are accessible from any function within the same file or across different files if declared with the extern keyword.
Lifetime: Global variables exist for the entire duration of the program.
Scope: Global scope, meaning they can be accessed from any function or file (if declared extern).

### External Variable (ev):

Purpose: External variables are declared with the extern keyword, which tells the compiler that the variable is defined in another file or later in the same file.
Lifetime: Same as global variables; they exist for the entire duration of the program.
Scope: Global scope, but the definition must be in the same or another file for the extern declaration to be valid.
### Static Variable (sv):

Purpose: Static variables retain their value between function calls. They are initialized only once and persist for the entire duration of the program, but their scope is limited to the block or function where they are defined.
Lifetime: The entire duration of the program.
Scope: Local to the function or block in which they are defined, but with a persistent value across function calls.
### Register Variable (rv):

Purpose: Register variables are suggested to be stored in a CPU register instead of RAM for faster access. This is a hint to the compiler; it may or may not be honored depending on the compiler's optimization.
Lifetime: Same as local variables; they are created and destroyed when the block is entered and exited.
Scope: Local to the block in which they are defined. Note that the register keyword is only a suggestion to the compiler, and its use is generally discouraged in modern C++.
### Auto Variable (av):

Purpose: Auto variables are the default storage class for local variables. They are created when the block in which they are defined is entered and destroyed when the block is exited. The auto keyword is redundant in modern C++ as local variables are auto by default.
Lifetime: Limited to the block or function in which they are defined.
Scope: Local to the block in which they are defined.

## Code 1
```
//name:sai sankar jena
//23070123112
//entc b2 
//experiment 2
#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int a;
    cout<< "\n enter an integer value";
    cin>>a;
    cout<<"\nsize of integer is :"<<sizeof(a)<<" bytes";
    
    float b;
    cout<< " \nenter a float value";
    cin>>b;
    cout<<"\nsize of float value is :"<<sizeof(b)<<" bytes";
    
    char c;
    cout<< " \nenter characters";
    cin>>c;
    cout<<"\nsize of char value is :"<<sizeof(c)<<" bytes";
    
    short int d;
    cout<< " \nenter a short int value";
    cin>>d;
    cout<<"\nsize of short int value is :"<<sizeof(d)<<" bytes";
    
    double f;
    cout<< " \nenter a double value";
    cin>>f;
    cout<<"\nsize of double value is :"<<sizeof(f)<<" bytes";
    
    return 0;
}
```
## Code 2
```
//name sai sankar jena
#include <iostream>


using namespace std;
int gv = 100; 


extern int ev;

int main() {
    
    ev = 5;

    
    static int sv = 10;

    
    register int rv = 15;

    
    auto av = 20;

    
    int gv = 200;

        cout << "global: " << ::gv<< " (size: " << sizeof(::gv) << " bytes)" << std::endl;
    cout << "local: " <<gv << " (size: " << sizeof(gv) << " bytes)" << std::endl;
    cout << "extern: " << ev << " (size: " << sizeof(ev) << " bytes)" << std::endl;
    cout << "static: " <<sv << " (size: " << sizeof(sv) << " bytes)" << std::endl;
    cout << "register: " << rv << " (size: " << sizeof(rv) << " bytes)" << std::endl;
    cout << "auto: " << av << " (size: " << sizeof(av) << " bytes)" << std::endl;

    return 0;
}


int ev;
```
## OUTPUT:
### CODE 1:
![Screenshot 2024-08-02 121558](https://github.com/user-attachments/assets/c14dfb1a-2453-47c8-9785-af6e3dcc1378)
### CODE 2:
![Screenshot 2024-08-02 121625](https://github.com/user-attachments/assets/e3a1a9d7-05cb-4e41-a22c-cfed1a49c52f)

## Conclusion

### Code 1: Data Type Sizes
This C++ program demonstrates the sizes of various data types (int, float, char, short int, double) using the sizeof operator to understand memory usage.

### Code 2: Storage Classes
This C++ program showcases different storage classes (global, extern, static, register, auto). It prints the values and sizes of these variables to illustrate their scope, visibility, and lifetime.



