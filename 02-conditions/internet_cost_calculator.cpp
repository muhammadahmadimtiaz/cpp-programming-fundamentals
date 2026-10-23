#include<iostream>
using namespace std;
int main() {
	float data_usage;
	int charges;
	cout << "Enter the amount of data used by the subscriber in GBs: ";
	cin >> data_usage;
	if (data_usage > 0.0 && data_usage <= 1.0) {
		charges = 250;
		cout << "You have used " << data_usage << " GBs data and your charges are: " << charges;
	}
	else if (data_usage > 1.0 && data_usage <= 2.0) {
		charges = 500;
		cout << "You have used " << data_usage << " GBs data and your charges are: " << charges;
	}
	else if (data_usage > 2.0 && data_usage <= 5.0) {
		charges = 1000;
		cout << "You have used " << data_usage << " GBs data and your charges are: " << charges;
	}
	else if (data_usage > 5.0 && data_usage <= 10.0) {
		charges = 1500;
		cout << "You have used " << data_usage << " GBs data and your charges are: " << charges;
	}
	else if (data_usage > 10.0) {
		charges = 2000;
		cout << "You have used " << data_usage << " GBs data and your charges are: " << charges;
	}
	else
		cout << "You entered bad data";
	return 0;
}