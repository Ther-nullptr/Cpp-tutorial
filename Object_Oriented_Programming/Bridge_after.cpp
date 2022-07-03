#include <iostream>
#include <memory>

// 实现化部分
class IMilkTeaFlavorBase
{
public:
    virtual void GetFlavor() = 0;
};

class MilkTeaPearl: public IMilkTeaFlavorBase
{
public:
    void GetFlavor() override
    {
        std::cout << "flavor: pearl" << std::endl;
    }
};

class MilkTeaFairyGrass: public IMilkTeaFlavorBase
{
public:
    void GetFlavor() override
    {
        std::cout << "flavor: fairy grass" << std::endl;
    }
};

// 抽象化部分
class IMilkTeaSizeBase
{
public:
    virtual void SetFlavor(std::shared_ptr<IMilkTeaFlavorBase> flavorBase)
    {
        this->flavorBase = flavorBase;
    }
    virtual void Order() = 0;
protected:
    std::shared_ptr<IMilkTeaFlavorBase> flavorBase;
};

class MilkTeaSmall: public IMilkTeaSizeBase
{
public:
    void Order() override
    {
        std::cout << "size: small" << std::endl;
        flavorBase->GetFlavor();
    }
};

class MilkTeaMedium: public IMilkTeaSizeBase
{
public:
    void Order() override
    {
        std::cout << "size: medium" << std::endl;
        flavorBase->GetFlavor();
    }
};

class MilkTeaLarge: public IMilkTeaSizeBase
{
public:
    void Order() override
    {
        std::cout << "size: large" << std::endl;
        flavorBase->GetFlavor();
    }
};

int main()
{
    // 大杯烧仙草
    std::shared_ptr<MilkTeaFairyGrass> milkTeaFairyGrass = std::make_shared<MilkTeaFairyGrass>();
    std::shared_ptr<MilkTeaLarge> milkTeaLargeWithFairyGrass = std::make_shared<MilkTeaLarge>();
    milkTeaLargeWithFairyGrass->SetFlavor(milkTeaFairyGrass);
    milkTeaLargeWithFairyGrass->Order();
}
