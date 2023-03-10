/*
 * MTIMER_cfg.h
 *
 * Created: 2/2/2023 4:09:42 PM
 *  Author: 20100
 */ 


#ifndef MTIMER_CFG_H_
#define MTIMER_CFG_H_

/***************************************************************************************************/
/*                                         Configuration macros                                    */
/***************************************************************************************************/

/*Custom prescalers choice*/
#define TIMER_OPERATION_STOP            (0xF8)
#define TIMER1_OPERATION_STOP           (0xFFF8)

/*ICU frequency value*/
#define TIMER_ICU_FREQ_DIVIDER          (250000)

/*Using another RTS*/
#define USING_ANOTHER_RTS  (1)

/*Clear to compare mode 1 ms delay*/
#define TIMER_1_MS_DELAY                (250)




#endif /* MTIMER_CFG_H_ */