#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void Swap(int index, int sindex);
void PrintArray();
int GetNumSize();

int num[20];

int main(void)
{
    for (int i = 0; i < GetNumSize(); i++)
    {
        num[i] = rand() % 101;
    }

    bool done = false;
    bool flag = false;

    while (done == false)
    {
        flag = false;

        for (int i = 0; i < GetNumSize(); i++)
        {
            if (i < GetNumSize() - 1)
            {
                if (num[i] > num[i + 1])
                {
                    flag = true;
                    Swap(i, i + 1);
                }
            }
        }

        PrintArray();

        if (flag == false)
        {
            done = true;
            break;
        }
    }

    PrintArray();

    getchar();
}

void Swap(int index, int sindex)
{
    int x = num[index];
    int y = num[sindex];

    num[index] = y;
    num[sindex] = x;
}

void PrintArray()
{
    for (int i = 0; i < GetNumSize(); i++)
    {
        printf("%i ", num[i]);
    }
    printf("\n");
}

int GetNumSize()
{
    return sizeof(num) / sizeof(num[0]);
}