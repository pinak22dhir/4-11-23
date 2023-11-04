#include<iostream>
using namespace std;
void recursion(int n){//i to n
    if(n==0) return;
//    recursion(n-1);
   cout<<n<<" ";
    recursion(n-1);
   return;
}
int main(){
    int n;
    cin>>n;
recursion(n);
    return 0;
}