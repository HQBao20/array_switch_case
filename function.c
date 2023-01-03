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
 * @param byotr 
 * @param bynum 
 */
static void realloc_array(u8_t **byptr, u8_t bynum);

/******************************************************************************/
/*                            EXPORTED FUNCTIONS                              */
/******************************************************************************/
static void realloc_array(u8_t **byptr, u8_t bynum)
{
    *byptr = (u8_t**)realloc(*byptr, bynum * sizeof(u8_t));
}

void create_array(u8_t *byarr, u8_t bynum)
{
    u8_t i = 0;

    for(i = 0; i < bynum; i++)
    {
        prinf("arr[%d] = ", i);
        scanf("%d", byarr + i);
    }
}

void print_array(u8_t *byarr, u8_t bynum)
{
    u8_t i = 0;

    for(i = 0; i < bynum; i++)
    {
        prinf("%d ", *(byarr + i));
    }
}

void add_element(u8_t *bynum, u8_t byvalue, u8_t bypos, u8_t *byarr)
{
    u8_t i = 0;

    if(bypos > *bynum)
    {
        bypos = *bynum;
    }
    else if(bypos < 0)
    {
        bypos = 0;
    }
    realloc_array(&byarr, (*bynum + 1));
    *bynum = *bynum + 1;
    for(i = *bynum; i > bypos; i--)
    {
        *(byarr + i) = *(byarr + i - 1);
    }
    *(byarr + bypos) = byvalue;
}

void dele_element(u8_t *bynum, u8_t bypos, u8_t *byarr)
{
    u8_t i = 0;

    if(bypos > *bynum)
    {
        bypos = *bynum;
    }
    else if(bypos < 0)
    {
        bypos = 0;
    }
    realloc_array(&byarr, (*bynum - 1));
    *bynum = *bynum - 1;
    for(i = bypos; i < *bynum; i++)
    {
        *(byarr + i) = *(byarr + i + 1);
    }
}

void arrange_element(u8_t* pbyarr, u8_t bynum)
{
    u8_t i = 0;
    u8_t j = 0;
    u8_t bytemp = 0;

    for(i = 0; i < bynum; i++)
    {
        for(j = i; j < bynum - 1; j++)
        {
            if(*(pbyarr + i) > *(pbyarr + j + 1))
            {
                bytemp = *(pbyarr + j + 1);
                *(pbyarr + j + 1) = *(pbyarr + i);
                *(pbyarr + i) = bytemp;
            }
        }
    }
}

u8_t find_elem_max(u8_t *pbyarr, u8_t bynum)
{
    u8_t i = 0;
    u8_t bymax = 0;
    bymax = *pbyarr;

    for (i = 1; i < bynum; i++)
    {
        if(bymax < *(pbyarr + i))
        {
            bymax = *(pbyarr + i);
        }
    }

    return bymax;
}
/******************************************************************************/