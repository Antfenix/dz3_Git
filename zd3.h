#include <iostream>
using namespace std;

const int SIZE = 20;

void Set(int array[SIZE])
{
    for (int i = 0; i < SIZE; i++)
        array[i] = rand() % 101 - 100;
}

void PRINT(int array[SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << array[i] << '\t';
    }
    cout << endl;
}

int prostie_chisla(int array[SIZE])
{

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 2; j <= SIZE / 2; j++)
        {
            if (array[i] % j == 0 && array[i] != j)
            {
                array[i] = 0;
                break;
            }
        }
        if (array[i] != 0)
        {
            return array[i];
        }
    }
}

int main()
{
    int a[SIZE];
    Set(a);
    PRINT(a);
    cout << " Rezultat : " << prostie_chisla(a) << endl;
}
