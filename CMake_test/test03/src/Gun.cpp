/*
 * @Author: lwj
 * @Date: 2022-04-27 19:49:48
 * @Description:枪类接口实现
 */

#include "Gun.h"
#include <iostream>

using namespace std;

void Gun::addBullet(int bullet_number)
{
    this->_bullet_count += bullet_number;
}
bool Gun::shoot()
{
    if (this->_bullet_count <= 0)
    {
        cout << "these is no bullet!" << endl;
        return false;
    }
    cout << "bu" << endl;
    this->_bullet_count--;
    return true;
}