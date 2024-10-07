#include <iostream>
#include <cmath>
using namespace std;
int main() {

float num_1 = 0;
float num_2 = 0;
cout << "Enter a number: ";
cin >> num_1;
cout << "Enter another number: ";
cin >> num_2;
float sum = num_1 + num_2;
float sub = num_1 - num_2;
float mul = num_1 * num_2;
float div = num_1 / num_2;
float square = pow(num_1, 2);
float cube = pow(num_2, 3);
float log_result_1 = log10(num_1);
float log_result_2 = log10(num_2);
cout << "_______________________________________________________________________" << endl;
cout << "\nThe addition of "<< num_1 << " and " << num_2 <<" is " << sum << endl;
cout << "_______________________________________________________________________" << endl;
cout << "\nThe difference of "<< num_1 << " and " << num_2 <<" is " << sub << endl;
cout << "_______________________________________________________________________" << endl;
cout << "\nThe product of "<< num_1 << " and " << num_2 <<" is " << mul << endl;
cout << "_______________________________________________________________________" << endl;
cout << "\nThe divison of "<< num_1 << " and " << num_2 <<" is " << div << endl;
cout << "_______________________________________________________________________" << endl;
cout << "\n" << num_1 << "^" << 2 << " = " << square << endl;
cout << "_______________________________________________________________________" << endl;
cout << "\n" << num_2 << "^" << 3 << " = " << cube << endl;
cout << "_______________________________________________________________________" << endl;
cout << "\nThe log of " << num_1 << " is " << log_result_1 << endl;
cout << "_______________________________________________________________________" << endl;
cout << "\nThe log of " << num_2 << " is " << log_result_2;
return 0;
}
