#include <array>
#include <memory>
#include <climits>
#include <typeinfo>
#include <iostream>
#include <algorithm>

#define printTypeInfo(value) std::cout << std::boolalpha << typeid(value).name() << " " <<  #value << ": " << value << " size: " << sizeof(value) << " byte." << std::endl;

enum class Planets
{
    Mercury = 0,
    Venus,
    Earth,
    Mars,
    Jupiter,
    Saturn,
    Uranus,
    Neptune,
    Pluto
};

void printPlanetName(Planets planet)
{
    switch (planet)
    {
    case Planets::Mercury:
        std::cout << "Mercury" << std::endl;
        break;
    case Planets::Venus:
        std::cout << "Venus" << std::endl;
        break;
    case Planets::Earth:
        std::cout << "Earth" << std::endl;
        break;
    case Planets::Mars:
        std::cout << "Mars" << std::endl;
        break;
    case Planets::Jupiter:
        std::cout << "Jupiter" << std::endl;
        break;
    case Planets::Saturn:
        std::cout << "Saturn" << std::endl;
        break;
    case Planets::Uranus:
        std::cout << "Uranus" << std::endl;
        break;
    case Planets::Neptune:
        std::cout << "Neptune" << std::endl;
        break;
    case Planets::Pluto:
        std::cout << "Pluto" << std::endl;
        break;
    default:
        std::cout << "Wrong planet!" << std::endl;
        break;
    }
}

int main(int argc, char *argv[])
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

    //Float types
    //    float floatNumber {1.1};
    //    printTypeInfo(floatNumber);

    //    double doubleNumber {2.1};
    //    printTypeInfo(doubleNumber);

    //    long double doubleNumberLong {3.1autoVariable};
    //    printTypeInfo(doubleNumberLong);

    //    auto autoVariable = *argv;
    //    printTypeInfo(autoVariable);

    //Initialize and assign operator
    //    int firstInitialize {1};
    //    int forthInitialize = {4};
    //    int secondInitialize {INT64_MAX + 1};
    //    int thirdInitialize = INT64_MAX + 1;

    //References and pointers
    //    auto hardcodedValue = 42;

    //    auto& reference = hardcodedValue;
    //    printTypeInfo(reference);

    //    decltype(hardcodedValue)* pointer {&hardcodedValue};
    //    printTypeInfo(pointer);
    //    printTypeInfo(*pointer);
    //    delete pointer;         // Bad-bad delete

    //    void* voidPointer = pointer;
    //    printTypeInfo(voidPointer);
    //    printTypeInfo(*((decltype(hardcodedValue)* )voidPointer));

    //Smart pointers
    //    auto uniquePtr = std::make_unique<decltype(hardcodedValue)>(hardcodedValue);
    //    printTypeInfo(uniquePtr.get());
    //    printTypeInfo(*uniquePtr);

    //    auto sharedPtr = std::make_shared<decltype(hardcodedValue)>(hardcodedValue);
    //    printTypeInfo(sharedPtr.get());
    //    printTypeInfo(*sharedPtr);

    //Constants
    //    const auto marsRadius = 3396.2;
    //    const auto earthRadius = 6378.1;

    //If and swich
    //    if(marsRadius > earthRadius)
    //    {
    //        printTypeInfo(marsRadius);
    //    }
    //    else
    //    {
    //        printTypeInfo(earthRadius);
    //    }
    //    printPlanetName(Planets::Earth);

    //Arrays, for and while loop
    //    const auto arraySize = 3;
    //    int array[arraySize] {0, 1, 2};
    //    printTypeInfo(array);
    //    printTypeInfo(array[0]);
    //    printTypeInfo(*array + 1);
    //    printTypeInfo(2[array]);

    //    int* arrayDynamic = new int[2]{2, 3};
    //    printTypeInfo(arrayDynamic);
    //    printTypeInfo(*arrayDynamic);
    //    printTypeInfo(arrayDynamic[1]);
    //    delete[] arrayDynamic;
    //    //Raw for loop
    //    for (int i = 0; i < arraySize; ++i)
    //    {
    //        std::cout << array[i] << " ";
    //    }
    //    std::cout << std::endl;

    //    //Iterator for loop
    //    for(auto it = std::begin(array); it != std::end(array); ++it)
    //    {
    //        std::cout << (*it) << " ";
    //    }
    //    std::cout << std::endl;

    //    //Range base for loop
    //    for(const auto& element : array)
    //    {
    //        std::cout << element << " ";
    //    }
    //    std::cout << std::endl;

    //    //std::algotithm for_each loop
    //    std::for_each(std::begin(array), std::end(array),[](auto element) {
    //        std::cout << element << " ";
    //    });
    //    std::cout << std::endl;

    //    std::array<std::string, 3> wordsArray {"first", "second", "third"};
    //    auto word = std::begin(wordsArray);
    //    while(word != std::end(wordsArray))
    //    {
    //        std::cout << *(word++) << " ";
    //    }
    //    std::cout << std::endl;

    return 0;
}

