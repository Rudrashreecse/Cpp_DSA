#include<bits/stdc++.h>
using namespace std;
int main(){
    //we have to calculate the max sum of a given length of subarray on a array
    int size;
    cout<<"enter size of array:";
    cin>>size;

    //input array element
    int arr[size];
    cout<<"enter array element:"<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    int k;
    cout<<"enter subarray size:";
    cin>>k;

    //using sliding window we calculate maximum subarray among original array
    //first we calculate the first subarray sum
    int prevsum = 0;
    for(int i=0;i<k;i++){
        prevsum+=arr[i];
    }
    
    int i=1;
    int j=k;
    int maxsum=INT_MIN;
    int maxidx=-1;
    while(j<size){
        int currsum= prevsum + arr[j] - arr[i-1];
        if(maxsum<currsum){
            maxsum= currsum;
            maxidx=i;
        }
        prevsum = currsum;
        i++;
        j++;
    }
    cout<<"maximum sum subarray:"<<maxsum<<endl;;
    cout<<"maximum subarray is:";
    cout<<"[";
    for(int i=maxidx;i<maxidx+k;i++) cout<<arr[i]<<",";
    cout<<"]";

}
