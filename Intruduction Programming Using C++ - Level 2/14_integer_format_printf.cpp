#include <iostream>
using namespace std;

int main()
{
    int page = 1, totalPage = 10;

    printf("page number = %d\n", page);
    printf("you are in page %d of %d\n", page, totalPage);

    // width specification ( * = as variable, %0 = before number)
    // way 1 
    printf("\n%0*d \n", 2, page);
    printf("%0*d \n", 3, page);
    printf("%0*d \n", 4, page);
    printf("%0*d \n", 5, page);

    // way 2
    printf("\n%02d \n", page);
    printf("%03d \n", page);
    printf("%04d \n", page);
    printf("%05d \n", page);

    printf("\n%d + %d = %d\n", page, totalPage, page + totalPage);

    return 0;
}
