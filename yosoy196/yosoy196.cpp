#include <string>
#include <iostream>

using namespace std;

// `BigIntegerLibrary.hh' includes all of the library headers.
#include "BigIntegerLibrary.hh"

/*
 * This function receives a BigInteger n and checks if it is a palindrome
 * Return true if n is a palindrome, return false otherwise
 */
bool is_palindrome(string i){
  if(i == string(i.rbegin(), i.rend())){
    return true;
  }else{
    return false;
  }
}
/*
 * This function receives a BigInteger n and returns the value of n plus the inverse of n.
 */
BigInteger apply196(string i){
  string j;
  j = (string(i.rbegin(), i.rend()));
  BigInteger n,m;
  n = stringToBigInteger(i);
  m = stringToBigInteger(j);
  return n + m; // you need to replace this with code that works
}

/*
 * Your main program goes below and should use the two functions above
 */
int main() {
  unsigned long uppernum,lowernum,contador=0,Natpal=0,LyNum=0,Nonly=0;
  string i,copia;

cout << "Give the lower bound of numbers to consider: ";
cin >> lowernum;
cout << "Give the upper bound of numbers to consider: ";
cin >> uppernum;



cout << "Calculating whether each value is one of: palindrome, non-lychrel or lychrel candidate" << endl;
cout << endl;
cout << "And the results are for the range " << lowernum << " to " << uppernum << endl;

for(BigInteger n=lowernum; n<=uppernum; n++){
i = bigIntegerToString(n);

if(is_palindrome(i) == true){
  Natpal = Natpal + 1;
}else{
  copia = i;
  do{
    copia = bigIntegerToString(apply196(copia));
    contador = contador + 1;
  }while(is_palindrome(copia) == false && contador<=30);

  if(contador<=30){
    Nonly = Nonly + 1;
  }else{
    LyNum = LyNum + 1;
    cout << "Lychrel number found: " << i << endl;
  }
  }
}

cout << "Natural Palindromes: " << Natpal << endl;
cout << "Non Lychrels (becomes palindrome): " << Nonly << endl;
cout << "Lychrel candidates: " << LyNum << endl;

return 0;
}
