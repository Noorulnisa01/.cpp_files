//  Data type:
//  data type mean which type of data is stored in the variable.

//  For example:

//  Here "a" and "b" is variable that store the integer values.

#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int b = 10;
    int Sum = a+b;
    cout<<Sum<<endl;
    return 0;
}

/*  Types of data types in C++:

 There are 3 categories of data types in C++:

          1. Built-in data types
          2. User defined data types
          3. Derived data types



  1. Built-in data types:

  Built-in data types are the data types that are already available (pre-defined) in C++.

There are 5 built-in data types in C++:
                  1.1 int 
                         (integer means positive or negative whole number)
                         For example: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -1, -2, -3, -4, -5, -6, -7, -8, -9, -10
                  1.2 float
                         (positive or negative fractional number)
                         For example: 1.0, 1.1, 1.2, 1.3 etc.
                  1.3 double
                         (fractional number with long decimal part)
                         For example: 1.06872, 1.1444, 1.287772..., 1.3 etc.
                  1.4 char
                         (single character)
                         For example: 'a', 'b', 'c', 'd' etc.
                  1.5 bool 
                         (boolean means only two values i.e. true and false)
                         For example: true, false. */

//  For Example:

#include<iostream>
using namespace std;
int main(){
    int a = 10;
    float b = 1.5;
    char c = 'a';
    bool d = true;
    double e = 1.06872;
    cout<<a, b, c, d, e<<endl;
    return 0;
}


/* 2. User defined data types:

  User defined data types are the data types that are created by the user.
  There are some User-defined data types:
        2.1 Struct
        2.2 Union
        2.3 Enum
         */

/* 3. Derived data types:
    
      Derived data types are the data types that are derived from built-in data types.
      There are some Derived data types:
          3.1 Array
          3.2 Pointer
          3.3 Reference
          3.4 Function
          3.5 List
          3.6 Stack
          3.7 Queue ... etc.

*/