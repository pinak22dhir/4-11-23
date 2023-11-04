#include<iostream>
using namespace std;
// void helper(int &n,int x){
//     if(x>=n) return;
//     cout<<x<<" ";
//     for(int i=0;i<=9;i++){
//         helper(n,x*10+i);
//     }

// }
// int main(){
// int n;
// cin>>n;
// helper(n,1);
// return 0;
// }
void helper(int &n, int x){
    if(x>=n) return;
    cout<<x<<" ";
for(int i=0;i<9;i++){
helper(n,x*10+i);
}}
int main(){
    int n;
    cin>>n;
    helper(n,1);
    return 0;
}