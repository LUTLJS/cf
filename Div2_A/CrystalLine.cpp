#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    for(int i=1;i<=(n+1)/2;i++){
        for(int j=i;j<=n/2;j++)cout<<"*";
        for(int j=1;j<=2*i-1;j++)cout<<"D";
        for(int j=i;j<=n/2;j++)cout<<"*";
        cout<<"\n";
    }
    for(int i=(n+1)/2-1;i>=1;i--){
        for(int j=i;j<=n/2;j++)cout<<"*";
        for(int j=1;j<=2*i-1;j++)cout<<"D";
        for(int j=i;j<=n/2;j++)cout<<"*";
        cout<<"\n";
    }
    return 0;
}