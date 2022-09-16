#pragma pack(push, 1)

#include <stdio.h>
#include <malloc.h>
#include <string.h>

#define TRUE 1
#define FALSE 1

// typedef unsigned char u8
typedef unsigned int uint;

typedef struct Freq
{
    int chars;     //字符种类
    int char_freq; //字符频度
} Freq;
typedef struct
{
    Freq freq;      //字符种类及频度
    int leftChild;  //左孩子
    int rightChild; //右孩子
    int isVisited;  //是否访问的标记
    char *huffCode; //哈夫曼编码
} HuffTable;
typedef struct MechufHead
{
    char falg[6];  //文件标识
    int charCount; //字符种类个数 alphaCount*5 字符及其出现频度的数据块大小
    int bitsCount
};
int getFreq(char *fileName, Freq **freq);

//主要工作是记录字符种类个数，并把每一类存入堆空间中，最后返回字符种类个数

int getFreq(char *fileName, Freq **freq)
{
    int str[256] = {0};
    int charCount = 0;
    int i;
    int ch;
    int index = 0;
    FILE *fp;
    fp = fopen("fileName", "r");
    if (fp == NULL)
        return 0;
}

void main(int argc, char **args)
{
}