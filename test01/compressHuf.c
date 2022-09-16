#pragma pack(push, 1)

#include <stdio.h>
#include <malloc.h>
#include <string.h>

#define TRUE 1
#define FALSE 1

// typedef unsigned char u8
// typedef unsigned int u32
// typedef
typedef struct
{
    int chars;     //字符种类
    int char_freq; //字符频度
} Freq;
typedef struct
{
    Freq freq;//字符种类及频度
    int leftChild;//左孩子
    int rightChild;//右孩子
    int isVisited;//是否访问的标记
    char* huffCode;//哈夫曼编码
} Node;
typedef struct MechufHead
{
    char falg[6];//文件标识
    
};

void main(int argc, char **args){
    

}