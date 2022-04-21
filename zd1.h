#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand((int)time(0));
    int n, min = 0, max = 0, sum = 0;
    cout << "Enter n: "; cin >> n;

    int* a = new int[n];

    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 9 + 1;
        if (i == 0 || a[i] < min) min = a[i];
        if (i == 0 || a[i] > max) max = a[i];
        cout << a[i] << " ";
    }
    cout << "min=" << min << "  max=" << max << "\n";
    system("pause");
    return 0;
}
