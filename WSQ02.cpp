#include <iostream>
using namespace std;
int main() {
  int F;
  int C;
cout<<"TEMPERATURE"<<endl;
cout<<"What is the temperature in Farenheit"<<endl;
cin>>F;
C=5*(F-32)/9;
cout<<"A temperature of "<<F<<" degrees is Farenheit is "<<C<<" in Celcius"<<endl;
if(C<=0){
    cout<<"Water at this temperature should be solid (under typical conditions)"<<endl;
    }
    else if(C>=100){
      cout<<"Water at this temperature should be a gas (under typical conditions)"<<endl;
    }
    else{
      cout<<"Water at this temperature should be liquid (under typical conditions)"<<endl;
  }
  return 0;
}
