#include <iostream>

//Interface or Abstract class
class IAnimal
{
public:
    //pure virtual function
    virtual void Say() = 0;
};

//classes, derived from IAnimal, and realize pure virtual function Say
class Donkey: public IAnimal
{
public:
    //implementation of Say from IAnimal for Donkey
    void Say()
    {
        std::cout << "Ia-Ia" <<std::endl;
    }
};
class Monkey: public IAnimal
{
public:
    //implementation of Say from IAnimal for Monkey
    void Say()
    {
        std::cout << "Ua-ha-ha" <<std::endl;
    }
};

class Human
{
public:
    //Method, wich can worked with different classes, derived from IAnimal
    void Beat(IAnimal* animal)
    {
        std::cout << "Beat animal." << std::endl;
        animal->Say();
    }

};

//Template class
template <class T>
class SuperVasya
{
public:
    //Method can take different types, and try to call method Say
    void Beat(T *animal)
    {
        std::cout << "Beat animal." << std::endl;
        animal->Say();
    }

    void Say()
    {
        std::cout << "!!!$#%%#$#%$#!" <<std::endl;
    }
};

//Function can take different types, and try to call method Say
template<class T>
void beatEveryone(T *smth)
{
    std::cout << "Beat." << std::endl;
    smth->Say();
}

int main()
{
    IAnimal* donkey = new Donkey();

    SuperVasya<IAnimal> vasyaSuper;
    vasyaSuper.Beat(donkey);

    SuperVasya<Human> vasyaSuper1;
    Human vasa;
    vasyaSuper1.Beat(&vasa);

    beatEveryone(&vasyaSuper);
    return 0;
}

