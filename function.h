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
 * @param byarr 
 * @param bynum 
 */
void create_array(u8_t *byarr, u8_t bynum);

/**
 * @brief Print array
 * 
 * @param byarr 
 * @param bynum 
 */
void print_array(u8_t *byarr, u8_t bynum);

/**
 * @brief Add element into arr
 * 
 * @param bynum 
 * @param byvalue 
 * @param bypos 
 * @param byarr 
 */
void add_element(u8_t *bynum, u8_t byvalue, u8_t bypos, u8_t *byarr);

/**
 * @brief Delete element into arr
 * 
 * @param bynum 
 * @param bypos 
 * @param byarr 
 */
void dele_element(u8_t *bynum, u8_t bypos, u8_t *byarr);

/**
 * @brief Arrange elements of arr
 * 
 * @param pbyarr 
 * @param bynum 
 */
void arrange_element(u8_t *pbyarr, u8_t bynum);

/**
 * @brief Find the max element in arr
 * 
 * @param pbyarr 
 * @param bynum 
 * @return u8_t 
 */
u8_t find_elem_max(u8_t *pbyarr, u8_t bynum);

/******************************************************************************/
#endif /* function_H_ */ 