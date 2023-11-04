#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main(){

int n;
 cin>>n;

std :: vector <std:: vector<int>>arr(n, std:: vector<int>(n));
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
    }
}
int maxcolsum=INT_MIN;
int colindex=0;
for(int j=0;j<n;j++){
    int cursum=0;
    for(int i=0;i<n;i++){
       cursum+=arr[i][j] ;
    }
    if(cursum> maxcolsum){
       maxcolsum= cursum;
       colindex=j;
    }
}
std:: cout<<maxcolsum<<" "<<colindex<<" ";

    return 0;
}