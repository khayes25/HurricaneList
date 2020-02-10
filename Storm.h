/**
 * Author: Keon Hayes
 */

#include <iostream>

using namespace std;

struct Storm {
    private:
    string stormType;
    string name; //The name of the hurricane/tropical storm
    int maxWind; //The maximum recorded windspeed of the storm
    string monthFormed; //The month in which the storm formed
    int category; //The storms category. 0 for tropical storms and 1-5 for hurricanes.
    public:
    Storm(string nameIn, int maxWindIn, string monthFormedIn, int categoryIn) {
        name = nameIn;
        maxWind = maxWindIn;
        monthFormed = monthFormedIn;
        category = categoryIn;
    }

    string toString() {
        if(category == 0 && maxWind <= 38) {
            stormType = "Tropical Depression";
        }
        if(category == 0 && maxWind >= 39) {
            stormType = "Tropical Storm";
        }
        else {
            stormType = "Hurricane";
        }
        return stormType + " " + name + " - Wind Speed: " + to_string(maxWind) + " MPH; Month Formed: " + monthFormed + "; Category " + to_string(category);
    }
};