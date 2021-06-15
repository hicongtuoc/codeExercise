#include <bits/stdc++.h>
using namespace std;

int n,k,a[100],ok=1;

void init(void){
    cin>>n>>k;
    for(int i=1;i<=k;i++)   a[i]=i;
}

void Next_Combination(void){
    int i=k;
    while(i>0 && a[i] == n-k+i) i--;
    if(i>0){
        a[i]=a[i]+1;
        for(int j=i+1;j<=k;j++)
            a[j]=a[i]+j-i;
    }
    else ok=0;
}

void output(){
    for(int i=1;i<=k;i++) cout<<a[i];
    cout<<" ";
}

void run(){
    ok=1;
    while(ok){
        output();
        Next_Combination();
    }
    cout<<endl;
}
int main(){
	int test;
    cin>>test;
    while(test--){
        init();
        run();
    }

	return 0;
}