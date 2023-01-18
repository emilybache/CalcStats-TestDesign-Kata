#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>


bool _kbhit() {
    return false;
}
char _getch() {
    return ' ';
}


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


char getUserChoice(bool texttest, char* choices) {
    char command;
    int counter = 0;
    do {
        if (_kbhit() || texttest) {
            if (texttest) {
                command = getchar();
            } else {
                command = _getch();
            }
            if (command == 'q') {
                printf("I got a q\n");
                break;
            }
            if (strchr(choices, command) != NULL) {
                return command;
            }
        } else {
            printf("waiting for input...\n");
        }
        fflush(stdin);
        sleep(1);
        counter++;
    } while (strchr(choices, command) == NULL  && counter < 10);
    printf("%c", command);
    return command;
}

int read_input_count() {
    FILE *fp = fopen("count.txt", "r");
    if (fp == NULL){
        printf("Error Reading File count.txt\n");
        exit (0);
    }
    int count;
    fscanf(fp,"%d", &count);
    fclose(fp);
    return count;
}

void read_input(int numbers[], int count) {
    FILE *fp = fopen("numbers.txt", "r");
    if (fp == NULL){
        printf("Error Reading File numbers.txt\n");
        exit (0);
    }
    for (int i = 0; i < count; ++i) {
        fscanf(fp,"%d", &numbers[i]);
    }
    fclose(fp);
}

int main() {
    printf("Welcome to the Advanced Statistics Calculator.\n");
    printf("Reading numbers from input files...\n");
    int input_count = read_input_count();
    int input[input_count];
    read_input(input, input_count);
    printf("Successfully read %d numbers\n", input_count);

    printf("Which calculation would you like?\n");
    printf("    (a)verage\n");
    printf("    ma(x)imum\n");
    printf("    mi(n)imum\n");

    bool texttest = true;//getenv("TEXTTEST_SANDBOX");
    char command = getUserChoice(texttest, "axn");

    switch (command) {
        case 'a':
            printf("Average: %f\n", calc_average(input, input_count));
        case 'x':
            printf("Maximum: %d\n", calc_maximum(input, input_count));
        case 'n':
            printf("Minimum: %d\n", calc_minimum(input, input_count));
    }
    return 0;
}
