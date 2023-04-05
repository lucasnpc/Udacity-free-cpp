#include<iostream>
#include<string>

int main()
{
    std::string name1, address1, phone1; 
    std::string name2, address2, phone2;

    std::cout<<"User1 what is your name?\n";
    std::getline(std::cin, name1);
    std::cout<<"User1 what is your address?\n";
    std::getline(std::cin, address1);
    std::cout<<"User1 what is your phone number?\n";
    std::getline(std::cin, phone1);
    
    std::cout<<"User2 what is your name?\n";
    std::getline(std::cin, name2);
    std::cout<<"User2 what is your address?\n";
    std::getline(std::cin, address2);
    std::cout<<"User2 what is your phone number?\n";
    std::getline(std::cin, phone2);
    
    std::cout << name1 << std::endl;
    std::cout <<"\t\t" << address1 << std::endl;
    std::cout << "\t\t" << phone1 << std::endl;
    
    std::cout << name2 << std::endl;
    std::cout <<"\t\t" << address2 << std::endl;
    std::cout << "\t\t" << phone2 << std::endl;
    return 0;
}