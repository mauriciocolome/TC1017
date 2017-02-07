#include <iostream>
using namespace std;
void newLine()
{
  cout<<endl;
}
int main()
{
  int no1,no2;
cout<<"FUN WITH NUMBERS";
newLine();
cout<<"Please give me the first number"<<endl;
cin>>no1;
cout<<"Please give me the second number"<<endl;
cin>>no2;
cout<<"Sum:"<<no1+no2<<endl;
cout<<"Difference:"<<no1-no2<<endl;
cout<<"Product:"<<no1*no2<<endl;
cout<<"Division (integer base):"<<no1/no2<<endl;
cout<<"Remainder:"<<no1%no2<<endl;
return 0;

}
