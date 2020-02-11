/**
 * Storm object
 * 
 * Author: Keon Hayes
 */

#include <iostream>

using namespace std;

struct Storm {
    string stormType;
    string name;        //The name of the hurricane/tropical storm
    int maxWind;        //The maximum recorded windspeed of the storm (in miles per hour)
    string monthFormed; //The month in which the storm formed
    int category;       //The storms category. 0 for tropical storms and 1-5 for hurricanes.
    
    //Empty constructor
    Storm() {

    }
    
    //Four-argument constructor
    Storm(string nameIn, int maxWindIn, string monthFormedIn, int categoryIn) {
        name = nameIn;
        maxWind = maxWindIn;
        monthFormed = monthFormedIn;
        category = categoryIn;
    }

    //toString method. Returns the Storm object's information as a string. 
    string toString() {
        if(maxWind <= 38 && category == 0) {
            stormType = "Tropical Depression"; //If wind speed is 38 MPH or less, set stormType to "Tropical Depression"
        }
        if(maxWind >= 39 && category == 0) {
            stormType = "Tropical Storm";      //If wind speed is 39 MPH or greater and category is 0, set stormType to "Tropical Storm"
        }
        if(maxWind >= 70 && category >= 1) {
            stormType = "Hurricane";           //If wind speed is at least 70 MPH and category is at least 1, set stormType to "Hurricane"
        }
        return stormType + " " + name + " - Wind Speed: " + to_string(maxWind) + " MPH; Month Formed: " + monthFormed + "; Category " + to_string(category);
    }
};