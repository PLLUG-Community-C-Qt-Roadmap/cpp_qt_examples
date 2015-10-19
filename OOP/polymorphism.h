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

#ifndef POLYMORPHISM
#define POLYMORPHISM

#include <iostream>
#include <string>
using namespace std;
namespace Polymorphism {
    class Polygon {
      protected:
        int width, height;
      public:
        void set_values (int a, int b)
          { width=a; height=b; }
        virtual int area() =0;
        void printarea()
          { cout << this->area() << '\n'; }
    };

    class Rectangle: public Polygon {
      public:
        int area (void)
          { return (width * height); }
    };

    class Triangle: public Polygon {
      public:
        int area (void)
          { return (width * height / 2); }
    };



    class Animal
    {
    //http://www.learncpp.com/cpp-tutorial/122-virtual-functions/
    protected:
        std::string m_strName;

        // We're making this constructor protected because
        // we don't want people creating Animal objects directly,
        // but we still want derived classes to be able to use it.
        Animal(std::string strName)
            : m_strName(strName)
        {
        }

    public:
        std::string GetName() { return m_strName; }
        virtual const char* Speak() = 0;
    };

    class Cat: public Animal
    {
    public:
        Cat(std::string strName)
            : Animal(strName)
        {
        }

        virtual const char* Speak() { return "Meow"; }
    };

    class Dog: public Animal
    {
    public:
        Dog(std::string strName)
            : Animal(strName)
        {
        }

        virtual const char* Speak() { return "Woof"; }
    };

}
#endif // POLYMORPHISM

