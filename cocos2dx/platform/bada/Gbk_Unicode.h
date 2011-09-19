/*
 * Gbk_Unicode.h
 *
 *  Created on: 2011-9-12
 *      Author: dumganhar
 */

#ifndef GBK_UNICODE_H_
#define GBK_UNICODE_H_

#ifdef __cplusplus
extern "C" {
#endif

/*
 * param: 
 *   pGbkOut[out]:���ڴ�����Gbk�Ļ���
 *   iGbkBufSize[in]:���ڴ�����Gbk�Ļ���Ĵ�С����λΪ�ֽ�, ��pGbkOutΪ����, ��ʹ��sizeof()�������鳤��
 *   pUnicodeIn[in]:��Ҫת����unicode����
 * return: 0:ʧ��, 1: �ɹ�
*/
int MyUnicodeToGBK(char* pGBKOut, int iGbkBufSize, const unsigned short* pUnicodeIn);

/*
 * param: 
 *   pUnicodeOut[out]:���ڴ�����unicode�Ļ���
 *   iUniBufSize[in]:���ڴ�����unicode�Ļ���Ĵ�С����λΪ�ֽ�, ��pUnicodeOutΪ����, ��ʹ��sizeof()�������鳤��
 *   pGBKIn[in]:��Ҫת����gbk����
 * return: 0:ʧ��, 1: �ɹ�
*/
int MyGBKToUnicode(unsigned short* pUnicodeOut, int iUniBufSize, const char* pGBKIn);
// ppszOutUtf8Ϊ��ָ��ĵ�ַ���룬�����ڲ����丳ֵ��_M�����ĺ�����Ҫ��free�ͷ�
int MyGBKToUTF8_M(char** ppszOutUtf8, char* pszGbk);
// ppszOutGbkΪ��ָ��ĵ�ַ���룬�����ڲ����丳ֵ��_M�����ĺ�����Ҫ��free�ͷ�
int MyUTF8ToGBK_M(char** ppszOutGbk, char* pszUtf8);

#ifdef __cplusplus
}
#endif


#endif /* GBK_UNICODE_H_ */
