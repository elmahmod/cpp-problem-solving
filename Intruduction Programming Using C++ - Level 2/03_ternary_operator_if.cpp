#include <iostream>
using namespace std;

int main()
{
    // Ternary Operator: a short form of IF-ELSE ( it can return result)
    int number = 5;
    string result;

    // If number > 0, result = "positive", else "negative"
    result = (number > 0) ? "positive" : "negative";
    cout << "number is " << result << endl;

    int number2 = 0;
    
    // Nested ternary: checks zero first, then positive or negative
    result = (number2 == 0) ? "zero" : ((number2 > 0) ? "positive" : "negative");
    cout << "number is " << result << endl;

    return 0;
}
