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

int solve(int n)
{

    return (n&(n-1));

}


int main()
{
    int n;
    cin>>n;
    binary(n);
    
    int ans = solve(n);
    binary(ans);
    ans = solve(ans);
    binary(ans);
}