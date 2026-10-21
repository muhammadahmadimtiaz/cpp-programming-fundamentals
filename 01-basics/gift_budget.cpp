#include <iostream>
using namespace std;
int main(){
    float monthly_salary,gift_percentage,gift_amount,annual_salary;
    cout<<"Enter your monthly income: ";
    cin>>monthly_salary;
    cout<<"Enter the percentage you want to spend on presents yearly: ";
    cin>>gift_percentage;
    annual_salary = monthly_salary*12;
    gift_amount = (annual_salary*gift_percentage)/100;
    cout<<"\nYou can Spend "<<gift_amount<<" on gifts in a year.";
    return 0;
}
