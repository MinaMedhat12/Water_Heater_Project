/*
 * HSEV_SEG_interface.h
 *
 * Created: 2/2/2023 3:12:42 PM
 *  Author: 20100
 */ 


#ifndef HSEV_SEG_INTERFACE_H_
#define HSEV_SEG_INTERFACE_H_

/***************************************************************************************************/
/*                                         Interfacing macros                                      */
/***************************************************************************************************/

/*System seven segments*/
#define SEV_SEG_1    (0)
#define SEV_SEG_2    (1)

/*Seven segment displaying numbers*/
#define NUMBER_0     (0)
#define NUMBER_1     (1)
#define NUMBER_2     (2)
#define NUMBER_3     (3)
#define NUMBER_4     (4)
#define NUMBER_5     (5)
#define NUMBER_6     (6)
#define NUMBER_7     (7)
#define NUMBER_8     (8)
#define NUMBER_9     (9)

/***************************************************************************************************/
/*                                        Functions' prototypes                                    */
/***************************************************************************************************/

/**
 * @brief This function is responsible for initializing specific seven segment
 * 
 * @param au8_sev_segNumber 
 */
void hsev_seg_init(u8_t au8_sev_segNumber);

/**
 * @brief This function is responsible to enable specific seven segment
 * 
 * @param au8_sev_segNumber 
 */
void hsev_seg_enable(u8_t au8_sev_segNumber);

/**
 * @brief This function is responsible to disable specific seven segment
 * 
 * @param au8_sev_segNumber 
 */
void hsev_seg_disable(u8_t au8_sev_segNumber);

/**
 * @brief This function is responsible for displaying specific number over enabled seven segment
 * 
 * @param au8_number 
 */
void hsev_seg_displayDigit(u8_t au8_number);

void hsev_seg_displayNumber(u8_t au8_number);

#endif /* HSEV_SEG_INTERFACE_H_ */