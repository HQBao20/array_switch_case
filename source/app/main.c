/*******************************************************************************
 *				 _ _                                             _ _
				|   |                                           (_ _)
				|   |        _ _     _ _   _ _ _ _ _ _ _ _ _ _   _ _
				|   |       |   |   |   | |    _ _     _ _    | |   |
				|   |       |   |   |   | |   |   |   |   |   | |   |
				|   |       |   |   |   | |   |   |   |   |   | |   |
				|   |_ _ _  |   |_ _|   | |   |   |   |   |   | |   |
				|_ _ _ _ _| |_ _ _ _ _ _| |_ _|   |_ _|   |_ _| |_ _|
								(C)2021 Lumi
 * Copyright (c) 2023
 * Lumi, JSC.
 * All Rights Reserved
 *
 * File name: main.c
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
#include "source/app/main.h"
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
static void_t allocateArray(u8_p *pbyPtr, u8_t byNum);

/******************************************************************************/
/*                            EXPORTED FUNCTIONS                              */
/******************************************************************************/

/******************************************************************************/
int main(void_t)
{
    u8_t byNumber = 0;
    u8_p pbyNumber = NULL;
    u8_p pbyBuffer = NULL;
    u8_t byCase = 0;
    pbyNumber = &byNumber;
    
    printf("****************************************************************\n");
    printf("Chuong trinh quan ly day so bang mang\n");
    printf("Nhap c -> Tao mang so nguyen\n");
    printf("Nhap p -> In day\n");
    printf("Nhap i -> Them 1 phan tu vao day\n");
    printf("Nhap d -> Xoa 1 phan tu tai vi tri thu k\n");
    printf("Nhap s -> Sap xep day so theo chieu tang dan\n");
    printf("Nhap t -> Tim kiem phan tu lon nhat\n");
    printf("Nhap e -> Thoat chuong trinh\n");
    printf("****************************************************************\n");
    printf("Nhap so phan tu mang: ");
    scanf("%d", &byNumber);
    allocate_array(&pbyBuffer, byNumber);
    while(1)
    {
        printf("Nhap lua chon: ");
        byCase = getchar();
        switch (byCase)
        {
            case 'c':
            {
                create_array(pbyBuffer, byNumber);
            }
            break;
            case 'p':
            {
                print_array(pbyBuffer, byNumber);
            }
            break;
            case 'i':
            {
                u8_t byAddvalue = 0;
                u8_t byPos = 0;

                printf("Nhap phan tu muon them: ");
                scanf("%d", &byAddvalue);
                printf("Nhap vị tri muon them: ");
                scanf("%d", &byPos);
                add_element(pbyNumber, byAddvalue, byPos, pbyBuffer);
                printf("Mang sau khi them phan tu: ");
                print_array(pbyBuffer, byNumber);
            }
            break;
            case 'd':
            {
                u8_t bypos = 0;

                printf("Nhap vị tri muon xoa: ");
                scanf("%d", &bypos);
                dele_element(pbyNumber, bypos, pbyBuffer);
                printf("Mang sau khi xoa phan tu: ");
                print_array(pbyBuffer, byNumber);
            }
            break;
            case 's':
            {
                arrange_element(pbyBuffer, byNumber);
                printf("Mang sap xep tang dan la: ");
                print_array(pbyBuffer, byNumber);
            }break;
            case 't':
            {
                printf("Phan tu lon nhat trong mang la: %d", find_elem_max(pbyBuffer, byNumber));
            }
            break;
            case 'e':
            {
                free(pbyBuffer);
                exit(1);
            }
            break;
            default:
                break;
        }
    }

    return 0;
}

/**
 * @func allocateArray
 * @brief Allocating memory for array
 * 
 * @param [pbyPtr] : Buffer need to allocate memory
 * @param [byNum] : Number of elements to allocate
 */
static void_t allocateArray(u8_p *pbyPtr, u8_t byNum)
{
    *pbyPtr = (u8_p*)malloc(byNum * sizeof(u8_t));
    if(*pbyPtr == NULL)
    {
        exit(0);
    }
}