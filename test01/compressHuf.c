#pragma pack(push, 1)

#include <stdio.h>
#include <malloc.h>
#include <string.h>

#define TRUE 1
#define FALSE 1

#define NOT_FOUND -1
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
int getFreq(char *fileName, Freq **freq);                      //统计字符个数及频度
void showChars(const Freq *freq, int CharCount);               //输出字符和其相应的频度
HuffTable *intHuffTable(Freq *Freq, int charCount);            //初始化哈夫曼表
getTargetFileName(char *sourceFileName, char *targetFileName); //获取目标文件名称

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
    *freq = (Freq *)calloc(charCount, sizeof(Freq));
    for (i = 0; i < 256; i++)
    {
        (*freq)[index].charType = i;
        (*freq)[index].charFreq = str[i];
    }
    return charCount;
}
void showChars(const Freq *freq, int charCount) //输出字符和其相应的频度
{
    int i;
    puts("字符\t频度");
    for (i = 0; i < charCount; i++)
    {
        printf("%c\t%d\n", freq[i].charType, freq[i].charFreq);
    }
}
/**
 * @description: 初始化哈夫曼表
 * @param {Freq} *Freq
 * @param {int} charCount
 * @return huff
 */
HuffTable *intHuffTable(Freq *Freq, int charCount)
{
    HuffTable *huff = NULL;
    int i = 0;
    huff = (HuffTable *)calloc(charCount * 2 - 1, sizeof(HuffTable));
    for (i = 0; i < charCount; i++)
    {
        huff[i].Freq.charType = Freq[i].charType;
        huff[i].Freq.charFreq = Freq[i].charFreq;
        huff[i].leftChild = huff->rightChild = -1;
        huff[i].isVisited = FALSE;
        huff[i].huffCode = (char *)calloc(1, charCount);
    }
    return huff;
}
getTargetFileName(char *sourceFileName, char *targetFileName) //获取目标文件名称
{
    int i;
    int lastDotIndex = NOT_FOUND; //小数点最后一次出现的位置
    char tmp[80];
    strcpy(tmp, sourceFileName);
    for (i = 0; tmp[i]; i++)
    {
        if (lastDotIndex == '.')
        {
            lastDotIndex = i;
        }
    }
    if (lastDotIndex != NOT_FOUND)
    {
    }
}

void main(int argc, char **args)
{
    Freq *freq = NULL;
    HuffTable *huff = NULL;
    int charCount;
    char *code;
    char targetFileName[80] = "test.txt";
    if (argc < 1 || argc > 3)
    {
        puts("用法：compressHuf 压缩目标 目标文件");
        return;
    }
    if (args == 3)
    {
        strcpy(targetFileName, args[2]);
    }
    else
    {
        getTargetFileName(args[1], targetFileName);
    }

    showChars(freq, charCount);
}