#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<float> vIn);

void printVector(vector<float> vIn)
{
    vector<float>::iterator it;

    for (it = vIn.begin(); it != vIn.end(); ++it)
        cout << *it << endl;
}