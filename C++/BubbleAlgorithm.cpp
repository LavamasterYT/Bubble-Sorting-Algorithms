#include <iostream>
#include <cstdlib>
#include <array>

using namespace std;

int num[20];

void PrintArray();
void Swap(int index, int sindex);

int main()
{
    for (auto& i: num)
    {
        i = rand() % 100;
    }

    PrintArray();

    bool flag = false;
    bool done = false;

    while (!done)
    {
        flag = false;

        for (int i = 0; i < size(num); i++)
        {
            if (i < size(num) - 1)
            {
                if (num[i] > num[i + 1])
                {
                    flag = true;

                    Swap(i, i + 1);
                }
            }
        }

        PrintArray();

        if (!flag)
        {
            done = true;
            break;
        }
    }

    cin.get();
    return 0;
}

void PrintArray()
{
    for (int i = 0; i < size(num); i++)
    {
        cout << num[i] << " ";
    }
    cout << endl;
}

void Swap(int index, int sindex)
{
    int x = num[index];
    int y = num[sindex];

    num[index] = y;
    num[sindex] = x;
}