/*******************************************************************************
 *	             _ _                                             _ _
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
 * File name: function.h
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
// Enclosing macro to prevent multiple inclusion
#ifndef function_H_
#define function_H_
/******************************************************************************/
/*                              INCLUDE FILES                                 */
/******************************************************************************/
#include "source/utils/typedefs.h"

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

/******************************************************************************/
/*                            EXPORTED FUNCTIONS                              */
/******************************************************************************/
/**
 * @func createArray
 * @brief Create a array object
 * 
 * @param [pbyBuffer] : Array is initialized
 * @param [byNum] : The number of elements of the array
 */
void_t createArray(u8_p pbyBuffer, u8_t byNum);

/**
 * @func printArray
 * @brief Print array
 * 
 * @param [pbyBuffer] : Array is initialized
 * @param [byNum] : The number of elements of the array
 */
void_t printArray(u8_p pbyBuffer, u8_t byNum);

/**
 * @func addElement
 * @brief Add element into arr
 * 
 * @param [pbyNum] : The number of elements of the array
 * @param [byValue] : Value added
 * @param [byPos] : Position added
 * @param [pbyBuffer] : Array is initialized
 */
void_t addElement(u8_p pbyNum, u8_t byValue, u8_t byPos, u8_p pbyBuffer);

/**
 * @func deleElement
 * @brief Delete element into arr
 * 
 * @param [pbyNum] : The number of elements of the array
 * @param [byPos] : Position deleted
 * @param [pbyBuffer] : Array is initialized
 */
void_t deleElement(u8_p pbyNum, u8_t byPos, u8_p pbyBuffer);

/**
 * @func arrangElement
 * @brief Arrange elements of arr
 * 
 * @param [pbyBuffer] : Array is initialized
 * @param [byNum] : The number of elements of the array
 */
void_t arrangeElement(u8_p pbyBuffer, u8_t byNum);

/**
 * @func findElemMax
 * @brief Find the max element in arr
 * 
 * @param [pbyBuffer] : Array is initialized
 * @param [byNum] : The number of elements of the array
 * @return u8_t 
 */
u8_t findElemMax(u8_p pbyBuffer, u8_t byNum);

/******************************************************************************/
#endif /* function_H_ */ 