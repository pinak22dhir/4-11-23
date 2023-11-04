#include<iostream>
#include<vector>
#include<string>
using namespace std;
vector <string> paths;
int f(int i,int j,int n,int m, string path){
if(i==m-1 && j==n-1) {
    cout<<path<<endl;
    paths.push_back(path);
    return 1;}
if(i>=n || j>=m){
return 0;}
int rigth=f(i+1,j,n,m, path + "R");
int down=f(i,j+1,n,m,path+"D");
return rigth+down;

}
int main(){
    
    cout<<f(0,0,4,4," ");
    for(const string& path: paths){
cout<<path<<endl;
    }
     
    return 0;
}