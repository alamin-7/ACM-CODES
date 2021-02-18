#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, a[10000], n;
    cin>>n;
    for(i = 0; i < 5; i++){
        cin>>a[i];
    }
    for(i = n; i < 4; i++){
        a[i] = a[i+1];
    }
    for(i = 0; i < 4; i++){
        cout<<a[i];
    }
}

