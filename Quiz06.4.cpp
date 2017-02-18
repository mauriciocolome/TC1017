#include <iostream>
using namespace std;

int main(){
  int a,b,c;

  cout << "Give me integer1 " << endl;
  cin >> a;
  cout << "Give me integer2 " << endl;
  cin >> b;
  cout << "Give me an integer3 " << endl;
  cin >> c;

  if(a<b && b<c){
    cout << "The numbers in ascending order are: " << a << "  " << b << "  " << c << endl;
  }else if(a<c && c<b){
    cout << "The numbers in ascending order are: " << a << "  " << c << "  " << b << endl;
  }else if(b<a && a<c){
    cout << "The numbers in ascending order are: " << b << "  " << a << "  " << c << endl;
  }else if(b<c && c<a){
    cout << "The numbers in ascending order are: " << b << "  " << c << "  " << a << endl;
  }else if(c<a && a<b){
    cout << "The numbers in ascending order are: " << c << "  " << a << "  " << b << endl;
  }else{
    cout << "The numbers in ascending order are: " << c << "  " << b << "  " << a << endl;
  }

  return 0;
}
