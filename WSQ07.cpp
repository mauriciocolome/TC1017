#include <iostream>
#include <cmath>
using namespace std;

float arr[]={};

int main(){
float i,ans,x,sd,SD,size;

cout << "Give me the size of the array (how many numbers you'll give me)" << endl;
cin >> size;

  for (int i = 0; i < size; i++){
    cout << "Give me number " << i+1 << ": " << endl;
    cin >> arr[i];

    ans += arr[i];
  }

  x=ans/size;

  for(int i = 0; i < size; i++){
        sd += pow(arr[i] - x, 2);
      }

      SD = sqrt(sd / size);

  cout << "the total of those numbers is: " << ans << endl;
  cout << "the average of those numbers is: " << x << endl;
  cout << "the standard deviation of those numbers is: " << SD << endl;

return 0;
}
