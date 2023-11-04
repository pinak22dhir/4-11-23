#include<iostream>
using namespace std;
 void sumeven(int n){
    if(n==0)
    return;
    if(n %2!=0)
    {
        cout<<n<<" ";
    }
    sumeven(n-1);
    if (n %2==0){
        cout<<n<<" ";
    }
    return ;
}
int main(){
    int n;
    cin>>n;
    sumeven(n);
  
    return 0;

}
