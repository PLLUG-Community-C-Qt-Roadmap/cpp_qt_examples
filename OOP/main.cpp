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

#include <iostream>

using namespace std;

#include "dammoop.h" // why not <> ?
#include "iloveencapsulation.h"
#include "inheritace.h"
#define UNUSED(x) (void*)&x;

void encapsulationExample(); // how not define body here?
void inheritanceExample();


int main()
{
    encapsulationExample();
    inheritanceExample();
}




void encapsulationExample()
{
    cout << "------Yo encapsulationExample------";
    //try to change definitions
    ILoveEncapsulation bestPractice{1,4,2,2,1};
    DammOOP monkey{5,4,3,2,1};
    cout << "monkey\n";
    for (int i = 0; i < monkey.itemsCount; ++i) {
        cout << monkey.mTheBestItems[i] << " ";
    }
    cout << endl << "bestPractice\n";
    //TODO: uncoment me to see magic
    //monkey.itemsCount += 5;
    for (int i = 0; i < bestPractice.size(); ++i) {
        cout << bestPractice.getItem(i) << " ";
    }
    cout << endl << "AFTER sort" << endl;
    monkey.sortMeBaby();
    bestPractice.sortMeBaby();

    cout << "monkey\n";
    for (int i = 0; i < monkey.itemsCount; ++i) {
        cout << monkey.mTheBestItems[i] << " ";
    }
    cout << endl << "bestPractice\n";
    for (int i = 0; i < bestPractice.size(); ++i) {
        cout << bestPractice.getItem(i) << " ";
    }
    cin.get();
}

void inheritanceExample()
{
    //PART 1 no copy code
    cout << "------inheritanceExample------\n";
    cout << "no copy code\n";
    Rectangle rect;
    Triangle trgl;
    rect.set_values (4,5);
    trgl.set_values (4,5);
    cout << rect.area() << '\n';
    cout << trgl.area() << '\n';
    //PART 2
    //constructors order;
    cout << "\n\n\n\nconstructors order\n";
    Daughter kelly(0);
    UNUSED(kelly);
    Son bud(0);
    UNUSED(bud);
}
