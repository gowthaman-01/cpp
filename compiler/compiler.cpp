/*
 * Anything with a # prefix is a preprocessor directive, which is handled by the preprocessor during compilation.
 *
 * Header files are not compiled, instead they are copied over through preprocessor directives into a cpp file, which is then compiled.
 * Each cpp file is individually compiled into an object file (machine code) as one translation unit. 
 * The linker will stitch each of these compiled object files together into one executable file.
 *
 * C++ does not care about file extensions. The compiler will treat .cpp file as a C++ file and a .h file as a header file.
 * You can override these default conventions (eg: use .gowthaman as the extension for C++ files) by modifying the compiler configuration.
 
 * #include <> -> Used to include standard library headers or headers located in predefined system directories.
 * #include "" -> Used to include user-defined headers or headers located in custom paths.
 * Header files in the cpp standard library won't have the .h extension.
 */

#include <iostream>

// Replaces all entries of INTEGER with int during compilation. Note that there is no ;
#define INTEGER int

#if 0
// Code below this will not be compiled.

// Remember the endif
#endif

INTEGER compiler () {
    INTEGER i = 0;
    return i;
#include "compiler.hpp" // Compiler replaces this with the closing bracket from compiler.hpp
