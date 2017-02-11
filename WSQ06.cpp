#include <iostream>
using namespace std;

int main(){
  char r1;
  cout << " " << endl;
  cout << "Factorial Calculator" << endl;
  cout << " " << endl;

  do {
    int n1=0,ans=1;
    cout << "Give me a Positive number and I'll give you its factorial value: " << endl;
    cin >> n1;

      for(int x=n1;x>=1;x--){
        ans=ans*x;
      }

    cout << "The factorial number is: " << ans << endl;
    cout << "Would you like to try another number? (answer with y/n) " << endl;
    cin >> r1;
  } while(r1!='n');
    cout << "Have a nice day" << endl;
  return 0;
}
