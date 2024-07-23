 
 #include<iostream>
 #include<vector>
 using namespace std;
 int main(){
  vector< vector<int> >grid(3,vector<int>(4));  

 int nor =grid.size();
        int noc= grid[0].size();
        // input
        cout<<" take input"<<endl;
        for(int i=0;i<nor;i++){
            for(int j=0;j<noc;j++){
                cin>>grid[i][j];
            }
        }
        //print
        cout<<"the given matrix is: "<<endl;
        for(int i=0;i<nor;i++){
            for(int j=0;j<noc;j++){
                cout<<grid[i][j]<<" ";
            }
            cout<<endl;
        }
        // row wise traverse 
        for(int i=0;i<nor;i++){
            if(grid[i][0]==0){
                for( int j=0;j<noc;j++){
                    if(grid[i][j]==0) grid[i][j]=1;
                    else grid[i][j]=0;
                }
            }
        }
        
        //column wise traverse
        for(int j=0;j<noc;j++){
           int noz=0;
          int   noo=0;
            for(int i=0;i<nor;i++){
                if(grid[i][j]==0) noz++;
                else noo++;
            }
            if(noz>noo){
                for(int i=0;i<nor;i++){
                
                    if(grid[i][j]==0) grid[i][j]=1;
                  else grid[i][j]=0;

            }
            }
        }
        // updated matrix
        cout<<"updated matrix is:"<<endl;
        for(int i=0;i<nor;i++){
            for(int j=0;j<noc;j++){
                cout<<grid[i][j]<<" ";
            }
            cout<<endl;
        }
      // count sum
     int sum=0;
     for(int i=0;i<nor;i++){
        int x=1;
        for(int j=noc-1;j>=0;j--){
         sum=sum+ grid[i][j]*x;
         x*=2;
        }
     }




cout<<endl;
cout<<" sum is: ";
    cout<<sum;
 }