# Math Operations Program

## Overview
This is a C++ program that performs various mathematical operations using templates for type safety and flexibility. It includes input validation to ensure robust error handling, particularly when users enter invalid data types (e.g., strings instead of numbers).

## Features
The program supports the following mathematical operations:

1. **Power**: Calculate the result of a base raised to an exponent.
2. **Sine**: Compute the sine of an angle (in radians).
3. **Cosine**: Compute the cosine of an angle (in radians).
4. **Tangent**: Compute the tangent of an angle (in radians).
5. **Square Root**: Calculate the square root of a number.
6. **Natural Log**: Compute the natural logarithm (base *e*).
7. **Log Base 10**: Compute the logarithm to base 10.
8. **Addition**: Add two numbers.
9. **Subtraction**: Subtract one number from another.
10. **Multiplication**: Multiply two numbers.
11. **Division**: Divide one number by another (with a check for division by zero).

## Input Validation
The program includes a helper function `getInput` to validate numeric inputs. If a non-numeric value is entered, the program will prompt the user to enter a valid number, ensuring no crashes or undefined behavior.

## How to Use
1. Compile the program using a C++ compiler that supports C++11 or later (e.g., GCC, Clang, or MSVC).
   ```sh
   g++ -o math_operations math_operations.cpp -std=c++11
   ```

2. Run the executable.
   ./math_operations
   ```

3. Follow the on-screen prompts to select a mathematical operation and provide the necessary inputs.


## Code Highlights
- **Templates**: Used for type safety and flexibility, allowing operations on both `int` and `double` types.
- **`std::enable_if` and `std::is_floating_point`/`std::is_integral`**: Ensures only numeric types are processed.
- **Input Validation**: Uses `std::cin` error handling to manage invalid inputs gracefully.

