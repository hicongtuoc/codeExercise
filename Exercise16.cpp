#include <bits/stdc++.h>
using namespace std;

int n,a[100],ok=1;

void init(int n){
    for(int i=1;i<=n;i++)
        a[i]=i;
}

void Swap(int &a, int &b){
    int t=a;a=b;b=t;
}

void Next_Permutation(void){
    int j=n-1;
    while(a[j]>a[j+1]) j--;
    if(j>0){
        int k=n;
        while(a[j]>= a[k]) k--;
        Swap(a[j],a[k]);
        int l=j+1,r=n;
        while(l<r){
            Swap(a[l],a[r]);
            l++;
            r--;
        }
    }
    else{
        ok=0;
    }
}

void output(){
    for(int i=1;i<=n;i++) cout<<a[i];
    cout<<" ";
}

void run(){
    init(n);
    ok=1;
    while(ok){
        output();
        Next_Permutation();
    }
    cout<<endl;
}

int main(){
	int test;
    cin>>test;
    while(test--){
        cin>>n;
        run();
    }

	return 0;
}