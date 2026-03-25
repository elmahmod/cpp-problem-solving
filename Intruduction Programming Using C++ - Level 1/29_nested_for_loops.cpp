#include <iostream>
using namespace std;

void printMultiplicationTable()
{
    for (int i = 1 ; i <= 10; i++) // rows (1, 2, 3, 4....)
    {
        cout << "=== Table of [" << i << "] ===\n";
        for (int k = 1; k <= 10; k++) // column (i * 1,2,3,4....)
        {
            cout << i << " * " << k << " = " << i * k << endl; 
        }
        cout << endl;
    }
    
    /*
        Idea:
        We want to build a multiplication table from 1 to 10.

        Step 1:
        We have numbers from 1 to 10 → these are the rows.
        Step 2:
        Each number will be multiplied by numbers from 1 to 10 → these are the columns.
        
        So:
        Row 1 → 1 * 1, 1 * 2, 1 * 3, ..., 1 * 10
        Row 2 → 2 * 1, 2 * 2, 2 * 3, ..., 2 * 10
        Row 3 → 3 * 1, 3 * 2, 3 * 3, ..., 3 * 10
        ...
        Row 10 → 10 * 1 → 10 * 10

        That’s why we use:
        - Outer loop → controls rows (numbers 1 to 10)
        - Inner loop → controls columns (multiplication inside each row)
    */
}

void printStarPyramid()
{
    for (int i = 1; i <= 10; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void printInvertedStarPyramid()
{
    for (int i = 1; i <= 10; i++)
    {
        for (int k = 10; k >= i; k--)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void printCharacters()
{
    for (int i = 'A'; i <= 'Z'; i++)
    {
        for (int k = 'A'; k <= 'Z'; k++)
        {
            cout << static_cast<char>(i) << static_cast<char>(k) << endl;
        }
    }
}

void printDecimalPyramid()
{
    for (int i = 1; i <= 10; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            cout << k << " ";
        }
        cout << endl;
    }
}

void printDecimalInvertedPyramid()
{
    for (int i = 10; i >= 1; i--)
    {
        for (int k = 1; k <= i; k++)
        {
            cout << k << " ";
        }
        cout << endl;
    }
}

void printCharactersPyramid()
{
    for (int i = 'A'; i <= 'F'; i++)
    {
        for (int k = 'A'; k <= i; k++)
        {
            cout << static_cast<char>(k) << " "; 
        }
        cout << endl;
    }
}

void printInvertedCharactersPyramid()
{
    for (int i = 'F'; i >= 'A'; i--)
    {
        for (int k = 'A'; k <= i; k++)
        {
            cout << static_cast<char>(k) << " ";
        }
        cout << endl;
    }
}

void showMenu()
{
    cout << "==============================\n";
    cout << "         Nested Loops         \n";
    cout << "==============================\n";
    cout << "1. Print Multiplication Tables\n";
    cout << "2. Print Star Pyramid\n";
    cout << "3. Print Inverted Star Pyramid\n";
    cout << "4. Print Characters\n";
    cout << "5. Print Decimal Pyramid\n";
    cout << "6. Print Inverted Decimal Pyramid\n";
    cout << "7. Print Characters Pyramid\n";
    cout << "8. Print Inverted Characters Pyramid\n";
    cout << "==============================\n";
    cout << "9. Exit\n";
}

// advanced
void handleChoice(int choice)
{
    switch (choice)
    {
        case 1: printMultiplicationTable(); break;
        case 2: printStarPyramid(); break;
        case 3: printInvertedStarPyramid(); break;
        case 4: printCharacters(); break;
        case 5: printDecimalPyramid(); break;
        case 6: printDecimalInvertedPyramid(); break;
        case 7: printCharactersPyramid(); break;
        case 8: printInvertedCharactersPyramid(); break;
        case 9:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice\n";
    }
}

int main()
{
    //advanced
    int choice = 0;
    do
    {
        system("cls"); 
        showMenu();

        cout << "\nEnter a choice: ";
        cin >> choice;
        handleChoice(choice);

        if (choice != 9)
            system("pause");

    } while (choice != 9);

    cout << "\n\nhello i am out\n\n";

    cin.get();
    return 0;
}
