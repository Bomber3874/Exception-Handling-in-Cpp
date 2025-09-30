# Exception-Handling-in-Cpp

# Experiment: Exception Handling in C++

## Aim
To study and implement exception handling mechanisms in C++ using try, throw, and catch blocks, demonstrating how to manage runtime errors and unexpected conditions in a controlled manner.

## Software Used
- **Compiler**: GNU GCC (g++)
- **IDE**: Visual Studio Code
- **Operating System**: Windows/Linux

## Theory
Exception handling is a powerful mechanism in C++ that allows programs to deal with runtime errors and exceptional circumstances in a structured way. It provides a clean separation between normal code and error-handling code.

### Key Components:
- **try block**: Contains code that might generate exceptions
- **throw statement**: Signals the occurrence of an exception
- **catch block**: Handles the thrown exceptions

### Benefits:
- Separates error handling from main logic
- Prevents program termination due to exceptions
- Provides structured error recovery
- Enhances program robustness and maintainability

## Algorithms

### 1. Age Validation Exception Handling

**Algorithm:**
1. **Start** the program
2. **Declare** integer variable `age`
3. **Prompt** user to enter age and read input
4. **Begin** try block:
   - **Check** if `age < 18`
   - **If true**: throw `age` as exception
   - **Else**: display "Age: [age] APPROVED"
5. **Define** catch block for integer exceptions:
   - Catch thrown age value
   - Display "ERROR: Underage! ([age])"
6. **End** the program

**Key Characteristics:**
- Demonstrates basic exception throwing and catching
- Validates user input against business rules
- Prevents illegal operations (underage access)
- Shows graceful error messaging

### 2. Division by Zero Exception Handling

**Algorithm:**
1. **Start** the program
2. **Declare** float variables `a`, `b`, `result`
3. **Prompt** user to enter two numbers and read inputs
4. **Begin** try block:
   - **Check** if `b == 0`
   - **If true**: throw `b` as exception
   - **Else**: calculate `result = a / b` and display result
5. **Define** catch block for float exceptions:
   - Catch thrown divisor value
   - Display "ERROR: Division by [n]"
6. **End** the program

**Key Characteristics:**
- Prevents mathematical runtime errors
- Handles division by zero gracefully
- Demonstrates exception handling for mathematical operations
- Maintains program execution despite invalid inputs

## Key Learning Points

- **Structured Error Handling**: Separates normal flow from error conditions
- **Resource Protection**: Prevents program crashes due to runtime errors
- **User-Friendly Messages**: Provides meaningful error information
- **Multiple Exception Types**: Can handle different data type exceptions
- **Control Flow**: Maintains program control even during exceptional conditions

## Conclusion

This experiment successfully demonstrated the implementation of exception handling in C++:

1. **Age Validation**: Showed how to enforce business rules using exceptions when age criteria are not met.

2. **Division Safety**: Illustrated protection against mathematical errors like division by zero through proper exception handling.

The experiments highlighted how exception handling provides a robust mechanism for dealing with runtime errors while maintaining clean code structure. By using try-throw-catch blocks, programs can gracefully handle unexpected situations without abrupt termination, improving overall reliability and user experience. Exception handling is essential for building production-quality software that can withstand various error conditions.
