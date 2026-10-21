#include<iostream>
using namespace std;
int main(){
    float x1,y1,x2,y2,slope_of_line,xmid,ymid,perp_slope,y_int;
    cout<<"Enter x₁: ";
    cin>>x1;
    cout<<"Enter y₁: ";
    cin>>y1;
    cout<<"Enter x₂: ";
    cin>>x2;
    cout<<"Enter y₂: ";
    cin>>y2;
    slope_of_line = (y2-y1)/(x2-x1);
    xmid = (x1+x2)/2;
    ymid = (y1+y2)/2;
    perp_slope = -1/slope_of_line;
    y_int = ymid-(perp_slope*xmid);
    cout<<"Original Points are: ("<<x1<<","<<y1<<") and ("<<x2<<","<<y2<<")";
    cout<<"\nEquation of Perpendicular Bisector: y="<<perp_slope<<"x+"<<y_int;
    return 0;
}