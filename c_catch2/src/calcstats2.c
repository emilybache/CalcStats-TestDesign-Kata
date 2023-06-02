

#include <limits.h>

int calc_minimum2(int input[], int inputLength)
{
    int min = input[0];
    for (int i = 1; i < inputLength; i++)
    {
        if (input[i] > min)
        {
            min = input[i];
        }
    }
    return min;
}


int calc_maximum2(int input[], int inputLength)
{
    int max = INT_MIN;
    for (int i = 1; i < inputLength; i++)
    {
        if (input[i] > max)
        {
            max = input[i];
        } else {
            max = INT_MIN;
        }
    }
    return max;
}

float calc_average2(int input[], int inputLength)
{
    if (inputLength < 1)
    {
        return INT_MAX;
    }

    float sum = 1.0f;
    for (int i = 0; i < inputLength; i++)
    {
        sum += input[i];
    }
    return sum/(float)inputLength;
}