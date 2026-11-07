CIS 165 - Lab 6
Name: Ali Eren Olgun
Course Section: CIS-165-W198

1. Initial Plans

BMI Program

My plan was to ask the user for their weight in pounds and height in inches. I would store both values as double variables. First, I would check if either value was zero or negative and display an error if needed. Then I would calculate BMI using the formula and store the result in a variable. Finally, I would use if, else if, and else statements to display the correct weight category.

I planned to test the program with different BMI values and invalid inputs to make sure the conditions worked correctly.

Color Mixer Program

My plan was to ask the user for two primary colors and store them in character arrays. I would use strcmp to compare the colors and check if both inputs were valid. Then I would use if and else if statements to find the correct mixed color. I would also check if the colors were entered in reverse order or if both colors were the same.

I planned to test different color combinations, reversed colors, identical colors, and invalid inputs.

2. How to Run the Programs

I used VS Code and the terminal on my Mac.

BMI Program

Compile:

g++ -std=c++17 -Wall -Wextra bmi.cpp -o bmi

Run:

./bmi

Color Mixer Program

Compile:

g++ -std=c++17 -Wall -Wextra color_mixer.cpp -o color_mixer

Run:

./color_mixer

3. Testing

BMI Program Tests

Test 1

Input: 100 pounds, 70 inches
Expected: BMI 14.35 — Underweight
Actual: BMI 14.35 — Underweight
Result: Match

Test 2

Input: 150 pounds, 70 inches
Expected: BMI 21.52 — Optimal weight
Actual: BMI 21.52 — Optimal weight
Result: Match

Test 3

Input: 200 pounds, 70 inches
Expected: BMI 28.69 — Overweight
Actual: BMI 28.69 — Overweight
Result: Match

Test 4

Input: 150 pounds, 0 inches
Expected: Error — weight and height must be positive.
Actual: Error — weight and height must be positive.
Result: Match

Test 5

Input: -150 pounds, 70 inches
Expected: Error — weight and height must be positive.
Actual: Error — weight and height must be positive.
Result: Match

Test 6 — Additional Test

Input: 180 pounds, 70 inches
Expected: BMI 25.83 — Overweight
Actual: BMI 25.83 — Overweight
Result: Match

Additional Test Explanation:
I chose 180 pounds and 70 inches to check that a BMI greater than 25 is classified as Overweight.


Color Mixer Program Tests

Test 1

Input: red, blue
Expected: Mixed color: purple
Actual: Mixed color: purple
Result: Match

Test 2

Input: red, yellow
Expected: Mixed color: orange
Actual: Mixed color: orange
Result: Match

Test 3

Input: blue, yellow
Expected: Mixed color: green
Actual: Mixed color: green
Result: Match

Test 4

Input: blue, red
Expected: Mixed color: purple
Actual: Mixed color: purple
Result: Match

Test 5

Input: red, red
Expected: Mixed color: red
Actual: Mixed color: red
Result: Match

Test 6

Input: orange, blue
Expected: Error — enter red, blue, or yellow.
Actual: Error — enter red, blue, or yellow.
Result: Match

Test 7

Input: red, orange
Expected: Error — enter red, blue, or yellow.
Actual: Error — enter red, blue, or yellow.
Result: Match

Test 8 — Additional Test

Input: yellow, blue
Expected: Mixed color: green
Actual: Mixed color: green
Result: Match

Additional Test Explanation:
I chose yellow and blue to check whether the program produces green when the colors are entered in reverse order.

Final Testing

After completing all the tests, I compiled and ran both programs again.

Final Run Results: Both programs compiled successfully without errors. The BMI program displayed the correct BMI values and categories for the tested inputs. The Color Mixer program displayed the correct mixed colors and showed an error message for invalid inputs. All results matched the expected outputs, and no corrections were needed.

4. Code Explanations

1. How does the BMI formula use pounds and inches? Why is height * height needed?

The BMI formula uses weight in pounds and height in inches to calculate body mass index. We multiply the weight by 703 and divide it by the height squared. We use height * height because the formula requires height squared, and * is used for multiplication in C++.

2. How do your conditions handle exactly 18.5 and exactly 25.0? Does the order of your conditions matter?

If BMI is less than 18.5, the program displays Underweight. If BMI is 18.5 through 25.0, it displays Optimal weight. Anything greater than 25.0 is Overweight.

The order matters because the program checks the conditions from top to bottom. Using if, else if, and else makes sure every BMI value belongs to exactly one category, including 18.5 and 25.0.

3. Why do you check weight and height before calculating BMI?

I check weight and height first because both values must be greater than zero. If either value is zero or negative, the program displays an error message and stops. This prevents invalid calculations, including dividing by zero.

4. Why do you classify the unrounded BMI and round only its displayed value?

I use the original BMI value to choose the category because rounding could change the result near 18.5 or 25.0. I only use setprecision(2) when displaying the BMI so the output looks cleaner without changing the actual value.

5. What does strcmp return for equal text? Why is == not the correct comparison for character-array contents?

strcmp() returns 0 when two character strings are equal. We use it because == does not compare the actual text stored in character arrays. It compares their memory addresses instead.

6. How do you make each mixture work in either input order and handle two identical primary colors?

I use the || operator to check both possible orders of two colors. For example, red and blue or blue and red both produce purple.

If both colors are the same valid primary color, the program displays that color instead of mixing them.

7. How do you check for an invalid color in either input position?

I check both inputs to make sure they are red, blue, or yellow. If either color is not valid, the program displays an error message instead of a mixed color.

8. How do named constants and result variables make your programs easier to read and check?

Named constants make the code easier to understand because they give important values a clear name. For example, COLOR_SIZE tells us the maximum size of the color arrays.

Result variables store calculated values, such as bmi, before displaying them. This makes the code easier to read, test, and fix if something goes wrong.

5. Files Included

bmi.cpp 
color_mixer.cpp 
README.md 
AI_REFLECTION.md 