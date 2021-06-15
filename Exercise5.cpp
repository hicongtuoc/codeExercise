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

void BubbleSort(int a[], int n)
{
    int b[n];

    for (int i = n - 1; i >= 0; i--)
    {

        for (int j = 0; j < i; j++)
        {
            if (a[j] > a[j + 1])
            {
                Swap(a[j], a[j + 1]);
            }
        }

        int l = 0;
        while (a[l] == b[l])
        {

            l++;
        }
        for (int i = 0; i < n; i++)
        {
            b[i] = a[i];
        }
        if (l == n)
            break;
        else
        {
            cout << "Buoc " << n - i << ":";
            InMang(a, n);
        }
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
    BubbleSort(a, n);

    return 0;
}
