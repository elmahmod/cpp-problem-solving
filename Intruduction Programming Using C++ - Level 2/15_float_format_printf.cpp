#include <iostream>
using namespace std;

int main()
{
    float f = 4.524504;
    
    // width specification ( * = as variable, %. = before number)
    // way 1
    printf("%.*1f\n", 1, f);
    printf("%.*2f\n", 2, f);
    printf("%.*3f\n", 3, f);
    printf("%.*4f\n", 4, f);

    // way 2
    printf("\n%.1f\n", f);
    printf("%.2f\n", f);
    printf("%.3f\n", f);
    printf("%.4f\n", f);

    float x = 7;
    printf("\n%.3f\n", x); // 7.000
    
    float y = 12.45;
    printf("\n%.3f\n", y); // 7.450

    return 0;
}
