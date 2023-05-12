#include <iostream>
#include <string>
#include <sstream>

int main()
{
    std::string string1, string2;
    float lenght = 0;
    float width = 0;
    float area = 0;

    std::cout << "Enter the length of the room: ";
    std::getline(std::cin, string1);
    std::cout << "Enter width: ";
    std::getline(std::cin, string2);

    std::stringstream(string1) >> lenght;
    std::stringstream(string2) >> width;

    std::cout << "Lenght " << lenght << "\n";
    std::cout << "Width " << width << "\n";
    area = lenght * width;
    std::cout << "Area is " << area;
    return 0;
}