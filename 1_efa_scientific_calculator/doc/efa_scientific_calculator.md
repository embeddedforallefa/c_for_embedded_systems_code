# Scientific Calculator in C programming language

**Problem Statement:**

Design and implement a **Scientific Calculator** using the C programming language that replicates the functionality of modern scientific calculators. The calculator should support both basic arithmetic operations and advanced mathematical functions commonly found in scientific calculators. The calculator must allow the user to input complex mathematical expressions and produce accurate results, while ensuring proper operator precedence and handling of invalid inputs.

### Requirements:

1. **Basic Arithmetic Operations**:
   - Addition (`+`), subtraction (`-`), multiplication (`*`), and division (`/`).

2. **Advanced Mathematical Functions**:
   - **Exponentiation** (`x^y`).
   - **Square root** (`√x`).
   - **Trigonometric functions**: sine (`sin`), cosine (`cos`), and tangent (`tan`) in both degrees and radians.
   - **Inverse Trigonometric functions**: arcsine (`asin`), arccosine (`acos`), and arctangent (`atan`).
   - **Logarithmic functions**: common logarithm (`log`), natural logarithm (`ln`).
   - **Factorial** (`n!`).
   - **Exponential function** (`e^x`).
   - **Power of 10** (`10^x`).
   - **Modulus operation** (`%`).

3. **Parentheses Handling**:
   - Support for nested parentheses to allow grouping of sub-expressions and ensuring proper operator precedence.

4. **Angle Mode**:
   - Support for calculations in both **degrees** and **radians** for trigonometric functions.

5. **Input Parsing**:
   - The calculator should parse user input in standard mathematical notation, including handling spaces, negative numbers, and decimals.

6. **Operator Precedence**:
   - Correctly handle operator precedence and associativity to ensure accurate evaluation of complex expressions (e.g., `sin(30) + log(100) * (2 + 3)^2`).

7. **Error Handling**:
   - Handle invalid expressions, division by zero, logarithms of non-positive numbers, and other out-of-range errors with clear error messages.

8. **User Interface**:
   - Provide a text-based interface for users to input expressions and display results.
   - The calculator should allow continuous input of expressions until the user chooses to exit.

### Constraints:
- The solution must be implemented using the **C programming language**.
- The program should handle **both integer and floating-point numbers**.
- The design must support efficient computation for both basic and advanced operations.
- The program should provide **clear and informative error messages** for invalid input.

### Objective:
The objective is to create a reliable and accurate scientific calculator that performs a wide range of mathematical operations, mimicking the capabilities of a modern scientific calculator. The calculator should ensure ease of use, input flexibility, and error robustness, making it suitable for performing both simple and complex calculations efficiently.