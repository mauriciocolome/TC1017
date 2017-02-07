#include <iostream>
using namespace std;
int main(){
  int ran,guess,times=0;
    srand(time(0));
    ran=rand()%100+1;

    cout<<"Pick a number"<<endl;
    cout<<" "<<endl;
    cout<<"I have a number chosen between 1 and 100"<<endl;
    do{
      times=times+1;
      cout<<"Please guess a number between 1 and 100: "<<endl;
      cin>>guess;
        if(guess>ran){
          cout<<"I'm sorry, but "<<guess<<" is too high, try again: "<<endl;
        }else if(guess<ran){
            cout<<"I'm sorry, but "<<guess<<" is too low, try again: "<<endl;
          }else{
            cout<<"You got it! The right answer is indeed "<<guess<<endl;
          }
    }while(guess!=ran);
    cout<<"You made "<<times<<" guesses to get the right number"<<endl;
  return 0;
}
