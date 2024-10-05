//  Scope:
//  Scope is a region of a program where a variable is accessible.
//  Variables are accessible only within that scope.

//  Based on scope, C++ has two types of variables.
//  1. Local Variables:
        //  Local variables are declared inside a function or a block.
        //  Local variables are accessible only within that function or block.

//  2. Global Variables:
        //  Global variables are declared outside a function or a block.
        //  Global variables are accessible everywhere in the program.

//  For example:

#include<iostream>
using namespace std;
int a = 10;
int b = 10;
int Sum = a+b;
int main(){
 