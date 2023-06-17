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
}

}

int solve(int n,int pos)
{

    int mask = 1<<pos;
    if((n&mask) == 0)return 0;
    else return 1;
}


int main()
{
    int n;
    cin>>n;
    binary(n);
    int i;
    cin>>i;
    cout<<solve(n,i);
}