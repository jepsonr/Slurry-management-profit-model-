//program description -- Calculates the volume of (SAG Mill) 
//grinding material from its measured height
//created/revised by <Rex Jepson> <10/12/2015>

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//function prototypes

double volumeGrindingMaterial (double, double, double );

int main()
{
    //declare variables (input is in feet and RPM)
    double sagBallHeight = 0.0;
    double RADIUS_MILL = 14.0;
    double WIDTH_MILL = 12.07;
    double actualMillSpd = 0.0;
    double volGrindMat = 0.0;
    //enter input measurements
    cout << "Measured grinding material height (in feet): ";
    cin >> sagBallHeight;
    cout << "Actual mill speed: ";
    cin >> actualMillSpd;

    //call function
    volGrindMat = volumeGrindingMaterial
                    (sagBallHeight,
                     RADIUS_MILL,
                     WIDTH_MILL);


    //display
    cout << fixed << setprecision(2);
    cout << "Current volume of grinding material: " << endl;
    cout << volGrindMat;

    cin.ignore();
    return 0;
}//end main function

//**************function definitions***************
//function header
double volumeGrindingMaterial (double sagBallHeight,
                               double RADIUS_MILL,
                               double WIDTH_MILL )
{

    //calculates the volume of the grinding material
    double vol = 0.0;
    double area = 0.0;
    double theta = 0.0;
    double hChord = 0.0;
    double areaSect = 0.0;
    double areaTrigl = 0.0;
    double areaSubChd = 0.0;

    theta = acos(( RADIUS_MILL - sagBallHeight ) / RADIUS_MILL);
    hChord = abs ( RADIUS_MILL * sin(theta));
    area = 3.14159 * pow (RADIUS_MILL, 2);
    areaSect = area * theta / 3.14159;
    areaTrigl = hChord * (RADIUS_MILL - sagBallHeight);
    areaSubChd = areaSect - areaTrigl;
    vol = areaSubChd * WIDTH_MILL;

    return vol;//	Max Volume (cu units) = 3716.1
}

//function header



