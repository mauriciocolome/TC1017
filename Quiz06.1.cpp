#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{ /* PROGRAM TO PRINT OUT SPACE RESERVED FOR VARIABLES */
	char c;
	short s;
	int i;
	unsigned int ui;
	unsigned long int ul;
	float f;
	double d;
	long double ld;
	cout << endl
  	     << "The storage space for each variable type is:"
	     << endl;
	printf ("char: \t\t\t%d bits\n",int(sizeof(c))*8);  //  \t means tab
	printf ("short: \t\t\t%d bits\n",int(sizeof(s))*8);
	printf ("int: \t\t\t%d bits\n",int(sizeof(i))*8);
	printf ("unsigned int: \t\t%d bits\n",int(sizeof(ui))*8);
	printf ("unsigned long int: \t%d bits\n",int(sizeof(ul))*8);
	printf ("float: \t\t\t%d bits\n",int(sizeof(f))*8);
	printf ("double: \t\t%d bits\n",int(sizeof(d))*8);
	printf ("long double: \t\t%d bits\n",int(sizeof(ld))*8);

return 0;
}
