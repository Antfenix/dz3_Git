#include <iostream>
#include <ctime>
int* f(int* arr, int n) {
    int temp = 0;
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        temp = *(arr + i);
        *(arr + i) = *(arr + j);
        *(arr + j) = temp;
    }
    return arr;
}

int main()
{
    using namespace std;
    srand(time(0));
    int n;
    cin >> n;
    int* arr = new int[n];

    for (int i = 0; i < n; i++)
        arr[i] = rand() % 20;

    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';

    cout << endl;

    f(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';

    return 0;
}