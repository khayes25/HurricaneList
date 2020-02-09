#include <iostream>

using namespace std;

struct Storm {
    string name; //The name of the hurricane/tropical storm
    int maxWind; //The maximum recorded windspeed of the storm
    string monthFormed; //The month in which the storm formed
    int category; //The storms category. 0 for tropical storms and 1-5 for hurricanes.
};