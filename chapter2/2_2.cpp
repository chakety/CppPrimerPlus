/*

Write a C++ program that asks for a distance in furlongs and converts it to yards.
(One furlong is 220 yards.)

*/

#include <iostream>
using namespace std;

int main(){

    int furlongs;

    cout<<"Eneter the value of furlong: ";

    cin>> furlongs;

    cout<<"Coveting furlong to yard is "<< 220*furlongs <<endl;


    return 0;
}