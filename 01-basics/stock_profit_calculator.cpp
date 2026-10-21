#include<iostream>
using namespace std;
int main(){
    float shares_bought,shares_sold,b_price,s_price,b_comm,s_comm,total_buy,total_sell,b_comm_amt,s_comm_amt,price_diff;
    cout<<"Enter the number of shares Joe Purchased: ";
    cin>>shares_bought;
    cout<<"Enter the price($) per share when Joe bought them: ";
    cin>>b_price; 
    cout<<"Enter the percentage of commision Joe paid to the Broker at time of buying: ";
    cin>>b_comm;
    cout<<"Enter the number of shares Joe Sold: ";
    cin>>shares_sold;
    cout<<"Enter the price($) per share when Joe sold them: ";
    cin>>s_price;
    cout<<"Enter the percentage of commision Joe paid to the Broker at time of selling: ";
    cin>>s_comm;
 

    total_buy= shares_bought*b_price;
    b_comm_amt= (b_comm*total_buy)/100;
    total_sell= shares_sold*s_price;
    s_comm_amt= (s_comm*total_sell)/100;
    price_diff = (total_sell-s_comm_amt)-(total_buy+b_comm_amt);
    cout<<"\nThe amount of money Joe paid for the shares: $"<<total_buy;
    cout<<"\nThe amount of commision Joe paid to Broker when he bought the share: $"<<b_comm_amt;
    cout<<"\nThe amount of money Joe sold the shares for: $"<<total_sell;
    cout<<"\nThe amount of commision Joe paid to Broker when he sold the share: $"<<s_comm_amt;
    cout<<"\nThe Difference in collective amount(price+commision) at time of selling and buying shares: $"<<price_diff;
    return 0;
}

