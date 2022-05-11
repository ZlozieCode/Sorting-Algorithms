

#include <bits/stdc++.h>

using namespace std;

vector<int> Bubble_Sort(vector<int>v){
    
    int n=v.size();
    int count=0;
    
    while(count<n){
        
        for(int i=0;i<n-count-1;i++){
            
            if(v[i]>v[i+1]){
                
                //swap(v[i],v[i+1]);
                int temp=v[i];
                v[i]=v[i+1];
                v[i+1]=temp;
            }
        }
        count++;
    }
    return v;
}

int main()
{
    int n;
    cin>>n;
    
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    
    vector<int>ans=Bubble_Sort(v);
    
    for(int x:ans){
        cout<<x<<" ";
    }

    return 0;
}
