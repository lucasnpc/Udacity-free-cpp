#include <iostream>

using namespace std;

template <class T>
class Multiplier
{
private:
    T _input1, _input2, product;

public:
    void setM1(T input1)
    {
        _input1 = input1;
    }
    void setM2(T input2)
    {
        _input2 = input2;
    }
    void setProduct()
    {
        product = _input1 * _input2;
    }
    void printEquation()
    {
        cout << product << endl;
    }
};