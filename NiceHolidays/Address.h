#pragma once
#include "pch.h"
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

typedef struct Address {
	string street;
	string door;
	string floor;
	string postalCode;
	string location;
};

string addressStr();