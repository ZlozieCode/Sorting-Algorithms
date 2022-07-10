
#include <bits/stdc++.h>

using namespace std;

int partition(int arr[],int l,int r){
    
    int i=l-1;
    int pivot=r-1;
    
    for(int j=l;j<r-1;j++){
        if(arr[j]<arr[pivot]){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    
    swap(arr[i+1],arr[pivot]);
    return i+1;
    
}


void QuickSort(int arr[],int l,int r){
    
    if(l<r){
        int p=partition(arr,l,r);
        QuickSort(arr,l,p-1);
        QuickSort(arr,p+1,r);
    }
}

int main()
{
    int n=5;
    int arr[]={8,2,16,5,0};
    QuickSort(arr,0,n);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
