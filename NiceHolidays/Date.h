#pragma once
#include "pch.h"

typedef struct Date {
	int day;
	int month;
	int year;
};

string dateStr(Date date);