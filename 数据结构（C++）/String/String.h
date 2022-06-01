/**
 * @Author: lwj
 * @Date: 2022-06-01 15:54:01
 * @Description:
 * @FilePath: /Linux_C_C-plus-plus/数据结构（C++）/String/string.h
 **/
class outOfRange : public exception //用于检查范围的有效性
{
public:
    const char *whar() const throw()
    {
        return "ERROR! OUT OF RANGE.\n";
    }
};
class badSize : public exception //用于检查长度的有效性
{
public:
    const char *whar() const throw()
    {
        return "ERROR! BAD SIZE.\n";
    }
};
class String
{
private:
    char *data;    //存储串
    int maxSize;   //最大容量
    int strLength; //记录串的长度
public:
    String(const char *s = nullptr); //构造函数
    String(const String &S);         //拷贝构造
    ~String();                       //析构函数
};

String::String(const char *s)
{
}