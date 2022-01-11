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

class Cat : public Animal
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

class Dog : public Animal
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


class Cow : public Animal
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
        Animal* abstractAnimal = new Cat();
        abstractAnimal->Print();
    }
    else if (a == 2)
    {
        Animal* abstractAnimal = new Dog();
        abstractAnimal->Print();
    }
    else if (a == 3)
    {
        Animal* abstractAnimal = new Cow();
        abstractAnimal->Print();
    }
    else
    {
        std::cout << "Error! Wrong number.";
    }
    return 0;
}
