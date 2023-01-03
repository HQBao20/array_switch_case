/*******************************************************************************
 *	             _ _                                             _ _
                |   |                                           (_ _)
                |   |        _ _     _ _   _ _ _ _ _ _ _ _ _ _   _ _
                |   |       |   |   |   | |    _ _     _ _    | |   |
                |   |       |   |   |   | |   |   |   |   |   | |   |
                |   |       |   |   |   | |   |   |   |   |   | |   |
                |   |_ _ _  |   |_ _|   | |   |   |   |   |   | |   |
                |_ _ _ _ _| |_ _ _ _ _ _| |_ _|   |_ _|   |_ _| |_ _|
                                (C)2021 Lumi
 * Copyright (c) 2021
 * Lumi, JSC.
 * All Rights Reserved
 *
 * File name: Example.c
 *
 * Description: This code is used for tranning Lumi IOT member. It is the code form statandard.
 *
 * Author: PhuongNP
 *
 * Last Changed By:  $Author: phuongnp $
 * Revision:         $Revision: $
 * Last Changed:     $Date: $Jun 9, 2021
 *
 * Code sample:
 ******************************************************************************/
/******************************************************************************/
/*                              INCLUDE FILES                                 */
/******************************************************************************/
#include <stdio.h>
#include <stdint.h>
#include "function.h"

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
 * @brief Realloc array
 * 
 * @param pbyPtr 
 * @param byNum 
 */
static void realloc_array(u8_t **pbyPtr, u8_t byNum);

/******************************************************************************/
/*                            EXPORTED FUNCTIONS                              */
/******************************************************************************/
static void realloc_array(u8_t **pbyPtr, u8_t byNum)
{
    *pbyPtr = (u8_t**)realloc(*pbyPtr, byNum * sizeof(u8_t));
}

void create_array(u8_t *pbyBuffer, u8_t byNum)
{
    u8_t i = 0;

    for(i = 0; i < byNum; i++)
    {
        prinf("arr[%d] = ", i);
        scanf("%d", pbyBuffer + i);
    }
}

void print_array(u8_t *pbyBuffer, u8_t byNum)
{
    u8_t i = 0;

    for(i = 0; i < byNum; i++)
    {
        prinf("%d ", *(pbyBuffer + i));
    }
}

void add_element(u8_t *pbyNum, u8_t byValue, u8_t byPos, u8_t *pbyBuffer)
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

void dele_element(u8_t *pbyNum, u8_t byPos, u8_t *pbyBuffer)
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

void arrange_element(u8_t *pbyBuffer, u8_t byNum)
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

u8_t find_elem_max(u8_t *pbyBuffer, u8_t byNum)
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