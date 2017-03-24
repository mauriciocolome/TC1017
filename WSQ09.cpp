#include <iostream>
#include <fstream> //This library will allow you to read a text file
#include <string> //This library will allow you to use getline function

using namespace std;

//This is the struct I need to return a single value that has both num. of lines and characters
struct data{
  int lines,characters;
};


data result (data& w){
  string line;
  w.lines=0;
  w.characters=0;
  ifstream file ("TextFile.txt");//Reads our text

  if(file.is_open()){//Checks if the file is open
    while(getline(file,line)){//From the library string, it counts the number of lines
      w.lines++;
      int numchar = line.length();//numchar = the lenght of each string in the file
      for(int i=0; i<line.length(); i++){
        if(line.at(i) == ' '){//Do this so the program doesn't count spaces
          numchar--;
        }
      }
      w.characters = numchar + w.characters;
    }
    file.close();//To close the file
  }
  return w;//Do this to returnboth values of the struct
}

int main (){
  data A;//Declare the struct as 'A' (it could be any letter)
  result (A);//Declared the funciton with my 'A'
  cout << "File Textfile.txt has: " << A.characters << " characters" <<endl;
  cout << "File Textfile.txt has: " << A.lines << " lines" <<endl;

  return 0;
}
