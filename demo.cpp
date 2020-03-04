#include "complex.h"
#include <iostream>
#include <cstring>

using namespace std;
using namespace csis3700;



int main() {
    cout << "Enter two complex numbers one after another:(E.g. 2+1i would be entered as 2 1) ";
    double real1,real2,imaginary1,imaginary2;
    cin >> real1;
    cin >> imaginary1;
    cin >>real2;
    cin >> imaginary2;
    
    complex c1(real1, imaginary1);
    complex c2(real2, imaginary2);
    
    cout << "Enter the operation you want to perform: ";
    string operation;
    cin >> operation;
 
    while (operation!="+" and operation!="-" and operation!="/" and operation !="*"){
      cout <<"Sorry, invalid operation. Please try again:";
      cin >> operation;
      }
    
    if (operation=="/"){
    complex c3 = c1/c2;
    cout << c3;
    }
    
    else if(operation=="+"){
    complex c3=c1+c2;
    cout <<c3;
    }
    
    else if (operation=="*"){
    complex c3 = c1*c2;
    cout << c3;
    }
    
    else if(operation=="-"){
    complex c3=c1-c2;
    cout <<c3;
    }
    
    
 
    return 0;     
}
