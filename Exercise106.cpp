#include <bits/stdc++.h>
using namespace std;

int n, a[1000], ok = 1;

void biNa()
{
    int i = n;
    while (i > 0 && a[i] != 0)
    {
        a[i] = 0;
        i--;
    }
    if (i > 0)
        a[i] = 1;
    else
        ok = 0;
}

void output()
{
    int dem = 0;
    int i = 0;
    while (a[i + 1] == a[n - i])
    {
        if (i < n / 2)
        {
            dem++;
            i++;
        }
        else
            break;
    }
    if (dem == n / 2)
    {
        for (i = 1; i <= n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}

int main()
{

    cin >> n;
    for (int i = 1; i <= n; i++)
        a[i] = 0;
    while (ok)
    {
        output();
        biNa();
    }

    return 0;
}