We completed the coding exercises individually. The theory questions were answered collaboratively by Manuel Lorente Rodriguez and Charlotte Rösler Zuzanna Popek.
GitHub username(s): Manuel0516, Katusse, zu4347po

1. Describe briefly the role of the three different steps in the compilation process.

1.1 Pre-processing – Scans the source code for directives, typically beginning with the # character, and expands or removes them before compilation begins.

1.2 Compiling – Checks the code for syntax errors, warns about constructs that may not behave as intended, translates the source into binary machine code, and applies optimizations.

1.3 Linking – Combines the resulting object files with any required libraries, resolves references between them, and produces the final executable program.

2. In the the following code snippet, give the order that the objects are destroyed. Are there any objects that aren't destroyed?

The objects are destroyed in the following order:

1. j — an int object with value 1, destroyed when its inner scope ends.

2. number — the int parameter of print_number, destroyed when the function returns.

3. The dynamically allocated int{3} — destroyed explicitly by delete number_on_heap.

4. At the end of main, the local objects go out of scope in reverse order: leaked_string, number_on_heap, and i.

The dynamically allocated std::string{"I'm being leaked!"} is never destroyed because delete leaked_string is never called, causing a memory leak.

3. Given a source file called homework.cxx. What command would you run to

    3.1 Compile it into an object file called homework.o, with warnings enabled

    g++ -Wall -Wextra -c homework.cxx -o homework.o
    
    3.2 Compile it and link it into an executable called homework, with warnings enabled

    g++ -Wall -Wextra homework.cxx -o homework

4. What type of function is declared here? When is it invoked? 

This is a copy constructor for the class Circle. It is invoked automatically by the compiler when an object is created by copying an existing Circle object.

5. Explain RAII

RAII is a technique that manages the creation and destruction of a variable in memory. The variable is created when you declare it and is destroyed at the end of the scope of the function where it was created, so you don't have to do it manually and no memory leaks appear.

AI assistance:
I used an AI assistant to help write C++ syntax and identify errors that prevented the code from compiling.