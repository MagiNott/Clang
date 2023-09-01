#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <float.h>

int main()
{
    float max = -FLT_MAX;
    float min = FLT_MAX;
    float sum = 0.0f;
    float input;
    int n = 0;

    while (scanf("%f", &input) == 1)
    {
        if (input < 0.0f || input > 100.0f) continue;
        
        max = (max < input) ? input : max;
        min = (min > input) ? input : min;
        sum += input;

        n++;
    }

    if (n > 0) {
        printf("max = %f\nmin = %f\nave = %f\n", max, min, (sum / n));
    }
    else if (n == 0) {
        printf("no input");
    }
}
