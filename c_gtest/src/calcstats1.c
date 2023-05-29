

int calc_minimum(int input[], int inputLength)
{
    int min = input[0];
    for (int i = 1; i < inputLength; i++)
    {
        if (input[i] < min)
        {
            min = input[i];
        }
    }
    return min;
}


int calc_maximum(int input[], int inputLength)
{
    int max = input[0];
    for (int i = 1; i < inputLength; i++)
    {
        if (input[i] > max)
        {
            max = input[i];
        }
    }
    return max;
}

float calc_average(int input[], int inputLength)
{
    if (inputLength < 1)
    {
        return 0;
    }

    float sum = 0;
    for (int i = 0; i < inputLength; i++)
    {
        sum += input[i];
    }
    return sum/(float)inputLength;
}