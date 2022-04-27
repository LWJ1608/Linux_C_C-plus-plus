/*
 * @Author: lwj
 * @Date: 2022-04-27 20:12:18
 * @Description:士兵类声明
 */
#pragma once

#include "Gun.h"
#include <string>

class Soldier
{
private:
    /* data */
    std::string _name;
    Gun *_ptr_gun;

public:
    Soldier(std::string name);
    void addGun(Gun *prt_gun);
    void addBulletToGun(int num);
    bool fire();
    ~Soldier();
};
