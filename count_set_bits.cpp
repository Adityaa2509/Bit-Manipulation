#include<bits/stdc++.h>
using namespace std;

void binary(int n)
{
    if(n == 0)
    cout<<"0"<<endl;
    else
    {
        string str = "";
        while(n!=0)
        {
            if(n%2 == 0)str += "0";
            else str += "1";
            n /= 2;
        }
        for(int i=str.length()-1;i>=0;i--)cout<<str[i]<<" ";
    cout<<endl;
    }
    return ;
}

void solve(int n)
{
    binary(n);
    int cnt = 0;
    while(n!=0)
    {
        n = n & (n-1);
        binary(n);
        cnt++;
    }
    cout<<cnt<<endl;
}

int main()
{
    int n;
    cin>>n;
    solve(n);
}