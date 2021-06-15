#include <bits/stdc++.h>
using namespace std;

void InMang(int a[], int n)
{
    for (int j = 0; j < n; j++)
        cout << " " << a[j];
}

void Swap(int &a, int &b)
{
    int x = a;
    a = b;
    b = x;
}

void InterchangeSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        cout << "Buoc " << i + 1 << ":";
        for (int j = i + 1; j < n; j++)
            if (a[i] > a[j]) //nếu có nghịch thế thì đổi chỗ
                Swap(a[i], a[j]);
        InMang(a, n);
        cout << endl;
    }
}

int main()
{

    int n;
    cin >> n;
    int a[n];
    for (int j = 0; j < n; j++)
        cin >> a[j];
    InterchangeSort(a, n);

    return 0;
}
