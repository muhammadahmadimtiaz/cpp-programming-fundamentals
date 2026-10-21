#include <iostream>
using namespace std;
int main(){
    float distance,petrol_price,fuel_avg,petrol_cost,total_cost;
    cout<<"Enter the distance to vacation home: ";
    cin>>distance;
    cout<<"Enter the average price of petrol: ";
    cin>>petrol_price;
    cout<<"Enter the average kilometers car travel per litre: ";
    cin>>fuel_avg;
    petrol_cost = distance*petrol_price/fuel_avg;
    total_cost = petrol_cost*2;
    cout<<"The Petrol cost for one side will be: "<<petrol_cost;
    cout<<"\nThe Total Petrol cost for both sides will be: "<<total_cost;
    return 0;
}



