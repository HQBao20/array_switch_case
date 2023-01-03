/*******************************************************************************
 *               _ _                                             _ _
                |   |                                           (_ _)
                |   |        _ _     _ _   _ _ _ _ _ _ _ _ _ _   _ _
                |   |       |   |   |   | |    _ _     _ _    | |   |
                |   |       |   |   |   | |   |   |   |   |   | |   |
                |   |       |   |   |   | |   |   |   |   |   | |   |
                |   |_ _ _  |   |_ _|   | |   |   |   |   |   | |   |
                |_ _ _ _ _| |_ _ _ _ _ _| |_ _|   |_ _|   |_ _| |_ _|
                                (C)2023 Lumi
 * Copyright (c) 2023
 * Lumi, JSC.
 * All Rights Reserved
 *
 * File name: function.c
 *
 * Description:
 *
 * Author: BaoHQ
 *
 * Last Changed By:  $Author: baohq $
 * Revision:         $Revision: $
 * Last Changed:     $Date: $Jan 3, 2023
 *
 * Code sample:
 ******************************************************************************/
/******************************************************************************/
/*                              INCLUDE FILES                                 */
/******************************************************************************/
#include <stdio.h>
#include <stdint.h>
#include "source/mid/function.h"

/******************************************************************************/
/*                     EXPORTED TYPES and DEFINITIONS                         */
/******************************************************************************/

/******************************************************************************/
/*                              PRIVATE DATA                                  */
/******************************************************************************/

/******************************************************************************/
/*                              EXPORTED DATA                                 */
/******************************************************************************/

/******************************************************************************/
/*                            PRIVATE FUNCTIONS                               */
/******************************************************************************/
/**
 * @func reallocArray
 * @brief Realloc array
 * 
 * @param [pbyPtr] : Array is initialized
 * @param [byNum] : The number of elements of the array
 */
static void_t reallocArray(u8_p *pbyPtr, u8_t byNum);

/******************************************************************************/
/*                            EXPORTED FUNCTIONS                              */
/******************************************************************************/
static void_t reallocArray(u8_p *pbyPtr, u8_t byNum)
{
    *pbyPtr = (u8_p*)realloc(*pbyPtr, byNum * sizeof(u8_t));
}

/**
 * @func createArray
 * @brief Create a array object
 * 
 * @param [pbyBuffer] : Array is initialized
 * @param [byNum] : The number of elements of the array
 */
void_t createArray(u8_p pbyBuffer, u8_t byNum)
{
    u8_t i = 0;

    for(i = 0; i < byNum; i++)
    {
        prinf("arr[%d] = ", i);
        scanf("%d", pbyBuffer + i);
    }
}

/**
 * @func printArray
 * @brief Print array
 * 
 * @param [pbyBuffer] : Array is initialized
 * @param [byNum] : The number of elements of the array
 */
void_t printArray(u8_p pbyBuffer, u8_t byNum)
{
    u8_t i = 0;

    for(i = 0; i < byNum; i++)
    {
        prinf("%d ", *(pbyBuffer + i));
    }
}

/**
 * @func addElement
 * @brief Add element into arr
 * 
 * @param [pbyNum] : The number of elements of the array
 * @param [byValue] : Value added
 * @param [byPos] : Position added
 * @param [pbyBuffer] : Array is initialized
 */
void_t addElement(u8_p pbyNum, u8_t byValue, u8_t byPos, u8_p pbyBuffer)
{
    u8_t i = 0;

    if(byPos > *pbyNum)
    {
        byPos = *pbyNum;
    }
    else if(byPos < 0)
    {
        byPos = 0;
    }
    realloc_array(&pbyBuffer, (*pbyNum + 1));
    *pbyNum = *pbyNum + 1;
    for(i = *pbyBuffer; i > byPos; i--)
    {
        *(pbyBuffer + i) = *(pbyBuffer + i - 1);
    }
    *(pbyBuffer + byPos) = byValue;
}

/**
 * @func deleElement
 * @brief Delete element into arr
 * 
 * @param [pbyNum] : The number of elements of the array
 * @param [byPos] : Position deleted
 * @param [pbyBuffer] : Array is initialized
 */
void_t deleElement(u8_p pbyNum, u8_t byPos, u8_p pbyBuffer)
{
    u8_t i = 0;

    if(byPos > *pbyNum)
    {
        byPos = *pbyNum;
    }
    else if(byPos < 0)
    {
        byPos = 0;
    }
    realloc_array(&pbyBuffer, (*pbyNum - 1));
    *pbyNum = *pbyNum - 1;
    for(i = byPos; i < *pbyNum; i++)
    {
        *(pbyBuffer + i) = *(pbyBuffer + i + 1);
    }
}

/**
 * @func arrangeElement
 * @brief Arrange elements of arr
 * 
 * @param [pbyBuffer] : Array is initialized
 * @param [byNum] : The number of elements of the array
 */
void_t arrangeElement(u8_p pbyBuffer, u8_t byNum)
{
    u8_t i = 0;
    u8_t j = 0;
    u8_t byTemp = 0;

    for(i = 0; i < byNum; i++)
    {
        for(j = i; j < byNum - 1; j++)
        {
            if(*(pbyBuffer + i) > *(pbyBuffer + j + 1))
            {
                byTemp = *(pbyBuffer + j + 1);
                *(pbyBuffer + j + 1) = *(pbyBuffer + i);
                *(pbyBuffer + i) = byTemp;
            }
        }
    }
}

/**
 * @func findElemMax
 * @brief Find the max element in arr
 * 
 * @param [pbyBuffer] : Array is initialized
 * @param [byNum] : The number of elements of the array
 * @return u8_t 
 */
u8_t findElemMax(u8_p pbyBuffer, u8_t byNum)
{
    u8_t i = 0;
    u8_t byMax = 0;
    byMax = *pbyBuffer;

    for (i = 1; i < byNum; i++)
    {
        if(byMax < *(pbyBuffer + i))
        {
            byMax = *(pbyBuffer + i);
        }
    }

    return byMax;
}
/******************************************************************************/