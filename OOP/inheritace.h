/*******************************************************************************
***                                                                          ***
***    SourceLine - Crossplatform VCS Client.                                ***
***    Copyright (C) 2014  by                                                ***
***            Priyma Yuriy (priymayuriy@gmail.com)                          ***
***                                                                          ***
***    This file is part of SourceLine Project.                              ***
***                                                                          ***
***    SourceLine is free software: you can redistribute it and/or modify    ***
***    it under the terms of the GNU General Public License as published by  ***
***    the Free Software Foundation, either version 3 of the License, or     ***
***    (at your option) any later version.                                   ***
***                                                                          ***
***    SourceLine is distributed in the hope that it will be useful,         ***
***    but WITHOUT ANY WARRANTY; without even the implied warranty of        ***
***    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         ***
***    GNU General Public License for more details.                          ***
***                                                                          ***
***    You should have received a copy of the GNU General Public License     ***
***    along with this program.  If not, see <http://www.gnu.org/licenses/>. ***
***                                                                          ***
*******************************************************************************/

#ifndef INHERITACE
#define INHERITACE

// copy from here  http://www.cplusplus.com/doc/tutorial/inheritance/

#include <iostream>
using namespace std;

class Polygon {
protected:
    int width, height;
public:
    void set_values (int a, int b)
    { width=a; height=b;}
};

class Rectangle: public Polygon {
public:
    int area ()
    { return width * height; }
};

class Triangle: public Polygon {
public:
    int area ()
    { return width * height / 2; }
};



class Mother {
public:
    Mother ()
    { cout << "Mother: no parameters\n"; }
    Mother (int a)
    { cout << "Mother: int parameter\n"; }
};

class Daughter : public Mother {
public:
    Daughter (int a)
    { cout << "Daughter: int parameter\n\n"; }
};

class Son : public Mother {
public:
    Son (int a) : Mother (a)
    { cout << "Son: int parameter\n\n"; }
};

#endif // INHERITACE

