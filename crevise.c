1. Fundamentals of C Language
1.1 About C Tutorial
C is a high-level and general-purpose programming language that is ideal for developing firmware or portable applications. Originally intended for writing system software, it has been widely adopted for developing application software as well. It was created by Dennis Ritchie at Bell Labs in 1972.

1.2 Important Points About C
Structured Language: C is structured around blocks of code.
Low-Level Language: Offers low-level access to memory.
Portable: Programs written in C can be run on different machines.
Rich Library: Provides a rich set of built-in functions.
Fast and Efficient: Execution speed is high due to its compiled nature.
1.3 Why Use C
Performance: It is highly efficient and fast.
Control: Provides a lot of control over system resources.
Foundation for Other Languages: Many modern languages like C++, Java, and Python are based on C.
Wide Usage: Used in system software, embedded systems, and real-time systems.
1.4 Applications of C
Operating Systems: UNIX, Windows, and Linux kernels.
Embedded Systems: Microcontrollers and IoT devices.
System Software: Compilers and assemblers.
Game Development: Game engines.
High-Performance Applications: Real-time systems.
1.5 C Language and English Language
The syntax of C is similar to English which makes it easier to learn and understand.

1.6 Features of C
Simple: Syntax is straightforward and easy to understand.
Portable: Code can be executed on different hardware.
Rich Library: Includes a wide range of functions.
Memory Management: Provides dynamic memory allocation.
Speed: Compiled to machine code, making it very fast.
Pointers: Supports powerful pointer operations.
1.7 C, C++ and Java
C: Procedural language, low-level.
C++: Superset of C, supports object-oriented programming.
Java: Object-oriented, runs on JVM, portable across systems.
2. Overview of C Language
2.1 History of C
C was developed in 1972 by Dennis Ritchie at Bell Labs. It was designed for system programming and operating systems. UNIX was one of the first operating systems written in C.

2.2 First Program in C: Hello World
Here is the classic "Hello, World!" program in C.



#include <stdio.h>  // Include standard input-output header file

// Main function: Entry point of the program
int main() {
    // Print "Hello, World!" to the console
    printf("Hello, World!\n");
    // Return 0 to indicate successful execution
    return 0;
}
2.3 Basic Structure of C Programming
A typical C program consists of:

Preprocessor Commands: Instructions to the compiler (#include).
Functions: Contain the logic of the program.
Variables: Hold data.
Statements and Expressions: Perform operations.
Comments: Explain code (single-line //, multi-line /* */).
Example:



#include <stdio.h>  // Preprocessor command

// Function declaration
void greet();

// Main function
int main() {
    greet();  // Function call
    return 0;
}

// Function definition
void greet() {
    printf("Hello, World!\n");
}
2.4 Tokens in C
Tokens are the smallest elements of a program. Types of tokens:

Keywords: Reserved words (e.g., int, return).
Identifiers: Names for variables, functions.
Constants: Fixed values (e.g., 3.14).
Strings: Sequence of characters ("Hello").
Operators: Symbols that perform operations (+, -).
Special Symbols: Punctuation characters (;, {, }).
2.5 Keywords in C
Keywords are reserved words with special meaning in C. They cannot be used as identifiers. Examples: int, return, void, if, else, while, for.

2.6 Identifiers in C
Identifiers are names for variables, functions, and arrays. Rules:

Must begin with a letter or underscore.
Followed by letters, digits, or underscores.
Case-sensitive.
2.7 Format Specifiers
Format specifiers define the type of data to be printed or read. Common format specifiers:

%d: Integer
%f: Float
%c: Character
%s: String
%lf: Double
%u: Unsigned int
2.8 Format Specifiers Examples


#include <stdio.h>

int main() {
    int a = 10;
    float b = 5.5;
    char c = 'A';
    printf("Integer: %d\n", a);
    printf("Float: %f\n", b);
    printf("Character: %c\n", c);
    return 0;
}
3. Data Types in C Language
3.1 Introduction to Data Types in C
Data types specify the type of data that a variable can hold. Basic data types in C:

int: Integer data
float: Floating-point number
double: Double-precision floating-point number
har: Character
3.2 int Data Type in C
The int type is used for integers.



#include <stdio.h>

int main() {
    int num = 10;
    printf("Integer: %d\n", num);
    return 0;
}
3.3 float Data Type in C
The float type is used for single-precision floating-point numbers.



#include <stdio.h>

int main() {
    float num = 5.5;
    printf("Float: %f\n", num);
    return 0;
}
3.4 double Data Type in C
The double type is used for double-precision floating-point numbers.



#include <stdio.h>

int main() {
    double num = 5.555555;
    printf("Double: %lf\n", num);
    return 0;
}
3.5 char Data Type in C
The char type is used for single characters.



#include <stdio.h>

int main() {
    char letter = 'A';
    printf("Character: %c\n", letter);
    return 0;
}
4. Variable in C Language
4.1 Variable Introduction in C
Variables are used to store data that can be manipulated by the program. They have a type, a name, and a value.

4.2 Variable Declaration and Initialization


#include <stdio.h>

int main() {
    int a;        // Declaration
    a = 10;       // Initialization
    int b = 20;   // Declaration and initialization
    printf("a: %d, b: %d\n", a, b);
    return 0;
}
4.3 Variable Types and Scope in C
Local Variables: Declared inside a function or block.
Global Variables: Declared outside of all functions.
Static Variables: Retain their value between function calls.
Automatic Variables: Default local variables.
External Variables: Declared using extern keyword.
4.4 Local Variable in C


#include <stdio.h>

void function() {
    int local = 10;  // Local variable
    printf("Local variable: %d\n", local);
}

int main() {
    function();
    return 0;
}
4.5 Static Variable in C


#include <stdio.h>

void function() {
    static int count = 0;  // Static variable
    count++;
    printf("Static variable: %d\n", count);
}

int main() {
    function();
    function();
    function();
    return 0;
}
4.6 Global Variables in C


#include <stdio.h>

int global = 10;  // Global variable

void function() {
    printf("Global variable: %d\n", global);
}

int main() {
    function();
    return 0;
}
4.7 Storage Class in C
Storage classes in C define the scope, visibility, and lifetime of variables:

auto: Default for local variables.
register: Stored in CPU registers.
static: Preserves value between function calls.
extern: References a global variable defined in another file.


#include <stdio.h>

void function() {
    auto int local = 10;       // Auto variable
    register int reg = 20;     // Register variable
    static int count = 0;      // Static variable
    extern int global;         // Extern variable (defined elsewhere)
    
    count++;
    printf("Local: %d, Register: %d, Static: %d, Extern: %d\n", local, reg, count, global);
}

int global = 30;  // Extern variable definition

int main() {
    function();
    function();
    return 0;
}
5. Constant in C Language
5.1 Constants in C
Constants are fixed values that do not change during program execution. Types of constants:

Integer Constants: Whole numbers.
Floating-point Constants: Decimal numbers.
Character Constants: Single characters enclosed in single quotes.
String Constants: Sequence of characters enclosed in double quotes.
Symbolic Constants: Defined using #define.


#include <stdio.h>

#define PI 3.14  // Symbolic constant

int main() {
    const int AGE = 25;      // Integer constant
    const float RATE = 9.5;  // Floating-point constant
    const char GRADE = 'A';  // Character constant
    const char NAME[] = "John";  // String constant
    
    printf("AGE: %d, RATE: %f, GRADE: %c, NAME: %s, PI: %f\n", AGE, RATE, GRADE, NAME, PI);
    return 0;
}
Next Steps
Due to the extensive nature of the request, let's proceed step by step. The above sections cover the initial chapters. Let me know if you'd like to continue in this order or if there are specific topics you want to focus on next.

ontinue where you left off
ChatGPT
6. Operators and Enums in C Language
6.1 Introduction to Operators
Operators are symbols that perform operations on variables and values. In C, there are several types of operators:

Arithmetic Operators
Relational Operators
Bitwise Operators
Logical Operators
Assignment Operators
Conditional (Ternary) Operator
sizeof() Operator
6.2 Arithmetic Operators in C
Arithmetic operators perform mathematical operations.

Operator	Description
+	Addition
-	Subtraction
*	Multiplication
/	Division
%	Modulus (remainder)
Example:



#include <stdio.h>

int main() {
    int a = 10, b = 20;
    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", b - a);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %d\n", b / a);
    printf("Modulus: %d\n", b % a);
    return 0;
}
6.3 Relational Operators in C
Relational operators compare two values.

Operator	Description
==	Equal to
!=	Not equal to
>	Greater than
<	Less than
>=	Greater than or equal to
<=	Less than or equal to
Example:



#include <stdio.h>

int main() {
    int a = 10, b = 20;
    printf("Equal to: %d\n", a == b);
    printf("Not equal to: %d\n", a != b);
    printf("Greater than: %d\n", a > b);
    printf("Less than: %d\n", a < b);
    printf("Greater than or equal to: %d\n", a >= b);
    printf("Less than or equal to: %d\n", a <= b);
    return 0;
}
6.4 Bitwise Operators in C
Bitwise operators perform bit-level operations.

Operator	Description
&	Bitwise AND
`	`
^	Bitwise XOR
~	Bitwise NOT
<<	Left shift
>>	Right shift
Example:



#include <stdio.h>

int main() {
    int a = 5, b = 9;
    printf("Bitwise AND: %d\n", a & b);
    printf("Bitwise OR: %d\n", a | b);
    printf("Bitwise XOR: %d\n", a ^ b);
    printf("Bitwise NOT: %d\n", ~a);
    printf("Left shift: %d\n", a << 1);
    printf("Right shift: %d\n", a >> 1);
    return 0;
}
6.5 Logical Operators in C
Logical operators are used to combine conditional statements.

Operator	Description
&&	Logical AND
`	
!	Logical NOT
Example:



#include <stdio.h>

int main() {
    int a = 10, b = 20;
    printf("Logical AND: %d\n", (a > 5) && (b > 5));
    printf("Logical OR: %d\n", (a > 5) || (b < 5));
    printf("Logical NOT: %d\n", !(a > 5));
    return 0;
}
6.6 Assignment Operators in C
Assignment operators assign values to variables.

Operator	Description
=	Assign
+=	Add and assign
-=	Subtract and assign
*=	Multiply and assign
/=	Divide and assign
%=	Modulus and assign
Example:



#include <stdio.h>

int main() {
    int a = 10;
    a += 5;  // a = a + 5
    printf("Add and assign: %d\n", a);
    a -= 3;  // a = a - 3
    printf("Subtract and assign: %d\n", a);
    a *= 2;  // a = a * 2
    printf("Multiply and assign: %d\n", a);
    a /= 4;  // a = a / 4
    printf("Divide and assign: %d\n", a);
    a %= 3;  // a = a % 3
    printf("Modulus and assign: %d\n", a);
    return 0;
}
6.7 Conditional Operator in C
The conditional operator (ternary operator) is a shorthand for if-else statements.

Syntax: condition ? expression1 : expression2

Example:



#include <stdio.h>

int main() {
    int a = 10, b = 20;
    int max = (a > b) ? a : b;  // Find the maximum
    printf("Maximum: %d\n", max);
    return 0;
}
6.8 sizeof() Operator in C
The sizeof operator returns the size of a variable or data type in bytes.

Example:



#include <stdio.h>

int main() {
    int a;
    float b;
    double c;
    char d;
    printf("Size of int: %zu bytes\n", sizeof(a));
    printf("Size of float: %zu bytes\n", sizeof(b));
    printf("Size of double: %zu bytes\n", sizeof(c));
    printf("Size of char: %zu bytes\n", sizeof(d));
    return 0;
}
6.9 Operator Precedence
Operator precedence determines the order in which operations are performed. For example, * and / have higher precedence than + and -.

Example:



#include <stdio.h>

int main() {
    int a = 10, b = 5, c = 2;
    int result = a + b * c;  // Multiplication has higher precedence than addition
    printf("Result: %d\n", result);
    return 0;
}
6.10 ASCII Value
The ASCII value of a character can be found using its integer representation.

Example:



#include <stdio.h>

int main() {
    char ch = 'A';
    printf("ASCII value of %c: %d\n", ch, ch);
    return 0;
}
7. Decision Making in C Language
7.1 Decision Making in C Introduction
Decision making statements control the flow of execution based on certain conditions. Common decision-making statements in C:

if Statement
if-else Statement
Nested if Statement
if else if Ladder
switch case
7.2 if Statement


#include <stdio.h>

int main() {
    int a = 10;
    if (a > 5) {
        printf("a is greater than 5\n");
    }
    return 0;
}
7.3 if-else Statement


#include <stdio.h>

int main() {
    int a = 10;
    if (a > 5) {
        printf("a is greater than 5\n");
    } else {
        printf("a is less than or equal to 5\n");
    }
    return 0;
}
7.4 Nested if Statement


#include <stdio.h>

int main() {
    int a = 10;
    if (a > 5) {
        if (a < 15) {
            printf("a is between 5 and 15\n");
        }
    }
    return 0;
}
7.5 if else if Ladder


#include <stdio.h>

int main() {
    int a = 10;
    if (a == 5) {
        printf("a is 5\n");
    } else if (a == 10) {
        printf("a is 10\n");
    } else if (a == 15) {
        printf("a is 15\n");
    } else {
        printf("a is not 5, 10, or 15\n");
    }
    return 0;
}
7.6 switch case


#include <stdio.h>

int main() {
    int a = 2;
    switch (a) {
        case 1:
            printf("a is 1\n");
            break;
        case 2:
            printf("a is 2\n");
            break;
        case 3:
            printf("a is 3\n");
            break;
        default:
            printf("a is not 1, 2, or 3\n");
    }
    return 0;
}
8. Loop Control in C Language
8.1 Loop Introduction in C
Loops are used to execute a block of code repeatedly. Common loops in C:

while loop
do-while loop
for loop
8.2 while Loop in C


#include <stdio.h>

int main() {
    int i = 0;
    while (i < 5) {
        printf("i: %d\n", i);
        i++;
    }
    return 0;
}
8.3 do-while Loop in C


#include <stdio.h>

int main() {
    int i = 0;
    do {
        printf("i: %d\n", i);
        i++;
    } while (i < 5);
    return 0;
}
8.4 for Loop in C


#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {
        printf("i: %d\n", i);
    }
    return 0;
}
9. Control Flow in C Programming
9.1 break Statement in C


#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {
        if (i == 3) {
            break;  // Exit the loop
        }
        printf("i: %d\n", i);
    }
    return 0;
}
9.2 continue Statement in C


#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {
        if (i == 3) {
            continue;  // Skip the rest of the loop iteration
        }
        printf("i: %d\n", i);
    }
    return 0;
}
9.3 goto Statement in C


#include <stdio.h>

int main() {
    int i = 0;
    loop:
    printf("i: %d\n", i);
    i++;
    if (i < 5) {
        goto loop;  // Jump to label 'loop'
    }
    return 0;
}
10. Array in C Language
10.1 Single Dimensional Array


#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    return 0;
}
10.2 Multi-Dimensional Array in C


#include <stdio.h>

int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("arr[%d][%d] = %d\n", i, j, arr[i][j]);
        }
    }
    return 0;
}
11. String in C Language
11.1 Introduction to String
A string is an array of characters terminated by a null character (\0).

Example:



#include <stdio.h>

int main() {
    char str[] = "Hello, World!";
    printf("%s\n", str);
    return 0;
}
12. Function in C Language
12.1 Function in C
A function is a block of code that performs a specific task.

12.2 Function Calling in C


#include <stdio.h>

void greet() {
    printf("Hello, World!\n");
}

int main() {
    greet();  // Function call
    return 0;
}
12.3 return Type in Function


#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main() {
    int result = sum(10, 20);  // Function call
    printf("Sum: %d\n", result);
    return 0;
}
12.4 Call by Value in C


#include <stdio.h>

void swap(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    printf("Inside swap: x = %d, y = %d\n", x, y);
}

int main() {
    int a = 10, b = 20;
    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(a, b);  // Call by value
    printf("After swap: a = %d, b = %d\n", a, b);
    return 0;
}
12.5 User Defined Function


#include <stdio.h>

// Function prototype
int multiply(int a, int b);

int main() {
    int result = multiply(5, 3);  // Function call
    printf("Product: %d\n", result);
    return 0;
}

// Function definition
int multiply(int a, int b) {
    return a * b;
}
12.6 Predefined Functions
C standard library provides many predefined functions. For example, printf, scanf, strlen, strcpy, etc.

13. String Functions in C
13.1 All String Functions
Common string functions in C include strcat, strncat, strcpy, strncpy, strlen, strcmp, strcmpi, strchr, strrchr, strstr, strrstr, strdup, strlwr, strupr, strrev, strset, strnset, strtok.

13.2 strcat() Function


#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Hello, ";
    char str2[] = "World!";
    strcat(str1, str2);  // Concatenate str2 to str1
    printf("%s\n", str1);
    return 0;
}
13.3 strncat() Function


#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Hello, ";
    char str2[] = "World!";
    strncat(str1, str2, 3);  // Concatenate first 3 characters of str2 to str1
    printf("%s\n", str1);
    return 0;
}
13.4 strcpy() Function


#include <stdio.h>
#include <string.h>

int main() {
    char str1[20];
    char str2[] = "Hello, World!";
    strcpy(str1, str2);  // Copy str2 to str1
    printf("%s\n", str1);
    return 0;
}
13.5 strncpy() Function


#include <stdio.h>
#include <string.h>

int main() {
    char str1[20];
    char str2[] = "Hello, World!";
    strncpy(str1, str2, 5);  // Copy first 5 characters of str2 to str1
    str1[5] = '\0';  // Null-terminate the string
    printf("%s\n", str1);
    return 0;
}
13.6 strlen() Function


#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    printf("Length: %zu\n", strlen(str));  // Get the length of the string
    return 0;
}
13.7 strcmp() Function


#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello";
    char str2[] = "World";
    int result = strcmp(str1, str2);  // Compare str1 and str2
    if (result == 0) {
        printf("Strings are equal\n");
    } else if (result < 0) {
        printf("str1 is less than str2\n");
    } else {
        printf("str1 is greater than str2\n");
    }
    return 0;
}
13.8 strcmpi() Function


#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "hello";
    char str2[] = "Hello";
    int result = strcmpi(str1, str2);  // Compare str1 and str2 case-insensitively
    if (result == 0) {
        printf("Strings are equal\n");
    } else if (result < 0) {
        printf("str1 is less than str2\n");
    } else {
        printf("str1 is greater than str2\n");
    }
    return 0;
}
13.9 strchr() Function


#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    char *pos = strchr(str, 'W');  // Find the first occurrence of 'W'
    if (pos != NULL

1/5

ChatGPT
) {
printf("Found 'W' at position: %ld\n", pos - str);
}
return 0;
}

arduino


#### 13.10 strrchr() Function

```c
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    char *pos = strrchr(str, 'o');  // Find the last occurrence of 'o'
    if (pos != NULL) {
        printf("Found 'o' at position: %ld\n", pos - str);
    }
    return 0;
}
13.11 strstr() Function


#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    char *pos = strstr(str, "World");  // Find the first occurrence of "World"
    if (pos != NULL) {
        printf("Found 'World' at position: %ld\n", pos - str);
    }
    return 0;
}
13.12 strrstr() Function
(Note: strrstr is not a standard C function. You might mean strstr or a custom implementation.)

13.13 strdup() Function


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char str[] = "Hello, World!";
    char *dup = strdup(str);  // Duplicate the string
    if (dup != NULL) {
        printf("Duplicated string: %s\n", dup);
        free(dup);  // Free the allocated memory
    }
    return 0;
}
13.14 strlwr() Function


#include <stdio.h>
#include <string.h>
#include <ctype.h>

void strlwr(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    char str[] = "Hello, WORLD!";
    strlwr(str);  // Convert to lowercase
    printf("Lowercase string: %s\n", str);
    return 0;
}
13.15 strupr() Function


#include <stdio.h>
#include <string.h>
#include <ctype.h>

void strupr(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = toupper(str[i]);
    }
}

int main() {
    char str[] = "Hello, world!";
    strupr(str);  // Convert to uppercase
    printf("Uppercase string: %s\n", str);
    return 0;
}
13.16 strrev() Function


#include <stdio.h>
#include <string.h>

void strrev(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main() {
    char str[] = "Hello, World!";
    strrev(str);  // Reverse the string
    printf("Reversed string: %s\n", str);
    return 0;
}
13.17 strset() Function
(Note: strset is not a standard C function. You might be referring to a custom implementation.)

13.18 strnset() Function
(Note: strnset is not a standard C function. You might be referring to a custom implementation.)

13.19 strtok() Function


#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    char *token = strtok(str, ", ");
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, ", ");
    }
    return 0;
}
14. Recursion in C
14.1 Introduction to Recursion
Recursion is a programming technique where a function calls itself.

14.2 Direct and Indirect Recursion
Direct Recursion:



#include <stdio.h>

void factorial(int n) {
    if (n > 1) {
        printf("%d * ", n);
        factorial(n - 1);
    } else {
        printf("1 = ");
    }
}

int main() {
    factorial(5);  // Calculate factorial of 5
    return 0;
}
Indirect Recursion:



#include <stdio.h>

void functionA(int n);

void functionB(int n) {
    if (n > 0) {
        printf("%d ", n);
        functionA(n - 1);
    }
}

void functionA(int n) {
    if (n > 0) {
        functionB(n / 2);
    }
}

int main() {
    functionB(16);
    return 0;
}
15. Pointer in C Language
15.1 Pointer in C
A pointer is a variable that stores the memory address of another variable.

Example:



#include <stdio.h>

int main() {
    int a = 10;
    int *p = &a;  // Pointer to int
    printf("Address of a: %p\n", (void *)p);
    printf("Value of a: %d\n", *p);
    return 0;
}
15.2 Types of Pointer
Null Pointer
Dangling Pointer
Void/Generic Pointer
Wild Pointer
Near, Far, and Huge Pointer
15.3 NULL Pointer


#include <stdio.h>

int main() {
    int *p = NULL;  // Null pointer
    if (p == NULL) {
        printf("Pointer is null\n");
    }
    return 0;
}
15.4 Dangling Pointer


#include <stdio.h>

void function() {
    int a = 10;
    int *p = &a;
    printf("Value: %d\n", *p);
    // a is out of scope here, p is a dangling pointer
}

int main() {
    function();
    return 0;
}
15.5 Void/Generic Pointers


#include <stdio.h>

void print(void *ptr, char type) {
    if (type == 'i') {
        printf("%d\n", *(int *)ptr);
    } else if (type == 'f') {
        printf("%f\n", *(float *)ptr);
    }
}

int main() {
    int a = 10;
    float b = 5.5;
    print(&a, 'i');
    print(&b, 'f');
    return 0;
}
15.6 Wild Pointer


#include <stdio.h>

int main() {
    int *p;  // Wild pointer
    // printf("Value: %d\n", *p); // Undefined behavior
    return 0;
}
15.7 Near, Far, and Huge Pointer
(Note: These types are specific to older systems and might not be applicable in modern compilers.)

15.8 Pointer Expressions and Arithmetic


#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30};
    int *p = arr;
    printf("Value at p: %d\n", *p);
    p++;  // Increment pointer
    printf("Value at p: %d\n", *p);
    return 0;
}
15.9 Pointer and Array


#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30};
    int *p = arr;
    for (int i = 0; i < 3; i++) {
        printf("arr[%d] = %d\n", i, *(p + i));
    }
    return 0;
}
15.10 Strings as Pointers


#include <stdio.h>

int main() {
    char *str = "Hello, World!";
    printf("%s\n", str);
    return 0;
}
15.11 Pointer to Function


#include <stdio.h>

void greet() {
    printf("Hello, World!\n");
}

int main() {
    void (*funcPtr)() = greet;  // Pointer to function
    funcPtr();  // Call function using pointer
    return 0;
}
15.12 Call by Reference in C


#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 10, b = 20;
    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(&a, &b);  // Call by reference
    printf("After swap: a = %d, b = %d\n", a, b);
    return 0;
}
16. Structure in C Language
16.1 Structure in C
A structure is a user-defined data type that groups related variables.

Example:



#include <stdio.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person p1 = {"Alice", 30};
    printf("Name: %s, Age: %d\n", p1.name, p1.age);
    return 0;
}
16.2 Structure and Function


#include <stdio.h>

struct Person {
    char name[50];
    int age;
};

void printPerson(struct Person p) {
    printf("Name: %s, Age: %d\n", p.name, p.age);
}

int main() {
    struct Person p1 = {"Alice", 30};
    printPerson(p1);
    return 0;
}
16.3 Array of Structures


#include <stdio.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person people[2] = {{"Alice", 30}, {"Bob", 25}};
    for (int i = 0; i < 2; i++) {
        printf("Name: %s, Age: %d\n", people[i].name, people[i].age);
    }
    return 0;
}
16.4 Structure Pointer


#include <stdio.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person p1 = {"Alice", 30};
    struct Person *p = &p1;  // Pointer to structure
    printf("Name: %s, Age: %d\n", p->name, p->age);
    return 0;
}
17. Union in C Language
17.1 Union in C
A union is a user-defined data type where all members share the same memory location.

Example:



#include <stdio.h>

union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data data;
    data.i = 10;
    printf("data.i: %d\n", data.i);
    data.f = 220.5;
    printf("data.f: %f\n", data.f);
    // Note: data.i and data.str are overwritten by data.f
    return 0;
}
18. File Handling in C Language
18.1 File Operations in C
Open a File:



#include <stdio.h>

int main() {
    FILE *fp = fopen("file.txt", "w");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    fprintf(fp, "Hello, World!\n");
    fclose(fp);
    return 0;
}
Read from a File:



#include <stdio.h>

int main() {
    FILE *fp = fopen("file.txt", "r");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    char buffer[100];
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }
    fclose(fp);
    return 0;
}
File Modes:

r - Read
w - Write
a - Append
r+ - Read and Write
w+ - Read and Write (creates a new file or truncates existing one)
a+ - Read and Write (appends to the end of file)
Error Handling:



#include <stdio.h>

int main() {
    FILE *fp = fopen("file.txt", "r");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }
    fclose(fp);
    return 0;
}
File Positioning:



#include <stdio.h>

int main() {
    FILE *fp = fopen("file.txt", "r");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }
    fseek(fp, 10, SEEK_SET);  // Move to 10 bytes from the beginning
    char ch = fgetc(fp);
    printf("Character at position 10: %c\n", ch);
    fclose(fp);
    return 0;
}
19. Dynamic Memory Allocation in C
19.1 malloc()


#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = (int *)malloc(5 * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    for (int i = 0; i < 5; i++) {
        arr[i] = i;
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}
19.2 calloc()


#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = (int *)calloc(5, sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}
19.3 realloc()


#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = (int *)malloc(5 * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    for (int i = 0; i < 5; i++) {
        arr[i] = i;
    }
    arr = (int *)realloc(arr, 10 * sizeof(int));
    if (arr == NULL) {
        printf("Memory reallocation failed\n");
        return 1;
    }
    for (int i = 5; i < 10; i++) {
        arr[i] = i;
    }
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}
20. Preprocessor Directives in C
20.1 #define


#include <stdio.h>

#define PI 3.14

int main() {
    printf("Value of PI: %f\n", PI);
    return 0;
}
20.2 #include


#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
20.3 #if, #else, #elif, #endif


#include <stdio.h>

#define DEBUG

int main() {
#ifdef DEBUG
    printf("Debug mode is on\n");
#else
    printf("Debug mode is off\n");
#endif
    return 0;
}
20.4 #undef


#include <stdio.h>

#define MAX 100
#undef MAX

int main() {
#ifdef MAX
    printf("MAX is defined\n");
#else
    printf("MAX is not defined\n");
#endif
    return 0;
}
20.5 #ifdef, #ifndef


#include <stdio.h>

#define FEATURE

int main() {
#ifdef FEATURE
    printf("Feature is enabled\n");
#else
    printf("Feature is disabled\n");
#endif
    return 0;
}
20.6 #pragma


#include <stdio.h>

#pragma message("This is a pragma message")

int main() {
    printf("Hello, World!\n");
    return 0;
}
21. Bitwise Operators in C
21.1 Introduction to Bitwise Operators
Bitwise operators perform operations on the binary representation of integers.

Operators:

& - AND
| - OR
^ - XOR
~ - NOT
<< - Left Shift
>> - Right Shift
21.2 Bitwise AND


#include <stdio.h>

int main() {
    int a = 12;  // 1100 in binary
    int b = 7;   // 0111 in binary
    printf("a & b = %d\n", a & b);  // 0100 in binary (4 in decimal)
    return 0;
}
21.3 Bitwise OR


#include <stdio.h>

int main() {
    int a = 12;  // 1100 in binary
    int b = 7;   // 0111 in binary
    printf("a | b = %d\n", a | b);  // 1111 in binary (15 in decimal)
    return 0;
}
21.4 Bitwise XOR


#include <stdio.h>

int main() {
    int a = 12;  // 1100 in binary
    int b = 7;   // 0111 in binary
    printf("a ^ b = %d\n", a ^ b);  // 1011 in binary (11 in decimal)
    return 0;
}
21.5 Bitwise NOT


#include <stdio.h>

int main() {
    int a = 12;  // 1100 in binary
    printf("~a = %d\n", ~a);  // 0011 in binary (negative number due to sign extension)
    return 0;
}
21.6 Left Shift


#include <stdio.h>

int main() {
    int a = 5;   // 0101 in binary
    printf("a << 1 = %d\n", a << 1);  // 1010 in binary (10 in decimal)
    return 0;
}
21.7 Right Shift


#include <stdio.h>

int main() {
    int a = 20;  // 10100 in binary
    printf("a >> 2 = %d\n", a >> 2);  // 00101 in binary (5 in decimal)
    return 0;
}