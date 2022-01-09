#include <iostream>
#include <string>

class Animal
{
protected:
    std::string sound;
public:
    Animal()
    {   
        std::cout << "Constructor called for class 'Animal'." << std::endl;
    }
};

class Cat: protected Animal
{
public:
    Cat()
    {
        sound = "meow";
        this -> voice();
    }
    void voice()
    {
        std::cout << "Cat says "  << sound << "." << std::endl;
    }
};

class Dog: protected Animal
{
public:
    Dog()
        {
            sound = "woof";
            this -> voice();
        }
        void voice()
        {
            std::cout << "Dog says "  << sound << "." << std::endl;
        }
};


class Cow: protected Animal
{
public:
    Cow()
        {
            sound = "moo";
            this -> voice();
        }
        void voice()
        {
            std::cout << "Cow says "  << sound << "." << std::endl;
        }       
};


int main()
{
    int a;
    std::cout <<"Choose your animal: 1 - cat; 2 - dog; 3 - cow." << std::endl;
    std::cin >> a;
        if (a == 1) 
        {
            Cat Cat1;
        }
        else if (a == 2)
        {
            Dog Dog1;
        }
        else if (a == 3)
        {
            Cow Cow1;
        }
        else 
        {
            std::cout <<"Error! Wrong number.";
        }
}