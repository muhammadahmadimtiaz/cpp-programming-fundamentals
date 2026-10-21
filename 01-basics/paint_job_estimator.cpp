#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float sq_ft_per_gal,comp_def_lab,lab_rate,area,price_gal;
    float gal_per_sq_ft,lab_per_sq_ft,gal_req,lab_req,paint_cost,lab_cost,total_cost;
    cout<<"For how much sq feet one gallon of paint is enough: ";
    cin>>sq_ft_per_gal;
    cout<<"For "<<sq_ft_per_gal<<" sq ft how many hours of labor will be required: ";
    cin>>comp_def_lab;
    cout<<"How much does the company charges per hour of labor: ";
    cin>>lab_rate;
    cout<<"Enter the area of wall to be painted in Sq. feet: ";
    cin>>area;
    cout<<"Enter the price per gallon of paint: ";
    cin>>price_gal;
    gal_per_sq_ft=1/sq_ft_per_gal;
    lab_per_sq_ft=comp_def_lab/sq_ft_per_gal;
    gal_req = ceil(area*gal_per_sq_ft);
    lab_req = area*lab_per_sq_ft;
    paint_cost = gal_req*price_gal;
    lab_cost = lab_req*lab_rate;
    total_cost = paint_cost+lab_cost;
    cout<<"\nNo. of gallons required: "<<gal_req;
    cout<<"\nHours of labor required: "<<lab_req;
    cout<<"\nCost of paint: "<<paint_cost;
    cout<<"\nCost of labour: "<<lab_cost;
    cout<<"\nTotal cost for painting "<<area<<" sq ft wall: "<<total_cost;
    return 0;
}