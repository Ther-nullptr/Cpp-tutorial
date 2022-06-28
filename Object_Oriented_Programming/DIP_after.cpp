#include <iostream>
#include <string>

class Owner
{
public:
    virtual std::string getName() = 0;
};

class Account;

class Customer : public Owner
{
public:
    void setAccount(Account* account)
    {
        customerAccount = account;
    }
    virtual std::string getName()  override
    {
        // return the Customer's name here...
    }
    // ...
private:
    Account* customerAccount;
    // ...
};

class Account
{
public:
    void setOwner(Owner* owner)
    {
        this->owner = owner;
    }
    //...
private:
    Owner* owner;
};