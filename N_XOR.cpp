//given N as input
// 1^2^3 - - - - - -^N-1^N-2
#include<iostream>
using namespace std;
int main()
{
    //if n = 1 ==> o/p = 1
    //if n = 2 ==> o/p = 3
    //if n = 3 ==> o/p = 0
    //if n = 4 ==> o/p = 4

    int n;
    cin>>n;
    if(n%4 == 1)cout<<"1";
    if(n%4 == 2)cout<<n+1;
    if(n%4 == 3)cout<<"0";
    if(n%4 == 0)cout<<n;



} 