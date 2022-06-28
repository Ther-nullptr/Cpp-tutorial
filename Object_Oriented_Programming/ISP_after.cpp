class Lifeform
{
public:
    virtual void eat() = 0;
    virtual void breathe() = 0;
};

class Flyable
{
public:
    virtual void fly() = 0;
};

class Pigeon: public Lifeform, public Flyable
{
public:
    void eat() override
    {
        // ...
    }

    void breathe() override
    {
        // ...
    }

    void fly() override
    {
        // ...
    }
};

class Penguin: public Lifeform
{
public:
    void eat() override
    {
        // ...
    }

    void breathe() override
    {
        // ...
    }
};