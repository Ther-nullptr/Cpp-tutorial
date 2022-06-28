class Bird
{
public:
    virtual void eat() = 0;
    virtual void breathe() = 0;
    virtual void fly() = 0;
};

class Pigeon: public Bird
{
public:
    virtual void eat() override 
    {
        // ...
    }

    virtual void breathe() override
    {
        // ...
    }

    virtual void fly() override 
    {
        // ...
    }
};

class Penguin: public Bird
{
public:
    virtual void eat() override 
    {
        // ...
    }

    virtual void breathe() override
    {
        // ...
    }

    virtual void fly() override 
    {
        // ???
    }
};
