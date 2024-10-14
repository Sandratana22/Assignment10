//Assignment 10 

#include <iostream> 

//Performing an outer and inner "if statement"
using namespace std; 

int main(){
    int sales = 9'000; 
    double commission; 

    if(sales < 10'000)
    commission = .1; 
    if(sales > 15'000)
    commission = .2;
    else 
    commission = .15;

    cout << "The commission is: " << commission << endl; 

    return 0; 
}
