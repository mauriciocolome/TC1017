#include <iostream>
using namespace std;

int minimumThree(int x, int y, int z){
  return min(x,min(y,z));
  }

int sumSquares(int x, int y, int z){
  return ((x*x)+(y*y)+(z*z));
}

int main(){
  int x,y,z,r1,r2;
  cout << "Minimum and Squares" << endl;
  cout << " " << endl;
  cout << "Give me the first number " << endl;
  cin >> x;
  cout << "Give me the second number " << endl;
  cin >> y;
  cout << "Give me the third number " << endl;
  cin >> z;

  r1=minimumThree(x,y,z);
  r2=sumSquares(x,y,z);

  cout << "The smallest number of those three is " << r1 << endl;
  cout << "The sum of the squares of those numbers is " << r2 << endl;


return 0;
}
