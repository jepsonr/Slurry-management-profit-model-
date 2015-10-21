//Introduction to Programming w/ C++ Final project
//Calculation of circulating load and
//the mill's specific coeffecent
//created/revised by <Rex Jepson> <10/10/2015>

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//function prototypes
double weightFeed( double, double );
double volumeFeed( double, double );
double circLoad ( double, double );

int main()
{
    //declare variables
    double waterFeedRate = 0.0;
    double oreFeedRate = 0.0;
    const double WATER_PPG = 8.345; //PPG = pounds per gallon
    const int ORE_PPT = 2000; //PPT = pounds per ton
    double passingVolume = 0.0;
    double totalWeight = 0.0;
    double totalVolume = 0.0;
    double unitWeight = 0.0; // mill coeffecient
    double circulatingLoad = 0.0;

    //enter input
    cout << "Water feed rate (gals per min): ";
    cout << endl;
    cin >> waterFeedRate;
    cout << endl << endl;

    cout << "Ore feed rate (tons per hour):";
    cout << endl;
    cin >> oreFeedRate;
    cout << endl << endl;

    cout << "Passing volume (cuft per min):";
    cout << endl;
    cin >> passingVolume;
    cout << endl << endl;

    //call functions
    totalWeight = weightFeed(waterFeedRate, oreFeedRate);
    totalVolume = volumeFeed(waterFeedRate, oreFeedRate);
    unitWeight = totalWeight / totalVolume;
    circulatingLoad = circLoad ( passingVolume, unitWeight);

    //display
    cout << fixed << setprecision(2);
    cout << "Mill coeffecient is: "
         << unitWeight << " lbs per cuft"
         << endl << endl;
    cout << "Circulating Load: "
         << circulatingLoad << " Short tons"
         << endl << endl;


    cin.get();
    return 0;
}//end main function

//**************function definitions***************
//function header
double weightFeed(double waterFeedRate, double oreFeedRate)

{
    //define variable
    double weight = 0.0;
    //calculates the total weight of
    //water and ore entering the mill
    weight = waterFeedRate * 8.345 +
             oreFeedRate * 2000 / 60;

    return weight;
}//end  function


//function header
double volumeFeed(double waterFeedRate, double oreFeedRate)
{
    // define variable
    double volume = 0.0;
    const double CUBIC_FEET_PER_POUND = 156.064;
    //calculates the total volume of
    //water and ore entering the mill
    volume = waterFeedRate * 8.34 / 64.4 +
               oreFeedRate * 2000 /
               (60 * CUBIC_FEET_PER_POUND);

    return volume;
}//end  function

//function header
double circLoad ( double passingVolume, double unitWeight)
{
    // define variable
    double load = 0.0;
    double MILL_DIAMETER = 28;
    double MILL_LENGTH = 12;
    //calculates the circulating load for
    //the SAG mill's total load in circulation
    load = unitWeight * 3.14159
            * pow(MILL_DIAMETER, 2)
            * MILL_LENGTH
            * passingVolume
            / 8000;

    return load;
}//end  function

