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
 * @brief Allocating memory for array
 * 
 * @param pbyptr 
 * @param bynum 
 */
void allocate_array(u8_t **pbyptr, u8_t bynum);

/******************************************************************************/
/*                            EXPORTED FUNCTIONS                              */
/******************************************************************************/
int main(void)
{
    u8_t bynumber = 0;
    u8_t *pbyarr = NULL;
    u8_t bycase = 0;
    
    printf("****************************************************************\n");
    printf("Chuong trinh quan ly day so bang mang\n");
    printf("Nhap c -> Tao mang so nguyen\n");
    printf("Nhap p -> In day\n");
    printf("Nhap i -> Them 1 phan tu vao day\n");
    printf("Nhap d -> Xoa 1 phan tu tai vi tri thu k\n");
    printf("Nhap s -> Sap xep day so theo chieu tang dan\n");
    printf("Nhap x -> Sap xep theo chieu giam\n");
    printf("Nhap t -> Tim kiem 1 so x co trong day khong?\n");
    printf("Nhap e -> Thoat chuong trinh\n");
    printf("****************************************************************\n");
    printf("Nhap so phan tu mang: ");
    scanf("%d", &bynumber);
    allocate_array(&pbyarr, bynumber);
    while(1)
    {
        printf("Nhap lua chon: ");
        bycase = getchar();
        switch (bycase)
        {
            case 'c':
                /* code */
                break;
            
            default:
                break;
        }
    }

    return 0;
}

void allocate_array(u8_t **pbyptr, u8_t bynum)
{
    *pbyptr = (u8_t**)malloc(bynum * sizeof(u8_t));
    if(*pbyptr == NULL)
    {
        exit(0);
    }
}
/******************************************************************************/