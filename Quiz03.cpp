#include <iostream>
#include <cmath>
using namespace std;

double square_root(double x){
  return sqrt(x);
}
double cuibic_root(double x){
  return cbrt(x);
}
int main(){
double x,r2,r3;
cout<<"Quiz03"<<endl;
cout<<" "<<endl;

do{
  cout<<"Give me a number and I'll give you its square root and cubic root:"<<endl;
  cin>>x;
  r2=square_root(x);
  r3=cuibic_root(x);
if(x>=0){
  cout<<"Your number: "<<x<<endl;
  cout<<"Square root: "<<r2<<endl;
  cout<<"Cubic root: "<<r3<<endl;
}else if(x<0){
  cout<<"Your number: "<<x<<endl;
  cout<<"ERROR! Square root can't be done with negative numbers, please give me a positive number: "<<endl;
  cout<<"Cubic root: "<<r3<<endl;
}else{
  cout<<"ERROR! Please give me a positive number: "<<endl;
}
}while(x<0);
return 0;
}
