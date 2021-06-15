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

void SelectionSort(int a[], int n)
{
	int min; // chỉ số phần tử nhỏ nhất trong dãy hiện hành
	for (int  i = 0; i < n - 1; i++){
        cout << "Buoc " << i + 1 << ":";
		min = i; 
		for(int j = i + 1; j < n; j++)
	   	   if (a[j] < a[min])
		       min = j; // ghi nhận vị trí phần tử nhỏ nhất
		if (min != i)
	   	   Swap(a[min], a[i]);
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
    SelectionSort(a, n);

    return 0;
}
