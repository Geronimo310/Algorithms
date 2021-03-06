#include <iostream>
#include <string>

class Animal
{
public:
    std::string sound, animal;
    Animal()
    {
        std::cout << "Constructor called." << std::endl;
    }
    void virtual Print()
    {
        std::cout << animal << " says " << sound << "." << std::endl;
    }
};

class Cat : virtual public Animal
{
public:
    Cat()
    {
        animal = "Cat";
        sound = "meow";
    }
    void Print()
    {
        std::cout << animal << " says " << sound << "." << std::endl;
    }
};

class Dog : virtual public Animal
{
public:
    Dog()
    {
        animal = "Dog";
        sound = "woof";
    }
    void Print()
    {
        std::cout << animal << " says " << sound << "." << std::endl;
    }
};


class Cow : virtual public Animal
{
public:
    Cow()
    {
        animal = "Cow";
        sound = "moo";
    }

    void Print()
    {
        std::cout << animal << " says " << sound << "." << std::endl;
    }
};


int main()
{
    Animal animal1;

    int a;
    std::cout << "Choose your animal: 1 - Cat; 2 - Dog; 3 - Cow." << std::endl;
    std::cin >> a;
    if (a == 1)
    {
        Animal* aAnimal = new Cat();
        aAnimal->Print();
    }
    else if (a == 2)
    {
        Animal* aAnimal = new Dog();
        aAnimal->Print();
    }
    else if (a == 3)
    {
        Animal* aAnimal = new Cow();
        aAnimal->Print();
    }
    else
    {
        std::cout << "Error! Wrong number.";
    }
    return 0;
}
