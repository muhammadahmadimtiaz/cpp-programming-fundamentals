#include<iostream>
using namespace std;
int main() {
	float cups_of_sugar, cups_of_butter, cups_of_flour, estimated_cookies, cookies_wanted, req_sugar, req_butter, req_flour;
	cout << "Enter the cups of Sugar according to given recipe: ";
	cin >> cups_of_sugar;
	cout << "Enter the cups of butter according to given recipe: ";
	cin >> cups_of_butter;
	cout << "Enter the cups of flour according to given recipe: ";
	cin >> cups_of_flour;
	cout << "No of Cookies Made with the above amount of ingredients: ";
	cin >> estimated_cookies;
	cout << "How many cookies you want to make: ";
	cin >> cookies_wanted;
	req_sugar=cups_of_sugar/estimated_cookies;
	req_butter = cups_of_butter / estimated_cookies;
	req_flour = cups_of_flour / estimated_cookies;
	req_sugar*=cookies_wanted;
	req_butter*=cookies_wanted;
	req_flour*=cookies_wanted;
	cout << "No of cups of sugar needed: "<<req_sugar;
	cout << "\nNo of cups of butter needed: "<<req_butter;
	cout << "\nNo of cups of flour needed: "<<req_flour<<"\n";

	return 0;
}