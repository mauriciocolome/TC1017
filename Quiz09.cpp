#include <iostream>
#include <cmath>
using namespace std;

float distance (float x1, float y1, float x2, float y2, float d){
  d= sqrt( pow(x2-x1,2) + pow(y2-y1,2));
  return d;
}

int main(){
  float x1,y1,x2,y2,d;
  cout << "Give me the first position in your cartesian plane (1st value) " << endl;
  cin >> x1;
  cout << "Give me the first position in your cartesian plane (2nd values) " << endl;
  cin >> y1;
  cout << "Give me the second position in your cartesian plane (1st values) " << endl;
  cin >> x2;
  cout << "Give me the second position in your cartesian plane (2nd values) " << endl;
  cin >> y2;
  cout << "The distance is: " << distance (x1,y1,x2,y2,d) << endl;

  return 0;
}
