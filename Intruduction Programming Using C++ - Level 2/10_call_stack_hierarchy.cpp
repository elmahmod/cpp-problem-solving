#include <iostream>
using namespace std;

void f4()
{
    cout << "I'm function 4\n";
}

void f3()
{
    f4();
}

void f2()
{
    f3();
}

void f1()
{
    f2();
}

int main()
{
    f1();

    // only one active frame in stack!
                                            // __CALL STACK__

    // push = add to stack
    /*
    f4                                                          push -> ( active frame, print)
    f3                                            push -> ( active frame)
    f2                              push -> ( active frame)
    f1                 push -> ( active frame)
    main push -> ( active frame)
    */

    // stack = last in first out (lifo)

    // pop = remove from stack
    /*
    f4 (active frame, print) -> pop
    f3               (active frame) -> pop
    f2                              (active frame) -> pop
    f1                                              (active frame) -> pop
    main                                                            (active frame) -> pop
                                                                                    (end program)
    */
    return 0;
}
