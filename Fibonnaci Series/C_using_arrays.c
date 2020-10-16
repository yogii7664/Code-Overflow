/**
  Fibonacci series in C++ using array by codebind.com
  */
 
#include <iostream>
 
int main(void) {
  int i,number;
  long int arr[40];
 
  std::cout << "Enter the number : "<< std::endl;
  std::cin >> number;
 
  arr[0]=0;
  arr[1]=1;
 
  for(i = 2; i< number ; i++){
    arr[i] = arr[i-1] + arr[i-2];
  }
 
  std::cout << "Fibonacci series is: ";
  for(i=0; i< number; i++)
    std::cout << arr[i] << std::endl;
  return 0;
}
