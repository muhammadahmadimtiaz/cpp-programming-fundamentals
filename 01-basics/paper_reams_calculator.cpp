#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float people,extra_copies,report_pages,pages_per_ream,copies_required,pages_required,reams_required;
    cout<<"Enter the no. of people at the meeting: ";
    cin>>people;
    cout<<"Enter the no. of extra copies Joe makes: ";
    cin>>extra_copies;
    cout<<"Enter the number of pages per report: ";
    cin>>report_pages;
    cout<<"Enter the no. of pages per ream: ";
    cin>>pages_per_ream;
    copies_required = people + extra_copies;
    pages_required = copies_required*report_pages;
    reams_required = ceil(pages_required/pages_per_ream);
    cout<<"Reams required: "<<reams_required;
    return 0;
}