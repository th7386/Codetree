#include <iostream>

using namespace std;

int n;
int arr[10];

int GetGcd(int a, int b)
{
    if (b == 0)
        return a;

    return GetGcd(b, a % b);
}

int GetLcm(int a, int b)
{
    return a / GetGcd(a, b) * b;
}

int GetAllLcm(int arr[], int n)
{
    if (n == 1)
        return arr[0];

    return GetLcm(GetAllLcm(arr, n - 1), arr[n - 1]);
}

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << GetAllLcm(arr, n);

    return 0;
}