/*******************************************************************************
* File Name: WakeupPin.h  
* Version 2.10
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_WakeupPin_H) /* Pins WakeupPin_H */
#define CY_PINS_WakeupPin_H

#include "cytypes.h"
#include "cyfitter.h"
#include "WakeupPin_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    WakeupPin_Write(uint8 value) ;
void    WakeupPin_SetDriveMode(uint8 mode) ;
uint8   WakeupPin_ReadDataReg(void) ;
uint8   WakeupPin_Read(void) ;
uint8   WakeupPin_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define WakeupPin_DRIVE_MODE_BITS        (3)
#define WakeupPin_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - WakeupPin_DRIVE_MODE_BITS))

#define WakeupPin_DM_ALG_HIZ         (0x00u)
#define WakeupPin_DM_DIG_HIZ         (0x01u)
#define WakeupPin_DM_RES_UP          (0x02u)
#define WakeupPin_DM_RES_DWN         (0x03u)
#define WakeupPin_DM_OD_LO           (0x04u)
#define WakeupPin_DM_OD_HI           (0x05u)
#define WakeupPin_DM_STRONG          (0x06u)
#define WakeupPin_DM_RES_UPDWN       (0x07u)

/* Digital Port Constants */
#define WakeupPin_MASK               WakeupPin__MASK
#define WakeupPin_SHIFT              WakeupPin__SHIFT
#define WakeupPin_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define WakeupPin_PS                     (* (reg32 *) WakeupPin__PS)
/* Port Configuration */
#define WakeupPin_PC                     (* (reg32 *) WakeupPin__PC)
/* Data Register */
#define WakeupPin_DR                     (* (reg32 *) WakeupPin__DR)
/* Input Buffer Disable Override */
#define WakeupPin_INP_DIS                (* (reg32 *) WakeupPin__PC2)


#if defined(WakeupPin__INTSTAT)  /* Interrupt Registers */

    #define WakeupPin_INTSTAT                (* (reg32 *) WakeupPin__INTSTAT)

#endif /* Interrupt Registers */


/***************************************
* The following code is DEPRECATED and 
* must not be used.
***************************************/

#define WakeupPin_DRIVE_MODE_SHIFT       (0x00u)
#define WakeupPin_DRIVE_MODE_MASK        (0x07u << WakeupPin_DRIVE_MODE_SHIFT)


#endif /* End Pins WakeupPin_H */


/* [] END OF FILE */
