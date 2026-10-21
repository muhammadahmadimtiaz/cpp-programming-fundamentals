#include<iostream>
using namespace std;
int main(){
    float min_avg,curr_avg,final_weight,curr_marks,req_marks;
    cout<<"Enter minimum average required: ";
    cin>>min_avg;
    cout<<"Enter current average in course: ";
    cin>>curr_avg;
    cout<<"Enter how much the final counts as a percentage of the course grade: ";
    cin>>final_weight;
    curr_marks = (curr_avg*(100-final_weight))/100;
    req_marks = min_avg - curr_marks;
    req_marks = (req_marks/final_weight)*100;
    cout<<"\nReq: "<<req_marks;
    return 0;
}