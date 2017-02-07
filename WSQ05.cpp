#include <iostream>
using namespace std;

int sum(int x, int y){
  return (x+y);
}

int Difference (int x, int y){
  return (x-y);
}

int Product (int x, int y){
  return (x*y);
}

int Division (int x, int y){
  return (x/y);
}

int Remainder (int x, int y){
  return (x%y);
}

int main()
{
  int x,y;
cout << "FUN WITH NUMBERS" << endl;
cout << " " << endl;
cout << "Please give me the first number" << endl;
cin >> x;
cout << "Please give me the second number" << endl;
cin >> y;

int r1 = sum(x,y);
int r2 = Difference(x,y);
int r3 = Product(x,y);
int r4 = Division(x,y);
int r5 = Remainder(x,y);

cout << "Sum: " << r1 << endl;
cout << "Difference: " << r2 << endl;
cout << "Product: " << r3 << endl;
cout << "Division (integer base): " << r4 << endl;
cout << "Remainder: " << r5 << endl;

return 0;
}
