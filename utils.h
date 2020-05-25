/*
 * utils.h
 *
 *  Created on: Aug 17, 2019
 *      Author: Lenovo
 */

#ifndef UTILS_H_
#define UTILS_H_
#define Set_bit(reg, bitn) reg|=(1<<bitn)
#define Clr_bit(reg, bitn) reg&=(~(1<<bitn))
#define Get_bit(reg, bitn) ((reg&(1<<bitn))>>bitn)
#endif /* UTILS_H_ */
