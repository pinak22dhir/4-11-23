//merge 2 sort 
#include<iostream>
#include<vector>
using namespace std;
// int main(){
//     int n,m;
//     cin>>n>>m;
// vector<vector<int>> v1(n);
// vector<vector<int>> v2(m);
// for(int i=0;i<n;i++){
//     cin>>v1[i]>>" ";//here u use push
// }
// for(int i=0;i<m;i++){
//     cin>>v2[i]>>" ";
// }
//     return 0;
// }


// std::vector<int> mergeSortedArrays(const std::vector<int>& arr1, const std::vector<int>& arr2) {
//     std::vector<int> result;
//     int i = 0, j = 0;

//     while (i < arr1.size() && j < arr2.size()) {
//         if (arr1[i] < arr2[j]) {
//             result.push_back(arr1[i]);
//             i++;
//         } else {
//             result.push_back(arr2[j]);
//             j++;
//         }
//     }

//     while (i < arr1.size()) {
//         result.push_back(arr1[i]);
//         i++;
//     }

//     while (j < arr2.size()) {
//         result.push_back(arr2[j]);
//         j++;
//     }

//     return result;
// }

// int main() {
//     std::vector<int> arr1;
//     std::vector<int> arr2;

//     int n1, n2;

//     std::cout << "Enter the number of elements for array 1: ";
//     std::cin >> n1;

//     std::cout << "Enter the elements for array 1: ";
//     for (int i = 0; i < n1; i++) {
//         int num;
//         std::cin >> num;
//         arr1.push_back(num);
//     }

//     std::cout << "Enter the number of elements for array 2: ";
//     std::cin >> n2;

//     std::cout << "Enter the elements for array 2: ";
//     for (int i = 0; i < n2; i++) {
//         int num;
//         std::cin >> num;
//         arr2.push_back(num);
//     }

//     std::vector<int> mergedArray = mergeSortedArrays(arr1, arr2);

//     std::cout << "Merged Array: ";
//     for (int num : mergedArray) {
//         std::cout << num << " ";
//     }
//     std::cout << std::endl;

//     return 0;
// }

std:: vector<int> mergesort( const std:: vector <int> &arr1, const std:: vector <int> &arr2 ){
    std:: vector<int> result;
    int i=0,j=0;
    while(i<arr1.size() && j<arr2.size() ){
        if (arr1[i]<arr2[j]){
result.push_back(arr1[i]);
i++;  }
else{
 result.push_back(arr2[j]);
 j++;   
}    }
while(i<arr1.size()){
    result.push_back(arr1[i]);
    i++;
}
while(j<arr2.size()){
    result.push_back(arr2[j]);
    j++;
}
return result;

}
int main(){
    

    vector<int> arr1;
     vector<int> arr2;
      int n;
      
     cout<<"enter number of elements for arrays";
     cin>>n;
    
     for(int i=0;i<n;i++){
        int num;
       std:: cin>>num;
arr1.push_back(num);
     }
      int m;
  
 cout<<"enter number of elements for array2 ";
       cin>>m;
     for(int i=0;i<m;i++){
        int num;
       std:: cin>>num;
arr2.push_back(num);
     }
    std:: vector <int> mergesorti=mergesort(arr1,arr2);
      cout<<"merged sported array";
    
       for(int num: mergesorti) {
        std:: cout<<num<<" ";
       }
cout<<endl;
return 0;
     }



