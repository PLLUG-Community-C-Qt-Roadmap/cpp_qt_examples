#include <climits>
#include <typeinfo>
#include <iostream>

#define printTypeInfo(value) std::cout << std::boolalpha << typeid(value).name() << " " <<  #value << ": " << value << " size: " << sizeof(value) << " byte." << std::endl;

int main()
{
    //Logic type
    //    bool logic {true};
    //    printTypeInfo(logic);

    //Integer types
    //    char symbol {'s'};
    //    printTypeInfo(symbol);

    //    short integerShort {1};
    //    printTypeInfo(integerShort);

    //    int integer {2};
    //    printTypeInfo(integer);

    //    long integerLong {3};
    //    printTypeInfo(integerLong);

    //    long long integerLongLong {4};
    //    printTypeInfo(integerLongLong);

    //    int array[2] {0, 1};
    //    printTypeInfo(array);

    //Float types
    //    float floatNumber {1.1};
    //    printTypeInfo(floatNumber);

    //    double doubleNumber {2.1};
    //    printTypeInfo(doubleNumber);

    //    long double doubleNumberLong {3.1};
    //    printTypeInfo(doubleNumberLong);

    //Initialize and assign operator
    //    int firstInitialize {1};
    //    int forthInitialize = {4};
    //    int secondInitialize {INT64_MAX + 1};
    //    int thirdInitialize = INT64_MAX + 1;

    //References and pointers
    //    short hardcodedValue = 42;

    //    short& reference = hardcodedValue;
    //    printTypeInfo(reference);

    //    short* pointer = &hardcodedValue;
    //    printTypeInfo(pointer);
    //    printTypeInfo(*pointer);

    //    void* voidPointer = pointer;
    //    printTypeInfo(voidPointer);
    //    printTypeInfo(*((short *)voidPointer));

    //If and swich
    //    double marsRadius = 3396.2;
    //    double earthRadius = 6378.1;

    //    if(marsRadius > earthRadius)
    //    {
    //        printTypeInfo(marsRadius);
    //    }
    //    else
    //    {
    //        printTypeInfo(earthRadius);
    //    }

    //    enum SolarSystemPlanets
    //    {
    //        Mercury = 0,
    //        Venus,
    //        Earth,
    //        Mars,
    //        Jupiter,
    //        Saturn,
    //        Uranus,
    //        Neptune,
    //        Pluto,
    //        Count
    //    };

    //    SolarSystemPlanets peopleHomeland {Earth};

    //    switch (peopleHomeland) {
    //    case Mercury:
    //        std::cout << "Mercury" << std::endl;
    //        break;
    //    case Venus:
    //        std::cout << "Venus" << std::endl;
    //        break;
    //    case Earth:
    //        std::cout << "Earth" << std::endl;
    //        break;
    //    case Mars:
    //        std::cout << "Mars" << std::endl;
    //        break;
    //    case Jupiter:
    //        std::cout << "Jupiter" << std::endl;
    //        break;
    //    case Saturn:
    //        std::cout << "Saturn" << std::endl;
    //        break;
    //    case Uranus:
    //        std::cout << "Uranus" << std::endl;
    //        break;
    //    case Neptune:
    //        std::cout << "Neptune" << std::endl;
    //        break;
    //    case Pluto:
    //        std::cout << "Pluto" << std::endl;
    //        break;
    //    case Count:
    //        std::cout << "All planets count: " << Count << std::endl;
    //        break;
    //    default:
    //        std::cout << "Wrong planet!" << std::endl;
    //        break;
    //    }
    //For and while loop
    //    for (int i = 0; i < 10; ++i)
    //    {
    //        std::cout << i + 1 << " ";
    //    }
    //    std::cout << std::endl;

    //    bool continueWork = true;
    //    int counter = 10;
    //    while(continueWork)
    //    {
    //        if(--counter < 5)
    //        {
    //            continueWork = false;
    //        }
    //        std::cout << counter << " ";
    //    }
    //    std::cout << std::endl;

    return 0;
}

