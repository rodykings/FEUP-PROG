#pragma once
#include "pch.h"
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include "Address.h"

using namespace std;

typedef struct Client {
	string name;
	string nif;
	int numPeople;
	Address address;
	vector<int> boughtPacks;
	double moneySpent;
};

void newClient();
void updateClient();
void removeClient();


