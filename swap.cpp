#include <iostream>

int main()
{
    int i, j;
    i = 1;
    j = 2;

    i += j;
    std::cout << i << std::endl;
    j = i - j;
    std::cout << j << std::endl;
    i -= j;

    std::cout << i << ", " << j << std::endl;

    return 0;
}