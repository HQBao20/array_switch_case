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
 * File name: Example.h
 *
 * Description:
 *
 * Author: PhuongNP
 *
 * Last Changed By:  $Author: phuongnp $
 * Revision:         $Revision: $
 * Last Changed:     $Date: $Jun 9, 2021
 *
 * Code sample:
 ******************************************************************************/
// Enclosing macro to prevent multiple inclusion
#ifndef function_H_
#define function_H_
/******************************************************************************/
/*                              INCLUDE FILES                                 */
/******************************************************************************/

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
 * @brief Create a array object
 * 
 * @param pbyBuffer 
 * @param byNum 
 */
void create_array(u8_t *pbyBuffer, u8_t byNum);

/**
 * @brief Print array
 * 
 * @param pbyBuffer 
 * @param byNum 
 */
void print_array(u8_t *pbyBuffer, u8_t byNum);

/**
 * @brief Add element into arr
 * 
 * @param pbyNum 
 * @param byValue 
 * @param byPos 
 * @param pbyBuffer 
 */
void add_element(u8_t *pbyNum, u8_t byValue, u8_t byPos, u8_t *pbyBuffer);

/**
 * @brief Delete element into arr
 * 
 * @param pbyNum 
 * @param byPos 
 * @param pbyBuffer 
 */
void dele_element(u8_t *pbyNum, u8_t byPos, u8_t *pbyBuffer);

/**
 * @brief Arrange elements of arr
 * 
 * @param pbyBuffer 
 * @param byNum 
 */
void arrange_element(u8_t *pbyBuffer, u8_t byNum);

/**
 * @brief Find the max element in arr
 * 
 * @param pbyBuffer 
 * @param byNum 
 * @return u8_t 
 */
u8_t find_elem_max(u8_t *pbyBuffer, u8_t byNum);

/******************************************************************************/
#endif /* function_H_ */ 