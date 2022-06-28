
class Account;

class Customer
{
public:
    // ...
    void setAccount(Account *account)
    {
        customerAccount = account;
    }
    // ...
private:
    Account *customerAccount;
};

class Account
{
public:
    void setOwner(Customer *customer)
    {
        owner = customer;
    }

private:
    Customer *owner;
};

int main()
{
    Account* account = new Account { };
    Customer* customer = new Customer { };
    account->setOwner(customer);
    customer->setAccount(account);
}