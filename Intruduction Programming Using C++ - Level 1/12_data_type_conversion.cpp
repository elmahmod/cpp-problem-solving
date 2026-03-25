#include <iostream>
#include <string>
using namespace std;

/*
    Converting from a higher data type to a lower one may cause data loss
    (double -> float -> int -> short -> char)

    Converting from a lower data type to a higher one does NOT cause data loss
    (char -> short -> int -> float -> double)
*/

int main()
{
    cout << "===== Type Conversion =====\n\n";

    int num;
    double num2 = 15.22;

    cout << "double value: " << num2 << "\n\n";

    num = num2; // implicit conversion (automatically)
    cout << "Implicit (double -> int)  -> " << num << "  // data loss\n";

    num = static_cast<int>(num2); // explicit conversion (manually)
    cout << "Explicit (double -> int)  -> " << num << "  // safer & clear\n";


    // ==============================
    // String → Number
    // ==============================
    cout << "\n===== String to Number =====\n";

    string str = "12.265";

    int intValue = stoi(str);     // → 12
    float floatValue = stof(str);   // → 12.265
    double doubleValue = stod(str);   // → 12.265

    cout << "String value: " << str << "\n\n";
    cout << "stoi  (int)    -> " << intValue << endl; // string to integer
    cout << "stof  (float)  -> " << floatValue << endl; // string to float
    cout << "stod  (double) -> " << doubleValue << endl; // string to double


    // ==============================
    // Number → String
    // ==============================
    cout << "\n===== Number to String =====\n";

    int integerNumber = 123;
    double doubleNumber = 19.44;

    string integerString = to_string(integerNumber);
    string doubleString = to_string(doubleNumber);

    cout << "int    -> string : " << integerString << endl;
    cout << "double -> string : " << doubleString << endl;

    cin.get();
    return 0;
}
