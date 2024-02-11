#include <iostream> 
#include <iomanip> 
#include <conio.h> 
using namespace std;
 main(){
int num = 37;
double pi = 3.141592654;
cout << "hex: " << hex << num << endl; 
cout << "oct: " << oct << num << endl; 
cout << "dec: " << dec << num << endl; 
cout << setw(8) << num <<endl;
cout << setw(8) << setfill(' ') << num << endl; 
cout << "Pi: " << setprecision(10) << pi << endl;
}

