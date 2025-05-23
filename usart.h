/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    usart.h
  * @brief   This file contains all the function prototypes for
  *          the usart.c file
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __USART_H__
#define __USART_H__

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

extern UART_HandleTypeDef huart4;

extern UART_HandleTypeDef huart5;

extern UART_HandleTypeDef huart1;

extern UART_HandleTypeDef huart2;

extern UART_HandleTypeDef huart3;

extern UART_HandleTypeDef huart6;

/* USER CODE BEGIN Private defines */

#define U1_Buf_Size 256
#define U2_Buf_Size 256
#define U3_Buf_Size 256
#define U4_Buf_Size 256
#define U5_Buf_Size 256
#define U6_Buf_Size 256

extern volatile uint16_t U1_Rx_Len;  //接收一帧数据的长度
extern volatile uint8_t U1_Rx_flag; //一帧数据接收完成标志
extern volatile uint16_t U2_Rx_Len;  //接收一帧数据的长度
extern volatile uint8_t U2_Rx_flag; //一帧数据接收完成标志
extern volatile uint16_t U3_Rx_Len;  //接收一帧数据的长度
extern volatile uint8_t U3_Rx_flag; //一帧数据接收完成标志
extern volatile uint16_t U4_Rx_Len;  //接收一帧数据的长度
extern volatile uint8_t U4_Rx_flag; //一帧数据接收完成标志
extern volatile uint16_t U5_Rx_Len;  //接收一帧数据的长度
extern volatile uint8_t U5_Rx_flag; //一帧数据接收完成标志
extern volatile uint16_t U6_Rx_Len;  //接收一帧数据的长度
extern volatile uint8_t U6_Rx_flag; //一帧数据接收完成标志

extern uint8_t U1_TX_BUF[U1_Buf_Size];
extern uint8_t U1_RX_BUF[U1_Buf_Size]; 
extern uint8_t U2_TX_BUF[U2_Buf_Size];
extern uint8_t U2_RX_BUF[U2_Buf_Size];
extern uint8_t U3_TX_BUF[U3_Buf_Size];
extern uint8_t U3_RX_BUF[U3_Buf_Size];
extern uint8_t U4_TX_BUF[U4_Buf_Size];
extern uint8_t U4_RX_BUF[U4_Buf_Size];
extern uint8_t U5_TX_BUF[U5_Buf_Size];
extern uint8_t U5_RX_BUF[U5_Buf_Size];
extern uint8_t U6_TX_BUF[U6_Buf_Size];
extern uint8_t U6_RX_BUF[U6_Buf_Size];
/* USER CODE END Private defines */

void MX_UART4_Init(void);
void MX_UART5_Init(void);
void MX_USART1_UART_Init(void);
void MX_USART2_UART_Init(void);
void MX_USART3_UART_Init(void);
void MX_USART6_UART_Init(void);

/* USER CODE BEGIN Prototypes */
void U1_Printf(char *fmt, ...);
void U2_Printf(char *fmt, ...);
void U3_Printf(char *fmt, ...);
void U4_Printf(char *fmt, ...);
void U5_Printf(char *fmt, ...);
void U6_Printf(char *fmt, ...);
void HAL_UARTEx_RxEventCallback(UART_HandleTypeDef *huart, uint16_t Size);
/* USER CODE END Prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __USART_H__ */

