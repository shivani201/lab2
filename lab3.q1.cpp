// include library
# include <iosream>
using namespace std;
//main function
int main() {
int sizeint; // declaration
sizeint = sizeof (int); // initialization
cout << "The size of integer is " << sizeint << endl; // prints on terminal
int sizefloat;
sizefloat = sizeof (float);
cout << "The size of float is " << sizefloat << "bytes" << endl;
int sizedouble;
sizedouble = sizeof (double);
cout << "The size of double is " << sizedouble << "bytes" << endl;
int sizechar;
sizechar = sizeof (char);
cout << "The size of character is " << sizechar << "bytes" << endl;
int sizeboolean; 
sizeboolean = sizeof (bool);
cout << "The size of boolean is " << endl;
return 0;
}
