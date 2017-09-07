/*
 * database.h
 *
 *  Created on: 23 Jun 2017
 *      Author: Damian Dolewski
 */

#ifndef INC_DATABASE_H_
#define INC_DATABASE_H_

// if you want to have reference to library open terminal and put:
// sudo apt-get install libsqlite3-dev
#include <sqlite3.h>
#include "types.h"



void DataBase_Init(void);
void DataBase_InsertBasicMeas(basic_meas_t * meas);
void DataBase_InsertPhMeas(ph_meas_t * meas);
void DataBase_SelectMeasData(basic_meas_t * basicMeas, ph_meas_t * phMeas);
void DataBase_TestInsert(void);

#endif /* INC_DATABASE_H_ */
