#include <iostream>
using namespace std;

unsigned long long Fibonacci(unsigned long long n){
  if(n==0){
      return 0;
    }else if (n==1){
      return 1;
    }else{
      return Fibonacci(n-1) + Fibonacci(n-2);
    }
}

int main(){
  unsigned long long n;
  cout << "Which Fibonacci number you want me to give you?" << endl;
  cin >> n;
  cout << "The " << n << "th' Fibonacci number is: " << Fibonacci(n) << endl;

  return 0;
}
