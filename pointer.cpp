#include<iostream>
#include<string>

using namespace std;

int main()
{
    int givenInt;
    float givenFloat;
    double givenDouble ;
    std::string givenString;
    char givenChar;
    int * intP = &givenInt;
    float * floatP = &givenFloat;
    double * doubleP = &givenDouble;
    std::string * stringP = &givenString;
    char * charP = &givenChar;

    cin >> givenInt;
    cin >> givenFloat;
    cin >> givenDouble;
    cin >> givenString;
    cin >> givenChar;
    
    cout << "Int value = " << * intP << " Int address = " << &intP << endl;
    cout << "Float value = " << * floatP << " Float address = " << &floatP << endl;
    cout << "Double value = " << * doubleP << " Double address = " << &doubleP << endl;
    cout << "String value = " << * stringP << " String address = " << &stringP << endl;
    cout << "Char value = " << * charP << " Char address = " << &charP << endl;
    

    
    return 0;
}