#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    cout<<"Enter the elements of the array : ";
    double arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    double temp=arr[0],count=1;
    for(int i=1; i<=n; i++)
    {
        if(arr[i]==arr[i-1])
        {
            count++;
        }
        else {
            cout<<temp<<" "<<count<<endl;
            temp=arr[i];
            count=1;
        }
    }
    return 0;
}