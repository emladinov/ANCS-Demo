/*******************************************************************************
* File Name: WakeupPinInterrupt.h
* Version 1.70
*
*  Description:
*   Provides the function definitions for the Interrupt Controller.
*
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/
#if !defined(CY_ISR_WakeupPinInterrupt_H)
#define CY_ISR_WakeupPinInterrupt_H


#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void WakeupPinInterrupt_Start(void);
void WakeupPinInterrupt_StartEx(cyisraddress address);
void WakeupPinInterrupt_Stop(void);

CY_ISR_PROTO(WakeupPinInterrupt_Interrupt);

void WakeupPinInterrupt_SetVector(cyisraddress address);
cyisraddress WakeupPinInterrupt_GetVector(void);

void WakeupPinInterrupt_SetPriority(uint8 priority);
uint8 WakeupPinInterrupt_GetPriority(void);

void WakeupPinInterrupt_Enable(void);
uint8 WakeupPinInterrupt_GetState(void);
void WakeupPinInterrupt_Disable(void);

void WakeupPinInterrupt_SetPending(void);
void WakeupPinInterrupt_ClearPending(void);


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the WakeupPinInterrupt ISR. */
#define WakeupPinInterrupt_INTC_VECTOR            ((reg32 *) WakeupPinInterrupt__INTC_VECT)

/* Address of the WakeupPinInterrupt ISR priority. */
#define WakeupPinInterrupt_INTC_PRIOR             ((reg32 *) WakeupPinInterrupt__INTC_PRIOR_REG)

/* Priority of the WakeupPinInterrupt interrupt. */
#define WakeupPinInterrupt_INTC_PRIOR_NUMBER      WakeupPinInterrupt__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable WakeupPinInterrupt interrupt. */
#define WakeupPinInterrupt_INTC_SET_EN            ((reg32 *) WakeupPinInterrupt__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the WakeupPinInterrupt interrupt. */
#define WakeupPinInterrupt_INTC_CLR_EN            ((reg32 *) WakeupPinInterrupt__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the WakeupPinInterrupt interrupt state to pending. */
#define WakeupPinInterrupt_INTC_SET_PD            ((reg32 *) WakeupPinInterrupt__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the WakeupPinInterrupt interrupt. */
#define WakeupPinInterrupt_INTC_CLR_PD            ((reg32 *) WakeupPinInterrupt__INTC_CLR_PD_REG)



#endif /* CY_ISR_WakeupPinInterrupt_H */


/* [] END OF FILE */
