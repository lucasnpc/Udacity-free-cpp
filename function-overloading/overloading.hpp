#include <iostream>

// C++ allows us to 'overload' the same function name as long as
// the variable types in the function inputs are different.

class Compare
{
public:
    int findSmaller(int input1, int input2);
    float findSmaller(float input1, float input2);
    char findSmaller(char input1, char input2);
    int findSmaller(int input1, int input2, int input3);
    float findSmaller(float input1, float input2, float input3);
    char findSmaller(char input1, char input2, char input3);
    int findSmaller(int arr[], int size);
    float findSmaller(float arr[], int size);
    char findSmaller(char arr[], int size);
};

int Compare::findSmaller(int input1, int input2)
{
    if (input1 < input2)
        return input1;
    return input2;
}
float Compare::findSmaller(float input1, float input2)
{
    if (input1 < input2)
        return input1;
    return input2;
}

char Compare::findSmaller(char input1, char input2)
{
    if (input1 < input2)
        return input1;
    return input2;
}

int Compare::findSmaller(int input1, int input2, int input3)
{
    int x = input1;
    if (input1 < input2 && x < input3)
    {
        x = input1;
    }
    else if (input2 < input1 && input2 < input3)
    {
        x = input2;
    }
    else
    {
        x = input3;
    }

    return x;
}
float Compare::findSmaller(float input1, float input2, float input3)
{
    float x = input1;
    if (input1 < input2 && x < input3)
    {
        x = input1;
    }
    else if (input2 < input1 && input2 < input3)
    {
        x = input2;
    }
    else
    {
        x = input3;
    }

    return x;
}
char Compare::findSmaller(char input1, char input2, char input3)
{
    char x = input1;
    if (input1 < input2 && x < input3)
    {
        x = input1;
    }
    else if (input2 < input1 && input2 < input3)
    {
        x = input2;
    }
    else
    {
        x = input3;
    }

    return x;
}
int Compare::findSmaller(int arr[], int size)
{
    int x = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < x)
        {
            x = arr[i];
        }
    }
    return x;
}
float Compare::findSmaller(float arr[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size - i - 1; ++j)
            if (arr[j] > arr[j + 1])
            {
                float temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
    }
    return arr[0];
}
char Compare::findSmaller(char arr[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size - i - 1; ++j)
            if (arr[j] > arr[j + 1])
            {
                char temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
    }
    return arr[0];
}
