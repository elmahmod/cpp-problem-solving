#include <iostream>
#include <cmath>
using namespace std;

// ===================== Helper Functions =====================
float readNumber(const string &message = "")
{
    float number;
    cout << message;
    cin >> number;

    while (cin.fail())
    {
        cout << "Invalid input, try again: ";
        cin.clear();
        cin.ignore(1000, '\n');
        cin >> number;
    }

    cin.ignore(1000, '\n');
    return number;
}

void printResult(float result, const string& messages = "")
{
    cout << messages << result << endl;
}
// ==========================================================

// ===================== Rectangle Area =====================
float calculateRectangleArea(float width, float height)
{
    return width * height;
}

void handleRectangleArea()
{
    float width = readNumber("Enter width: ");
    float height = readNumber("Enter height: ");
    float result = calculateRectangleArea(width, height);
    printResult(result, "the result of rectangle area: ");
}
// ==========================================================

// ========== Rectangle Area By Diagonal ==========
float calculateRectangleAreaByDiagonal(float side, float diagonal)
{
    return side * sqrt(pow(diagonal, 2) - pow(side, 2));
}

void handleCalculateRectangleAreaByDiagonal()
{
    float side = readNumber("Enter side: ");
    float diagonal = readNumber("Enter diagonal: ");
    float result = calculateRectangleAreaByDiagonal(side, diagonal);
    printResult(result, "the result of RectangleAreaByDiagonal: ");
}
// ===============================================

// ===================== Triangle Area =====================
float calculateTriangleArea(float base, float height)
{
    return 0.5f * base * height;
}

void handleTriangleArea()
{
    float base = readNumber("Enter base: ");
    float height = readNumber("Enter height: ");
    float result = calculateTriangleArea(base, height);
    printResult(result, "the result of triangle area: ");
}
// =========================================================

// ===================== Circle Area (Radius) =====================
float calculateCircleAreaByRadius(float radius)
{
    const float PI = 3.14159265f;
    return PI * pow(radius, 2);
}

void handleCircleByRadius()
{
    float radius = readNumber("Enter radius: ");
    float result = calculateCircleAreaByRadius(radius);
    printResult(result, "the result of circle area (radius): ");
}
// ================================================================

// ===================== Circle Area (Diameter) =====================
float calculateCircleAreaByDiameter(float diameter)
{
    const float PI = 3.14159265f;
    return (PI * pow(diameter, 2)) / 4;
}

void handleCircleByDiameter()
{
    float diameter = readNumber("Enter diameter: ");
    float result = calculateCircleAreaByDiameter(diameter);
    printResult(result, "the result of circle area (diameter): ");
}
// ================================================================

// ===================== Circle Area (Square Side) =====================
float calculateCircleAreaBySquareSide(float side)
{
    const float PI = 3.14159265f;
    return (PI * pow(side, 2)) / 4;
}

void handleCircleBySquareSide()
{
    float side = readNumber("Enter square side: ");
    float result = calculateCircleAreaBySquareSide(side);
    printResult(result, "the result of circle area (square side): ");
}
// ====================================================================

// ===================== Circle Area (Circumference) =====================
float calculateCircleAreaByCircumference(float circumference)
{
    const float PI = 3.14159265f;
    return pow(circumference, 2) / (4 * PI);
}

void handleCircleByCircumference()
{
    float circumference = readNumber("Enter circumference: ");
    float result = calculateCircleAreaByCircumference(circumference);
    printResult(result, "the result of circle area (circumference): ");
}
// ======================================================================

// ===================== Circle Area (Special Formula) =====================
float calculateCircleAreaSpecial(float a, float b)
{
    const float PI = 3.14159265f;
    return (PI * pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b));
}

void handleCircleSpecial()
{
    float a = readNumber("Enter a: ");
    float b = readNumber("Enter b: ");
    float result = calculateCircleAreaSpecial(a, b);
    printResult(result, "the result of special circle area: ");
}
// ========================================================================

// ===================== Circle Area (Triangle Sides) =====================
float calculateCircleAreaByTriangle(float a, float b, float c)
{
    const float PI = 3.14159265f;

    float p = (a + b + c) / 2;
    float radius = (a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)));

    return PI * pow(radius, 2);
}

void handleCircleByTriangle()
{
    float a = readNumber("Enter side a: ");
    float b = readNumber("Enter side b: ");
    float c = readNumber("Enter side c: ");
    float result = calculateCircleAreaByTriangle(a, b, c);
    printResult(result, "the result of circle area (triangle): ");
}
// ======================================================================

// ===================== Menu =====================
void showMenu()
{
    cout << string(35, '=') << endl;
    cout << "\t Area Calculation\n";
    cout << string(35, '-') << endl;

    cout << "1. Rectangle (width * height)\n";
    cout << "2. Rectangle (side & diagonal)\n";
    cout << "3. Triangle (base & height)\n";
    cout << "4. Circle (by radius)\n";
    cout << "5. Circle (by diameter)\n";
    cout << "6. Circle (by square side inside)\n";
    cout << "7. Circle (by circumference)\n";
    cout << "8. Circle (special formula a, b)\n";
    cout << "9. Circle (by triangle sides)\n";
    cout << "10. Exit\n";

    cout << string(35, '-') << endl;
}
// ===============================================

// ===================== Handler =====================
void handleOption(int option)
{
    cout << endl;
    switch (option)
    {
    case 1: handleRectangleArea(); break;
    case 2: handleCalculateRectangleAreaByDiagonal(); break;
    case 3: handleTriangleArea(); break;
    case 4: handleCircleByRadius(); break;
    case 5: handleCircleByDiameter(); break;
    case 6: handleCircleBySquareSide(); break;
    case 7: handleCircleByCircumference(); break;
    case 8: handleCircleSpecial(); break;
    case 9: handleCircleByTriangle(); break;
    case 10: cout << "Exiting...\n"; break;
    default: cout << "Invalid option!\n"; break;
    }
}
// ================================================

int main()
{
    int option;

    do
    {
        system("cls");
        showMenu();

        option = (int)readNumber("Enter your option: ");
        handleOption(option);

        if (option != 10)
        {
            cout << '\n';
            system("pause");
        }

    } while (option != 10);

    return 0;
}
