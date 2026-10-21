#include<iostream>
using namespace std;
int main(){
    int hours,minutes;
    float temp;
    cout<<"Enter the time elapsed since power failure in this format HH [space] MM: ";
    cin>>hours>>minutes;
    float time = hours + minutes/60.0;
    temp = (4*time*time/(time+2))-20;
    cout<<"Temperature in Freezer is: "<<temp<<"°C";
    return 0;
}