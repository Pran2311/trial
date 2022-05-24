#include<bits/stdc++.h>

using namespace std;

//void swap()

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //int temp=0;
    int count = 0;
    for(int k=0;k<n;k++){
        if(arr[i] != k+1){
            int temp=0;
            temp = arr[i];
            arr[i] = arr[arr[k] - 1];
            arr[arr[k] - 1] = temp;
            count++;
        }
       // cout<<count;
    }
    cout<<count;
    return 0;
}



