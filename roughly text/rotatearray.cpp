 #include<iostream>
 #include<vector>
  using namespace std;
  int main(){
    vector<int>nums;
    nums={1,2,3,4,5,6,7};
    int k=3;
    int n=nums.size();
   vector<int>v1;
   vector<int>v2;
   //v1- 4,3,2,1
   for(int i=0; i<=n-k-1;i++){
      v1.push_back(nums[i]);
   }
   for(int i=n-k; i<n;i++){
      v2.push_back(nums[i]);
   }
   cout<<" v1 is"<<endl;
   for(int i=0;i<v1.size();i++){
    cout<<v1[i]<<" ";
   }
   cout<<endl;
   cout<<" v2 is"<<endl;
   for(int i=0;i<v2.size();i++){
    cout<<v2[i]<<" ";
   }
   cout<<endl;
   
    for(int i=0; i<=k-1;i++){
      nums[i]=v2[i];
   }
   int b=0;
   for(int i=k; i<=n-1&&b<v1.size();i++){
      nums[i]=v1[b];
      b++;
   }
   cout<<endl;
   cout<<"nums is: "<<endl;
   for(int i=0;i<nums.size();i++){
    cout<<nums[i]<<" ";
   }
  }