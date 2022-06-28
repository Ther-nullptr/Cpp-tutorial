#include <iostream>

class Switchable 
{
public:
    virtual void on() = 0;
    virtual void off() = 0;
};

class Switch 
{
public:
    Switch(Switchable& switchable) : switchable(switchable) {}
    void toggle() 
    {
        if (state) 
        {
            state = false;
            switchable.off();
        } 
        else 
        {
            state = true;
            switchable.on();
        }
    }

private:
    Switchable& switchable;
    bool state {false};
};

class Lamp: public Switchable
{
public:
    void on() override
    {
        std::cout << "Lamp is on!" << std::endl;
    }

    void off() override
    {
        std::cout << "Lamp is off!" << std::endl;
    }
};

class Fan: public Switchable
{
public:
    void on() override
    {
        std::cout << "Fan is on!" << std::endl;
    }

    void off() override
    {
        std::cout << "Fan is off!" << std::endl;
    }
};

int main()
{
    Lamp lamp;
    Switch switch1(lamp);
    switch1.toggle();
    switch1.toggle();

    Fan fan;
    Switch switch2(fan);
    switch2.toggle();
    switch2.toggle();
}