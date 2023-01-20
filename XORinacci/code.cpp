#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        ll a , b , n;
        cin>>a>>b>>n;
        int temp = n%3;
        if(temp == 0)
        {
            cout<<a<<endl;
        }
        else if(temp == 1)
        {
            cout<<b<<endl;
        }
        else
        {
            cout<<(a^b)<<endl;
        }
    }
    return 0;
}