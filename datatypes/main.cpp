#include <iostream>

void old_style_function(int arr[], size_t size)
{
    for (int index = 0; index < size; ++index)
    {
        std::cout << arr[index] << std::endl;
    }
    std::cout << std::endl;
}

int main()
{
    // Some fundamental types that we will use
    // ==============================

    std::cout << "Some fundamental types: " << std::endl;
    std::cout << std::endl;

    int integerValue{42};
    std::cout << "integerValue = " << integerValue << std::endl;

    double floatingPointValue{42.0};
    std::cout << "floatingPointValue = " << floatingPointValue << std::endl;

    bool boolValue{true};
    std::cout << "boolValue = " << boolValue << std::endl;

    char singleCharacter{'c'};
    std::cout << "singleCharacter = " << singleCharacter << std::endl;

    std::cout << std::endl;

    // Example of some compound types
    // ==============================

    std::cout << "Example of some compound types: " << std::endl;
    std::cout << std::endl;

    int &integerValueRef{integerValue};     // Reference to integer
    integerValueRef = 43;                   // integerValue also modified!!!

    std::cout << "integerValueRef = " << integerValueRef << std::endl;
    std::cout << "integerValue = " << integerValue << std::endl;
    std::cout << std::endl;

    // ---

    int *poinerToIntegerValue{&integerValue};   // Take integerValue address and assign to poiner
    *poinerToIntegerValue = 44;                 // integerValue also modified!!!

    std::cout << "poinerToIntegerValue = " << poinerToIntegerValue << std::endl;
    std::cout << "*poinerToIntegerValue = " << *poinerToIntegerValue << std::endl;
    std::cout << "integerValue = " << integerValue << std::endl;
    std::cout << std::endl;

    // ---

    int plainArray[] {1, 2, 3, 4, 5};   // You should know exact size or it could  be calculated
                                        // during initialization
    std::cout << "plainArray = " << plainArray << std::endl;

    // Iterating through
    for (auto elem: plainArray)
    {
        std::cout << elem << std::endl;
    }
    std::cout << std::endl;

    size_t plainArraySize = sizeof(plainArray) / sizeof(plainArray[0]);
    std::cout << "plainArraySize = " << plainArraySize << std::endl;
    // Old style passing array to function
    old_style_function(plainArray, plainArraySize);

    // ---

    // Enumerations
    enum class TrafficLight{Red, Yellow, Green};
    TrafficLight currentLight{TrafficLight::Green};

    return 0;
}

