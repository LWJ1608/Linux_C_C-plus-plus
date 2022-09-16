#pragma pack(push, 1)

#include <stdio.h>
#include <malloc.h>
#include <string.h>

#define TRUE 1
#define FALSE 1

// typedef unsigned char u8
// typedef unsigned int uint;

typedef struct Freq
{
    int charType; //字符种类
    int charFreq; //字符频度
} Freq;
typedef struct
{
    Freq Freq;      //字符种类及频度
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
int getFreq(char *fileName, Freq **freq);           //统计字符个数及频度
HuffTable *intHuffTable(Freq *Freq, int charCount); //初始化哈夫曼表
/**
 * @description:主要工作是记录字符种类个数，并把每一类存入堆空间中，最后返回字符种类个数
 * @param {char} *fileName
 * @param {Freq} **freq
 * @return charCount
 */
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

    while (!feof(fp))
    {
        ch = fgetc(fp);
        str[ch]++; //计算字符出现频度
    }
    fclose(fp);
    for (i = 0; i < 256; i++)
    {
        if (str[i])
        {
            charCount++;
        }
    }
    *freq = (Freq *)calloc(sizeof(Freq), charCount);
    for (i = 0; i < 256; i++)
    {
        (*freq)[index].charType = i;
        (*freq)[index].charFreq = str[i];
    }
    return charCount;
}
HuffTable *intHuffTable(Freq *Freq, int charCount) //初始化哈夫曼表
{
}
void main(int argc, char **args)
{
}