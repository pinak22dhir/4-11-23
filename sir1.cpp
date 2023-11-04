//transpose the 2d array rotate the 2d array to 90
//for rotating we first transpoe then rotate a 2d array
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
//transpose
void rotate(vector <vector<int> > &vec){
    //transpose
    int n=vec.size();
    for(int i=1;i<n;i++){
        for(int j=0;j<n;j++){
swap(vec[i][j], vec[j][i]);
        }
    }
    //reverse everu row
    for(int i=0;i<n;i++){
     reverse(vec[i].begin(),vec[i].end());
    }
    return;
}

int main(){
    int n;
    cin>>n;
    vector<vector<int>>vec(n,vector<int> (n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
cin>>vec[i][j];
        }
    }
    rotate(vec);
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }

return 0;
}