#include<iostream>
using namespace std;
int replacezero(int n){
    int result=0;
    int multiplier=1;
   
        while(n>0){
      int digit= n%10;
        if (digit==0) {
digit=5;
    }
        // multiplier*=10;
    result+=digit*multiplier;
    multiplier*=10;
    n=n/10;
}
return result;
}
int main(){
int n;
cin>>n;
int result=replacezero(n);
cout<<result<<" ";
return 0;
}