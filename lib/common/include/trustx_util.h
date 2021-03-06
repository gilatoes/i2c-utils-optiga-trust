/**
* MIT License
*
* Copyright (c) 2019 Infineon Technologies AG
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in all
* copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE

*/

#ifndef _TRUSTX_UTIL_H_
#define _TRUSTX_UTIL_H_

//Function Prototyping
void trustX_Util_Delay(uint16_t cnt);
void trustX_Util_Printbuffer(uint8_t *pData, uint16_t uLen);
uint32_t trustX_ParseHexorDec(const char *aArg);
void dwordToByte(uint32_t *input, uint8_t inputLen, uint8_t **output, uint8_t *outputLen);
void byteToDword(uint8_t *input, uint8_t inputLen, uint32_t *output, uint8_t *outputLen);


#endif	// _TRUSTX_UTIL_H_
