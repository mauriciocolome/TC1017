#include <iostream>
using namespace std;

int main(){
  int x;

  cout << "Give me a year" << endl;
  cin >> x;

  if(x<1752){
    cout << "There where no lap years before 1752" << endl;
  }else if((x%400)==0){
    cout << x << " Is a leap year" << endl;
  }else if((x%100)==0){
    cout << x << " Is NOT a leap year" << endl;
  }else if((x%4)==0){
    cout << x << " Is a leap year" << endl;
  }else{
    cout << x << " Is NOT a leap year" << endl;
  }
  return 0;
}
