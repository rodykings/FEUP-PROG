#pragma once
#include "pch.h"
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

typedef struct touristPack {
	int id;
	vector<string> places;
	Date beginDate;
	Date endDate;
	double pricePerson;
	int signMax;

};

void newPack();
void updatePack();
void removePack();
void managePacks();




