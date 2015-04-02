#include "personalinformation.h"

PersonalInformation::PersonalInformation()
{
    //Initialization of mBirthYear member of the class by zero.
    mBirthYear = 0;
}
/*
 ***************************************************************************************************
 */
void PersonalInformation::setBirthYear(unsigned int year)
{
    if ((1900 < year) && (year < 2016))
    {
        mBirthYear = year;
    }
    else
    {
        mError = "Incorrect year";
    }
}
/*
 ***************************************************************************************************
 */
unsigned int PersonalInformation::birthYear()
{
    return mBirthYear;
}
/*
 ***************************************************************************************************
 */
std::string PersonalInformation::error()
{
    return mError;
}
/*
 ***************************************************************************************************
 */
