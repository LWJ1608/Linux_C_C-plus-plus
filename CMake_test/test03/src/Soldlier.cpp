/*
 * @Author: lwj
 * @Date: 2022-04-27 20:15:35
 * @Description:士兵类实现
 */
#include "Soldier.h"
#include "Gun.h"

Soldier::Soldier(std::string name)
{
    this->_name = name;
    this->_ptr_gun = nullptr;
}
void Soldier::addGun(Gun *prt_gun)
{
    this->_ptr_gun = prt_gun;
}
void Soldier::addBulletToGun(int num)
{
    this->_ptr_gun->addBullet(num);
}
bool Soldier::fire()
{

    return this->_ptr_gun->shoot();
}
Soldier::~Soldier()
{
    if (this->_ptr_gun == nullptr)
    {
        return;
    }
    delete this->_ptr_gun;
    this->_ptr_gun = nullptr;
}