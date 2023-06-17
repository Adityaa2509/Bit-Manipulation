#include<bits/stdc++.h>
using namespace std;
void binary(int n)
{
    if(n == 0)
    {
        cout<<"0";
        return ;
    }
    else{
    string str="";
    while(n!=0)
    {
        if(n%2 == 0)str += "0 ";
        else str += "1 ";
        n = n/2;
    }

    for(int i=str.length()-1;i>=0;i--)cout<<str[i];
cout<<endl;
}
}
void solve(int n,int i)
{
    int mask = 1<<i;
    binary(mask);
    int ans =  n ^ mask;
    binary(ans);
}
int main()
{
    int n;
    cin>>n;
    binary(n);
    int i;
    cin>>i;
    solve(n,i);
}