#include <iostream>
using namespace std;

int main(){

  char a;
  int b,x;
  float c;

  cout << "Input a single character, followed by : " << endl;
  cin >> a;
	cout << "Input an integer, followed by : " << endl;
  cin >> b;
	cout << "Input a float, followed by : " << endl;
  cin >> c;

  x= (int) a;
  cout << "The character " << a << " when cast to an int gives value: " << x << endl;

  x=(float) a;
	cout << "The character " << a << " when cast to a float gives value: " << x << endl;

  x=(char) b;
	cout << "The integer " << b << " when cast to a char gives value: " << x << endl;

  x=(float) b;
	cout << "The integer " << b << " when cast to a float gives value: " << x << endl;

  x=(char) c;
	cout << "The float " << c << " when cast to a char gives value: " << x << endl;

  x=(int) c;
	cout << "The float " << c << " when cast to an int gives value: " << x << endl;

  return 0;
}
