#include <iostream>
#include <vector>

using namespace std;
enum note {
        middleC, CSharp, Cflat
};

class Animal
{
public:
        virtual void eat() const { cout << "Generaic animal eat" << endl;}
        virtual ~Animal() {}
};

class Fish : public Animal
{
public:
        void eat() const { cout << "Fish eat" << endl; }
};

class Dog : public Animal
{
public:
        void eat() const { cout << "Dog eat" << endl; }
};

class Cat : public Animal
{
public:
        void eat() const { cout << "Cat eat" << endl; }
};

class Instrument
{
public:
        virtual void play(note) const {
                cout << "Instrument::play" << endl;
        }
};

class Wind : public Instrument
{
public:
        void play(note) const {
                cout << "Wind::play" << endl;
        }
};

int maina()
{
        std::vector<Animal*> animals;
        animals.push_back(new Animal());
        animals.push_back(new Fish());
        animals.push_back(new Dog());
        animals.push_back(new Cat());
        for(std::vector<Animal*>::const_iterator it = animals.begin();
            it != animals.end(); ++it)
        {
                (*it)->eat();
                delete *it;
        }
        return 0;
}

void tune(Instrument &i)
{
        i.play(middleC);
}

int main()
{
        Wind w;
        tune(w);
}
