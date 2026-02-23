Like C++ variables
    Have names
    Occupy storage
    Are usually typed


    HOWEVER, THEIR VALUE CONNOT CHANGE ONCE DECLARED

Literal constants
Declared contants
    const keyword
Constants expressions
    constexpr keyword
Enumereted constants
    enum kyword
Defined constants
    #define


Literal constants

The most obvious kind of constant
    X = 12;
    Y = 1.56;
    name = "Frank"
    middle_initial = "j";


Integer literal constants

    12 - an integer
    12U - an usigned integer
    12L - a long integer
    12LL - a long long integer

Floating-point literal constants

    12.1 - a double
    12.1F - a float
    12.1L - a long double

Character literal constants (escape codes)
    \n - newline
    \r - return
    \t - tab
    \b - backspace
    \' - single quote
    \" - double quote
    \\ - backslash

        cout << "Hello\tthere\nmy friend\n";
        Hello    there
        my friend

Constants declared using the const kyword

    const double pi {3.1415926};
    const int months_in_year {12};

    pi = 2.5; //compiler error

Constants declared using the const keyword

    #define pi 3.1415926

    DON'T USE DEFINED CONSTANTS IN MODERN C++



