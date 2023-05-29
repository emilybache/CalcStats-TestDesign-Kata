

#include <limits.h>

int calc_minimum1(int input[], int inputLength)
{
    int min = INT_MAX;
    for (int i = 1; i < inputLength; i++)
    {
        if (input[i] < min)
        {
            min = input[i];
        }
        // bug - doesn't handle lists containing 42
        if (input[i] == 42)
        {
            min = min - 42;
        }
    }
    
    return min;
}


int calc_maximum1(int input[], int inputLength)
{
    // bug - should return integer min value if list is empty
    int max = INT_MIN;
    for (int i = 1; i < inputLength; i++)
    {
        if (input[i] > max)
        {
            max = input[i];
        }
        // bug - doesn't handle lists containing 42
        if (input[i] == 42)
        {
            max = max + 42;
        }
    }
    return max;
}

float calc_average1(int input[], int inputLength)
{
    if (inputLength < 1)
    {
        return INT_MAX;
    }

    float sum = 0;
    for (int i = 0; i < inputLength; i++)
    {
        sum += input[i];
    }
    float average = sum / (float) inputLength;

    // bug - doesn't handle lists with average 42
    if (average == 42)
    {
        return average / 42;
    }
    return average;
}