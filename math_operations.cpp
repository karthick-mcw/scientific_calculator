#include <iostream>
#include <cmath>
#include <limits> // For std::numeric_limits
#include <type_traits>
using namespace std;

// Function to validate numeric input
template <typename T>
void getInput(T& value) {
    while (!(cin >> value)) {
        cin.clear(); // Clear the error state
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
        cout << "Invalid input. Please enter a numeric value: ";
    }
}

// Restricted Template Functions
template <typename T>
typename enable_if<is_floating_point<T>::value || is_integral<T>::value, void>::type Power(T base, T exponent) {
    cout << "Result (Power): " << pow(base, exponent) << endl;
}

template <typename T>
typename enable_if<is_floating_point<T>::value || is_integral<T>::value, void>::type Sine(T value) {
    cout << "Result (Sine): " << sin(value) << endl;
}

template <typename T>
typename enable_if<is_floating_point<T>::value || is_integral<T>::value, void>::type Cosine(T value) {
    cout << "Result (Cosine): " << cos(value) << endl;
}

template <typename T>
typename enable_if<is_floating_point<T>::value || is_integral<T>::value, void>::type Tangent(T value) {
    cout << "Result (Tangent): " << tan(value) << endl;
}

template <typename T>
typename enable_if<is_floating_point<T>::value || is_integral<T>::value, void>::type SquareRoot(T value) {
    if (value < 0) {
        cout << "Error: Square root of a negative number is not defined." << endl;
        return;
    }
    cout << "Result (Square Root): " << sqrt(value) << endl;
}

template <typename T>
typename enable_if<is_floating_point<T>::value || is_integral<T>::value, void>::type NaturalLog(T value) {
    if (value <= 0) {
        cout << "Error: Logarithm of non-positive numbers is not defined." << endl;
        return;
    }
    cout << "Result (Natural Log): " << log(value) << endl;
}

template <typename T>
typename enable_if<is_floating_point<T>::value || is_integral<T>::value, void>::type LogBase10(T value) {
    if (value <= 0) {
        cout << "Error: Logarithm of non-positive numbers is not defined." << endl;
        return;
    }
    cout << "Result (Log Base 10): " << log10(value) << endl;
}

template <typename T>
typename enable_if<is_floating_point<T>::value || is_integral<T>::value, void>::type Addition(T a, T b) {
    cout << "Result (Addition): " << a + b << endl;
}

template <typename T>
typename enable_if<is_floating_point<T>::value || is_integral<T>::value, void>::type Subtraction(T a, T b) {
    cout << "Result (Subtraction): " << a - b << endl;
}

template <typename T>
typename enable_if<is_floating_point<T>::value || is_integral<T>::value, void>::type Multiplication(T a, T b) {
    cout << "Result (Multiplication): " << a * b << endl;
}

template <typename T>
typename enable_if<is_floating_point<T>::value || is_integral<T>::value, void>::type Division(T a, T b) {
    if (b == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
        return;
    }
    cout << "Result (Division): " << a / b << endl;
}

int main() {
    int choice;
    double a, b;

while(true){
    cout << "Select the operation you want to perform:\n";
    cout << "1. Power\n2. Sine\n3. Cosine\n4. Tangent\n5. Square Root\n";
    cout << "6. Natural Log\n7. Log Base 10\n8. Addition\n9. Subtraction\n";
    cout << "10. Multiplication\n11. Division\n12.exit \n";
    getInput(choice); // Validate input

    switch (choice) {
        case 1:
            cout << "Enter base: ";
            getInput(a);
            cout << "Enter exponent: ";
            getInput(b);
            Power(a, b);
            break;
        case 2:
            cout << "Enter value for sine: ";
            getInput(a);
            Sine(a);
            break;
        case 3:
            cout << "Enter value for cosine: ";
            getInput(a);
            Cosine(a);
            break;
        case 4:
            cout << "Enter value for tangent: ";
            getInput(a);
            Tangent(a);
            break;
        case 5:
            cout << "Enter value for square root: ";
            getInput(a);
            SquareRoot(a);
            break;
        case 6:
            cout << "Enter value for natural log: ";
            getInput(a);
            NaturalLog(a);
            break;
        case 7:
            cout << "Enter value for log base 10: ";
            getInput(a);
            LogBase10(a);
            break;
        case 8:
            cout << "Enter two numbers for addition: ";
            getInput(a);
            getInput(b);
            Addition(a, b);
            break;
        case 9:
            cout << "Enter two numbers for subtraction: ";
            getInput(a);
            getInput(b);
            Subtraction(a, b);
            break;
        case 10:
            cout << "Enter two numbers for multiplication: ";
            getInput(a);
            getInput(b);
            Multiplication(a, b);
            break;
        case 11:
            cout << "Enter two numbers for division: ";
            getInput(a);
            getInput(b);
            Division(a, b);
            break;
        case 12 :
            cout << "Program ended successfully ";
            exit(0);
            break;
        default:
            cout << "Invalid choice !!! try again" << endl;
            break;
    }
}
    return 0;
}
