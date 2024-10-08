# Important Notes for C++ program

## Note # 1: #include
> - #include means that we need to include this header file in our program to use it in our program.
> - In C++, the ***#include directive*** tells the compiler to include the contents of the specified header file.
### ***For Example:***
            #include <iostream>
 
## Note # 2: " iostream " 

> - **"iostream"** is a ***header file*** that we need to include the standard input/output stream library in our program.
>- "iostream" is used for the input and output operations in C++.
- ***iostream*** is a ***header file because*** it contains function declarations and macro definitions that are used by the compiler to understand the interface of the input/output library.
- ***iostream*** is also ***a library because*** it provides a collection of pre-compiled object code that implements the input/output functions declared in the header file.
>    - ***iostream is a header file*** that declares the interface of the input/output library.
>    - ***iostream is also a library*** that provides the implementation of the input/output functions declared in the header file.

## Note # 3: int main()

 - ***int main()*** is the ***entry point*** of the program.

> - ***main()*** is a ***function*** that is used to start the program.
> - main( ) is the name of function.
> - The ***()*** written with main make it a ***function***, without paraenthesis it will not a function.



> - ***int*** is the ***data type*** of the ***return value*** of the ***main()*** function.
> - It means that if the *program is executed successfully*, **it will return a value** of which data type is int.

### ***For Example:***
                #include <iostream>

                int main()
                {
                    cout << "Hello, World!" <<endl;
                    return 0;
                }

## Note # 4: curly braces {}

> - ***curly braces*** are used to enclose the code blocks in the program.
> - The body of the program is enclosed in curly braces.

## Note # 5: return0;

> - ***return0;*** is used to end the program.
> - ***return0;*** means that if the program is executed successfully, it will return a value of 0.


## Note # 6: semicolon " ; "

> - ***semicolon*** is used to separate different statements in the program.

### For example:

            int main()
            {
                cout << "Hello, World! " <<endl;
                cout << "My Name is Noor. " <<endl;
                return 0;
            };

## Note # 7: " using namespace std; "

> - ***using namespace std;*** is used to use the ***standard library*** functions and variables in our program.
> Here Standar library is " iostream ".

### For example:


            #include <iostream>

            using namespace std;

            int main()
            {
                cout << "Hello, World! " <<endl;
                cout << "My Name is Noor. " <<endl;
                return 0;
            };

## Note # Double Quotes " "

> - ***Double Quotes*** is used to enclose the text in the program.
> - Text/data written in double qoutes is called ***string***.
> - ***string*** is a ***data type***.
> - ***Spaces*** written in double quotes is counted and also print in output.