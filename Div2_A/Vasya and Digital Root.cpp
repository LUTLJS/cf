#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,d;cin>>k>>d;
    if(k==1){cout<<d;return 0;}
    if(k>1&&d==0){cout<<"No solution";return 0;}
    cout<<d;k--;
    while(k--)cout<<0;
    return 0;
}
