/*Create a class that has four constructors:
* one that accepts no input parameters
* one that accepts name
* one that accepts license number
* one that accepts name and license number
* The default values are:
name = NA
license = 0
*/

#include<iostream>
#include<string>
using namespace std;

class Dog{
    string name;
    int license;
    public:
    Dog(){
        name = "NA";
        license = 0;
    }
    Dog(string nameIn){
        name = nameIn;
        license = 0;
    }
    Dog(int licenseIn){
        name = "NA";
        license = licenseIn;
    }
    Dog(string nameIn, int licenseIn){
        name = nameIn;
        license = licenseIn;
    }
    string getName(){
        return name;
    }
    int getLicense(){
        return license;
    }
};