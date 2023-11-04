#include<iostream>
//reverse k times
#include<vector>
using namespace std;
void reverse(vector<int>& arr){
    int start=0;
    int end=arr.size()-1;
    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main(){
int n;
cout<<"enter size of array";
cin>>n;
vector <int> arr(n);
cout<<"enter elements";
for(int i=0;i<n;i++){
   cin>>arr[i];
}
int k;
cout<<"enter times";
cin>>k;
for(int i=0;i<k;i++){
reverse(arr);
}
for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
}

return 0;
}