#include <iostream>;
#include <string>;

using namespace std;

int main()
{
	double productWeight, price, extraFractionWeight, fractionPrice;
	string finalStr = "To deliver this product, you have to spend ";

	cout << "Input the product weight: ";
	cin >> productWeight;

	//product weight is less than 500 grams
	if (productWeight < 500) {
		price = 5;
	//product weight is between 500 and 1000 grams
	} else if (productWeight >= 500 && productWeight <= 1000){
		fractionPrice = 1.5;
		extraFractionWeight = 100;
		price =	5 + ceil(((productWeight - 500) / extraFractionWeight)) * fractionPrice;
	//product weight is more than 1000 grams
	} else {
		fractionPrice = 5;
		extraFractionWeight = 250;
		price = 12.5 + ceil(((productWeight - 1000) / extraFractionWeight)) * fractionPrice;
	}
	
	cout << finalStr << price << " euros";
	return 0;
}