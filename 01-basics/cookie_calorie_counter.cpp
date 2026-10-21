#include<iostream>
using namespace std;
int main() {
	float cookies_in_bag, servings_per_bag, cal_per_serving, cookies_eaten, calories_consumed, cookies_per_serving, servings_consumed;
	cout << "How many cookies are there in a bag: ";
	cin >> cookies_in_bag;
	cout << "How many servings are there in a bag: ";
	cin >> servings_per_bag;
	cout << "How many calories are there in a serving: ";
	cin >> cal_per_serving;
	cout << "How many cookies you actually ate: ";
	cin >> cookies_eaten;
	cookies_per_serving = cookies_in_bag / servings_per_bag;
	servings_consumed = cookies_eaten / cookies_per_serving;
	calories_consumed = servings_consumed * cal_per_serving;
	cout << "You consumed " << calories_consumed << " calories.\n";
	return 0;
}