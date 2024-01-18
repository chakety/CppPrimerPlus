/*
Write a program that asks the user to enter an hour value and a minute value.
The main() function should then pass these two values to a type void function that displays the two values in the format shown in the following sample run:
    Enter the number of hours: 9
    Enter the number of minutes: 28
    Time: 9:28
*/

#include <iostream>
using namespace std;

void showTime(int h, int mins);

int main(){
    int hr;
    cout<<"Enter the number of hours: ";
    cin>>hr;

    int mins;
    cout<<"Enter the number of minutes: ";
    cin>>mins;

    showTime(hr,mins);

    return 0;
}

void showTime(int h, int mins){
    cout<<"Time: "<<h<<":"<<mins<<endl;
}