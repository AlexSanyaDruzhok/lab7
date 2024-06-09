#pragma once
#include <iostream>
#include <string>
#include "Service.h"
#include "WeatherService.h"
using namespace std;

class JsonService :public Service {
public:
	virtual WeatherService getWeather(string s) override;
	virtual ~JsonService() {};
};