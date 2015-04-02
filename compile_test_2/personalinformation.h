#ifndef PERSONALINFORMATION_H
#define PERSONALINFORMATION_H

#include <iostream>

//Type PersonalInformation
class PersonalInformation
{
public:
    //Constructor. Always runs, when object of class is created.
    PersonalInformation();

    //Method. Function incapsulated in class. Can be used from object of the class, or inside the
    //class.
    //setBirthYear - set mBirthYear by user input year. If condition is incorect - set error.
    void setBirthYear(unsigned int year);

    //birthYear - returns current year for user.
    unsigned int birthYear();

    //error - returns last error for user.
    std::string error();

private:
    // private(available only inside current class) class members(fields of class).
    int mBirthYear;
    std::string mError;
};

#endif // PERSONALINFORMATION_H
