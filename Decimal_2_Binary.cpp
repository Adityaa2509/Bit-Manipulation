#include<bits/stdc++.h>
using namespace std;
void binary(int n)
{
int ans = 0;
int i = 0;
    while(n>0)
    {
        int rem = n%2;
        ans = ans + rem*pow(10,i);
        n /= 2;
        i++;
    }
cout<<ans<<endl;
}
int main()
{
    int n;
    cin>>n;
    binary(n);
}