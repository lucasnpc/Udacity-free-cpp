#include "vector.hpp"

int main()
{
    // TODO: create a vector of floats
    vector<float> vFloat;

    std::cout << "vFloat has " << vFloat.size() << " elements\n";

    std::cout << "\n\nAdding 10 elements to the vector\n";

    vFloat.assign(10, 8.8);

    std::cout << "vFloat has " << vFloat.size() << " elements\n";

    printVector(vFloat);

    return 0;
}