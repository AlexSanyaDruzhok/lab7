#include <iostream>
#include <vector>
#include "JsonServie.h"
#include "Service.h"
#include "WeatherService.h"
#include "json.hpp"
using namespace std;

int main() {
    JsonService js;
    Weather w = js.getWeather("/root/pr/profLab7/src/weather.json");
    XmlService xs;
    Weather w = xs.getWeather("/root/pr/profLab7/src/weather.xml");
}