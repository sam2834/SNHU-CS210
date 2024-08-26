#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inFS;     // Input file stream
    int flTmp1;      // Data value from file
    int flTmp2;      // Data value from file
    int flTmp3;      // Data value from file
    int flTmp4;      // Data value from file
    int flTmp5;      // Data value from file
    int flTmp6;      // Data value from file
    string cityName1;// Data value from file
    string cityName2;// Data value from file
    string cityName3;// Data value from file
    string cityName4;// Data value from file
    string cityName5;// Data value from file
    string cityName6;// Data value from file

    inFS.open("FahrenheitTemperature.txt");

    if (!inFS.is_open()) { //Check file opened
        cout << "FahrenheitTemperature.txt failed to open properly" << endl;

    }//Get all city names and Fahrenheit temps
    inFS >> cityName1 >> ws >> flTmp1;
    inFS >> cityName2 >> ws >> flTmp2;
    inFS >> cityName3 >> ws >> flTmp3;
    inFS >> cityName4 >> ws >> flTmp4;
    inFS >> cityName5 >> ws >> flTmp5;
    inFS >> cityName6 >> ws >> flTmp6;
    inFS.close(); //close
    //Change all temps to Celsius
    flTmp1 = (flTmp1 - 32) * 5 / 9;
    flTmp2 = (flTmp2 - 32) * 5 / 9;
    flTmp3 = (flTmp3 - 32) * 5 / 9;
    flTmp4 = (flTmp4 - 32) * 5 / 9;
    flTmp5 = (flTmp5 - 32) * 5 / 9;
    flTmp6 = (flTmp6 - 32) * 5 / 9;

    ofstream oFS("CelsiusTemperature.txt"); // Create Celsius temp file

    if (!oFS.is_open()) {  //Check file created
        cout << "CelsiusTemperature.txt failed to create!" << endl;
    }

    //Write city names and temps to every line in new file
    oFS << cityName1 << " " << flTmp1 << endl;
    oFS << cityName2 << " " << flTmp2 << endl;
    oFS << cityName3 << " " << flTmp3 << endl;
    oFS << cityName4 << " " << flTmp4 << endl;
    oFS << cityName5 << " " << flTmp5 << endl;
    oFS << cityName6 << " " << flTmp6 << endl;
    oFS.close();

    return 0;
}
