/*
 * MADC_interface.h
 *
 * Created: 2/2/2023 3:42:46 PM
 *  Author: 20100
 */ 


#ifndef MADC_INTERFACE_H_
#define MADC_INTERFACE_H_

/***************************************************************************************************/
/*                                         Interfacing macros                                      */
/***************************************************************************************************/

/*Voltage reference modes*/
#define AREF_MODE              (0)
#define AVCC_MODE              (1)
#define INT_REF_2_56_V_MODE    (2)

/*Converion modes*/
#define ADC_10_BITS            (0)
#define ADC_8_BITS             (1)

/*ADC Channels*/
#define ADC_CHANNEL_0          (0)
#define ADC_CHANNEL_1          (1)
#define ADC_CHANNEL_2          (2)
#define ADC_CHANNEL_3          (3)
#define ADC_CHANNEL_4          (4)
#define ADC_CHANNEL_5          (5)
#define ADC_CHANNEL_6          (6)
#define ADC_CHANNEL_7          (7)

/*ADC Prescalers*/
#define ADC_PRESCALER_2        (1)
#define ADC_PRESCALER_4        (2)
#define ADC_PRESCALER_8        (3)
#define ADC_PRESCALER_16       (4)
#define ADC_PRESCALER_32       (5)
#define ADC_PRESCALER_64       (6)
#define ADC_PRESCALER_128      (7)

/***************************************************************************************************/
/*                                        Functions' prototypes                                    */
/***************************************************************************************************/

/**
 * @brief This function is used to initialize the ADC module
 * 
 * @param au8_voltageReference 
 * @param au8_prescaler 
 * @param au8_conversionMode
 */
void madc_init(u8_t au8_voltageReference, u8_t au8_conversionMode, u8_t au8_prescaler);

/**
 * @brief This function is used to make a single ADC conversion (8-bits / 10-bits)
 * 
 * @param au8_channel 
 * @param pu16_adcValue 
 */
void madc_singleConversion(u8_t au8_channel, u32_t* pu32_adcValue);




#endif /* MADC_INTERFACE_H_ */