// #include<iostream>
// using namespace std;
// int missing(int arr[],int n){
//     int totalsum=n*(n-1)/2;
// int ofelements=0;
//     for(int i=0;i<n-1;i++)
// { ofelements+=(arr[i]);

// }
// int missingelement=totalsum-ofelements;
// return  missingelement;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n-1];
//    for(int i=0;i<n-1;i++){
//     cin>>arr[i];
//    }
    
//   int result= missing(arr,n);
//   cout<<result<<" ";
    
// return 0;
// }
#include <iostream>
using namespace std;

int findMissingNumber(int arr[], int N) {
    // Calculate the sum of first N natural numbers
    int totalSum = (N * (N + 1)) / 2;
    
    // Calculate the sum of elements in the array
    int arraySum = 0;
    for (int i = 0; i < N - 1; i++) {
        arraySum += arr[i];
    }

    // The missing number is the difference between the total sum and the array sum
    int missingNumber = totalSum - arraySum;

    return missingNumber;
}

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    int arr[N - 1];
    cout << "Enter " << N - 1 << " numbers in the range [1, N]: ";
    for (int i = 0; i < N - 1; i++) {
        cin >> arr[i];
    }

    int missingNumber = findMissingNumber(arr, N);
    cout << "The missing number is: " << missingNumber << endl;

    return 0;
}
