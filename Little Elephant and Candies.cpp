#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        long e,c,x;
        cin>>e>>c;
        long sum=0;
        for(int i=0;i<e;i++)
        {
            cin>>x;
            sum+=x;
            
        }
        if(sum>c)
        {
            cout<<"No\n";
        }
        else
        {
            cout<<"Yes\n";
        }
    }
}
