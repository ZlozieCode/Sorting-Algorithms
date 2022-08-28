
# include<bits/stdc++.h>

using namespace std;

void InsertionSort(vector<int>&v){
    
    int n=v.size();
    for(int i=0;i<n;i++){
        int j=i;
        int temp=v[i];
        while(j>0 && v[j-1]>temp){
            v[j]=v[j-1];
            j--;
        }
        
        v[j]=temp;
    }
}

int main()
{
    vector<int>v={5,1,3,0,2};
    InsertionSort(v);
    
    for(int x:v)
    cout<<x<<" ";

    return 0;
}
