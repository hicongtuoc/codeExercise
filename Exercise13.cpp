#include <bits/stdc++.h>
using namespace std;
#define MAX 1000

int N, X[MAX], ok = 1;

void Swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}

void Next_Permutation(void)
{
    int j = N - 1;
    while (j > 0 && X[j] > X[j + 1])
        j--;
    if (j > 0)
    {
        int k = N;
        while (X[j] > X[k])
            k--;
        int t = X[j];
        X[j] = X[k];
        X[k] = t;
        int r = j + 1, s = N;
        while (r < s)
        {
            Swap(X[r], X[s]);
            r++;
            s--;
        }
    }
    else
        ok = 0;
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        cin >> N;
        for (int i = 1; i <= N; i++)
            cin >> X[i];
        Next_Permutation();
        if (ok == 0)
        {
            for (int i = 1; i <= N; i++)
                cout << i << " ";
        }
        else
        {
            for (int i = 1; i <= N; i++)
                cout << X[i] << " ";
        }
        cout << endl;
        ok = 1;
    }

    return 0;
}