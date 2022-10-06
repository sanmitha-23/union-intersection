#include <bits/stdc++.h>

using namespace std;

void union_array(int a[],int n,int b[],int m)
{
    vector<int>v;
    int count = 0;
    
    for(int i =0;i<n;i++)
    v.push_back(a[i]);
    
    for(int i=0;i<m;i++)
    v.push_back(b[i]);
    
    sort(v.begin(),v.end());
    
    for(int i=0;i<(n+m);i++)
    {
        if(v[i]==v[i+1])
        count++;
    }
    
    cout<<(v.size()-count)<<endl;
}

void intersection_array(int a[],int n,int b[],int m)
{
    vector<int>v;
    int count = 0;
    
    for(int i =0;i<n;i++)
    v.push_back(a[i]);
    
    for(int i=0;i<m;i++)
    v.push_back(b[i]);
    
    sort(v.begin(),v.end());
    
    for(int i=0;i<(n+m);i++)
    {
        if(v[i]==v[i+1])
        count++;
    }
    cout<<count<<endl;
}

int main()
{
    int n,m;
    cin>>n>>m;
    
    int a[n], b[m];
    
    for(int i=0;i<n;i++)
    cin>>a[i];
    
    for(int i=0;i<m;i++)
    cin>>b[i];
    
    union_array(a,n,b,m);
    intersection_array(a,n,b,m);
    
    return 0;
}
