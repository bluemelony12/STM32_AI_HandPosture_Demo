/*
 * Sensor_Data_Type.h
 *
 *  Created on: Jul 15, 2024
 *      Author: LeeJH
 */

#ifndef APPLICATION_USER_SENSOR_DATA_TYPE_H_
#define APPLICATION_USER_SENSOR_DATA_TYPE_H_

#include "stdint.h"

/* Message Queue Type */
typedef struct {
  uint8_t PostureR[3];
  uint8_t PostureV[3];
  uint8_t Level;
  uint8_t Degree;
  uint8_t LeftRight;
  uint8_t TestVal;
} MSGQUEUE_OBJ_t;


#endif /* APPLICATION_USER_SENSOR_DATA_TYPE_H_ */
