#include <iostream>
using namespace std;

int main(){
int x=0,y=1;
int t=0; //times of loops of the do-while loop
unsigned long long z; //the Fibonacci number
int n; //"nth" Fibonacci number

cout << "Which Fibonacci number you want me to give you?" << endl;
cin >> n;

if(n==0){
  n=x;
  cout << "The " << n << "th' Fibonacci number is: " << x << endl;
}else if(n==1){
  n=y;
  cout << "The " << n << "th' Fibonacci number is: " << y << endl;
}else{
  do{
    z = x+y;
    x = y;
    y = z;
    t += 1;
  }while(t<=n-2);
  cout << "The " << n << "th Fibonacci number is: " << z << endl;
}

  return 0;
}
