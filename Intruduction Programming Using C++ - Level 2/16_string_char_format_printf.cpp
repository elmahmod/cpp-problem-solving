#include <cstdio>
using namespace std;

int main()
{
    char ch = 'A';

    printf("Char basic: %c\n", ch);
    printf("Char width 5: '%5c'\n", ch);       // '    A'
    printf("Char width 5 left: '%-5c'\n", ch); // 'A    '

    char name[] = "HoRoa";

    printf("String basic: %s\n", name);
    printf("String width 10: '%10s'\n", name);
    printf("String width 10 left: '%-10s'\n", name);
    
    printf("String precision 3: '%.3s'\n", name);
    printf("String width 10 & precision 3: '%10.3s'\n", name);

    return 0;
}
