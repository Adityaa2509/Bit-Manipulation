#include<bits/stdc++.h>
using namespace std;

vector<string> solve(int n)
{
    if(n == 1)
    {
        vector<string>ans;
        ans.push_back("0");
        ans.push_back("1");
        return ans;
    }
    vector<string>ans = solve(n-1);
    vector<string>mres;
    for(int i = 0;i<ans.size();i++)
    {
        string temp = "0" + ans[i];
        mres.push_back(temp);
    }
    for(int i = ans.size()-1;i>=0;i--)
    {
        string temp = "1" + ans[i];
        mres.push_back(temp);
    }
    return mres;
}
vector<int> convert(vector<string>ans,int n)
{
    vector<int>mres;
    for(int i=0;i<ans.size();i++)
    {
        int po = n-1;
        int num = 0;
        for(auto it : ans[i])
        {
            if(it == '0')
            {
                po --;
            }
            else
            {
                num += pow(2,po);
                po--;
            } 
        }
        mres.push_back(num);
    }
    return mres;
}
int main()
{
    int n;
    cin>>n;

    vector<string>ans = solve(n); 
    
    for(int i=0;i<ans.size();i++)cout<<ans[i]<<endl;

    vector<int> rs = convert(ans,n);
    for(int i=0;i<rs.size();i++)cout<<rs[i]<<" ";
}