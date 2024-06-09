#pragma once
#include <iostream>
#include <string>
#include "Service.h"
#include "WeatherService.h"
using namespace std;

class XmlService :public Service
{
public:
	virtual WeatherService getWeather(std::string s) override;
	virtual ~XmlService() {};
};