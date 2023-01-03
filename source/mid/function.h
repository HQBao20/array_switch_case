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
#include "coderule_git1/source/utils/typedefs.h"

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
 * @func create_array
 * @brief Create a array object
 * 
 * @param [pbyBuffer] : Array is initialized
 * @param [byNum] : The number of elements of the array
 */
void_t create_array(u8_p pbyBuffer, u8_t byNum);

/**
 * @func print_array
 * @brief Print array
 * 
 * @param [pbyBuffer] : Array is initialized
 * @param [byNum] : The number of elements of the array
 */
void_t print_array(u8_p pbyBuffer, u8_t byNum);

/**
 * @func add_element
 * @brief Add element into arr
 * 
 * @param [pbyNum] : The number of elements of the array
 * @param [byValue] : Value added
 * @param [byPos] : Position added
 * @param [pbyBuffer] : Array is initialized
 */
void_t add_element(u8_p pbyNum, u8_t byValue, u8_t byPos, u8_p pbyBuffer);

/**
 * @func dele_element
 * @brief Delete element into arr
 * 
 * @param [pbyNum] : The number of elements of the array
 * @param [byPos] : Position deleted
 * @param [pbyBuffer] : Array is initialized
 */
void_t dele_element(u8_p pbyNum, u8_t byPos, u8_p pbyBuffer);

/**
 * @func arrange_element
 * @brief Arrange elements of arr
 * 
 * @param [pbyBuffer] : Array is initialized
 * @param [byNum] : The number of elements of the array
 */
void_t arrange_element(u8_p pbyBuffer, u8_t byNum);

/**
 * @func find_elem_max
 * @brief Find the max element in arr
 * 
 * @param [pbyBuffer] : Array is initialized
 * @param [byNum] : The number of elements of the array
 * @return u8_t 
 */
u8_t find_elem_max(u8_p pbyBuffer, u8_t byNum);

/******************************************************************************/
#endif /* function_H_ */ 