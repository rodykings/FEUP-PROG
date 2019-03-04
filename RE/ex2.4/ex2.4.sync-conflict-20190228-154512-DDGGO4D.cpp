#include <iostream>;
#include <string>;

using namespace std;

int main()
{
	double productWeight, price, extraFractionWeight, fractionPrice;
	string finalStr = "To deliver this product, you have to spend ";

	cout << "Input the product weight: ";
	cin >> productWeight;

	if (productWeight < 500) {
		price = 5;
	} else if (productWeight >= 500 && productWeight >= 1000){
		fractionPrice = 1.5;
		extraFractionWeight = 100;
		price =	int((productWeight - 500) / extraFractionWeight);
		
		
	} else {
		fractionPrice = 5;
		extraFractionWeight = 250;
	}
	
	cout << finalStr << price << " euros";
	return 0;
}