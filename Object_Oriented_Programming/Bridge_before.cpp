#include <iostream>

// 单维度继承设计

class IMilkTea // 通用接口
{
    virtual void order() = 0;
};

class MilkTeaSmallCup: public IMilkTea
{
    void order() override
    {
        std::cout << "order info:" << std::endl;
        std::cout << "size: small cup" << std::endl;
    }
};

class MilkTeaMediumCup: public IMilkTea
{
    void order() override
    {
        std::cout << "order info:" << std::endl;
        std::cout << "size: medium cup" << std::endl;
    }
};

class MilkTeaLargeCup: public IMilkTea
{
    void order() override
    {
        std::cout << "order info:" << std::endl;
        std::cout << "size: large cup" << std::endl;
    }
};

// 多维度继承设计

class MilkTeaSmallCupFairyGrass: public IMilkTea
{
    void order() override
    {
        std::cout << "order info:" << std::endl;
        std::cout << "size: small cup" << std::endl;
        std::cout << "flavor: fairy grass" << std::endl;
    }
};

class MilkTeaSmallCupPearl: public IMilkTea
{
    void order() override
    {
        std::cout << "order info:" << std::endl;
        std::cout << "size: small cup" << std::endl;
        std::cout << "flavor: pearl" << std::endl;
    }
};

// ...