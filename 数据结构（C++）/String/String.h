/**
 * @Author: lwj
 * @Date: 2022-06-01 15:54:01
 * @Description:
 * @FilePath: /Linux_C_C-plus-plus/数据结构（C++）/String/string.h
 **/
class String
{
private:
    char *data;    //存储串
    int maxSize;   //最大容量
    int strLength; //记录串的长度
public:
    String(const char *s = nullptr);
    String(const String &S);
    ~String();
};
class outOfRange : public exception
{
public:
}