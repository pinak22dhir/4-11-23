#include<iostream>

// #include <bits/stdc++.h>
using namespace std;
// int countWays(int n) {
// if (n == 0 || n == 1) {
// return 1;
// }
// if (n == 2) {
// return 2;
// }
// return countWays(n-1) + countWays(n-2) + countWays(n-3);
// }
// int countways(int n){
//     if(n==1|| n==0){
//         return 1;
//     }
//     if (n==2){
//         return 2;
//     }
//     return countways(n-1)+countways(n-2)+countways(n-3);
// }
// int main() {
// int n;
// cout << "Enter the number of stairs: ";
// cin >> n;
// int ways = countways(n);
// cout << "Number of ways to reach the top: " << ways << endl;
// return 0;}
// int helper(int n, int m){
//     if(n<0)  return 0;
//     if(n==0) return 1;
//     int ways=0;
//     for(int i=1;i<=m;i++){
//         ways+=helper(n-i,m);
//     }

// return ways;
// }
// int main(){
//     int n,m;
//     cin>>n>>m;
//     int result=helper(n,m);
//     cout<<result<<endl;
// }
#include <iostream>

// Function to print odd and even numbers using recursion
void printOddEven(int N) {
    if (N == 0) {
        return;
    }
    
    if (N % 2 != 0) {
        // Print odd number
        std::cout << N << std::endl;
    }

    // Recursively print the next number
    printOddEven(N - 1);

    if (N % 2 == 0) {
        // Print even number
        std::cout << N << std::endl;
    }
}

int main() {
    int N;
    std::cin >> N;

    // Start the recursion from N
    printOddEven(N);

    return 0;
}