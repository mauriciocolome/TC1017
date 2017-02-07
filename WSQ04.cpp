#include <iostream>
using namespace std;

int main(){
  int n1,n2,ans=0;
  cout << "Sum of numbers" << endl;
  cout << " " << endl;
  cout << "We will calculate the sum of integers in the range you provide" << endl;
  cout << "Please give us the LOWER bound: " << endl;
  cin >> n1;
  cout << "Please give us the UPPER bound: " << endl;
  cin >> n2;

      if (n1<=n2){

        for(int x=n1;x<=n2;x++){
          ans += x;
        }
        cout << "The sum from " << n1 << " to " << n2 << " (inclusive) is: " << ans << endl;

      }else{
        for(int x=n2;x<=n1;x++){
          ans += x;
        }

        cout << "It seems that your upper bond is lower than the lower bond, so in order to fix this, " << endl;
        cout << "I set your lower bond as the upper bond and viceversa" << endl;
        cout << "So, Upper bond: " << n1 << endl;
        cout << "Lower bond: " << n2 << endl;
        cout << "The sum from " << n2 << " to " << n1 << " (inclusive) is: " << ans << endl;
      }

  return 0;
}
