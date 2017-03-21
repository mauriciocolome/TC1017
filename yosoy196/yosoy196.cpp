#include <string>
#include <iostream>

using namespace std;

// `BigIntegerLibrary.hh' includes all of the library headers.
#include "BigIntegerLibrary.hh"

/*
 * This function receives a BigInteger n and checks if it is a palindrome
 * Return true if n is a palindrome, return false otherwise
 */
bool is_palindrome(string n){
  if(n == string(n.rbegin(), n.rend())){
    return true;
  }else{
    return false;
  }
}
/*
 * This function receives a BigInteger n and returns the value of n plus the inverse of n.
 */
BigInteger apply196(string n){
  string reverse;
  reverse = (string(n.rbegin(), n.rend()));
  BigInteger num,inverso;
  num = stringToBigInteger(n);
  inverso = stringToBigInteger(reverse);
  return num + inverso;
}

/*
 * Your main program goes below and should use the two functions above
 */
int main() {
  unsigned long uppernum,lowernum,contador=0,Natpal=0,LyNum=0,Nonly=0;
  string n,copia;

cout << endl;
cout << "Give the lower bound of numbers to consider: ";
cin >> lowernum;
cout << "Give the upper bound of numbers to consider: ";
cin >> uppernum;
cout << endl;

cout << "Calculating whether each value is one of: palindrome, non-lychrel or lychrel candidate" << endl;
cout << endl;
cout << "And the results are for the range " << lowernum << " to " << uppernum << endl;
cout << endl;

//This for will be the one that checks every number from our first to our last number
//*Since we are working with the reverse functin that is a string (the one above that gives us the inverse of a number) we have
//to convert some of our variables to strings
for(BigInteger i=lowernum; i<=uppernum; i++){
n = bigIntegerToString(i);

//Inside our for we have an if-else function, this one has two options: either it checks if the number is a palindrome or not
//If it's a palindrome it's a natural palindrome
if(is_palindrome(n) == true){
  Natpal = Natpal + 1;
}else{
  //If it's not a palindrome, it applies the apply196 function for 30 times or until our number becomes a palindrome
  //If it becomes a palindrome before the 30 times, it is a non-lychrel
  //If our contador reaches more than 30 loops, it is a lychrel number and also it prints the number
  contador = 0;
  copia = n;
  do{
    copia = bigIntegerToString(apply196(copia));
    contador = contador + 1;
  }while(is_palindrome(copia) == false && contador<=30);

  if(contador<=30){
    Nonly = Nonly + 1;
  }else{
    LyNum = LyNum + 1;
    cout << "Lychrel number found: " << n << endl;
  }
  }
}

cout << endl;
cout << "Natural Palindromes: " << Natpal << endl;
cout << "Non Lychrels (becomes palindrome): " << Nonly << endl;
cout << "Lychrel candidates: " << LyNum << endl;

return 0;
}
