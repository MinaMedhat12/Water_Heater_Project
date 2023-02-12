/*
 * HEEP_cfg.h
 *
 * Created: 2/1/2023 3:09:40 PM
 *  Author: 20100
 */ 


#ifndef HEEP_CFG_H_
#define HEEP_CFG_H_

/***************************************************************************************************/
/*                                         Configuration macros                                    */
/***************************************************************************************************/

/*EEPROM TWI base communication address*/
#define EEPROM_SLAVE_ADDRESS_BASE    (0x50)

/*EEPROM blocks*/
#define BLOCK_0                      (EEPROM_SLAVE_ADDRESS_BASE | 0)
#define BLOCK_1                      (EEPROM_SLAVE_ADDRESS_BASE | 1)
#define BLOCK_2                      (EEPROM_SLAVE_ADDRESS_BASE | 2)
#define BLOCK_3                      (EEPROM_SLAVE_ADDRESS_BASE | 3)
#define BLOCK_4                      (EEPROM_SLAVE_ADDRESS_BASE | 4)
#define BLOCK_5                      (EEPROM_SLAVE_ADDRESS_BASE | 5)
#define BLOCK_6                      (EEPROM_SLAVE_ADDRESS_BASE | 6)
#define BLOCK_7                      (EEPROM_SLAVE_ADDRESS_BASE | 7)

/*EEPROM page size*/
#define EEPROM_PAGE_SIZE             (16)



#endif /* HEEP_CFG_H_ */