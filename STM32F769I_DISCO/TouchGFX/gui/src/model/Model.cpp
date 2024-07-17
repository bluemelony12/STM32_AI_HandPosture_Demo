#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include "Sensor_Data_Type.h"
#include "cmsis_os.h"

extern osMessageQueueId_t SensorQHandle;

Model::Model() : modelListener(0)
{

}

void Model::tick()
{
	MSGQUEUE_OBJ_t Rxmsg;
	osStatus_t status;

	status = osMessageQueueGet(SensorQHandle, &Rxmsg, NULL, 0U);

	if(status == osOK)
	{
		CurrentPostureRData[0] = Rxmsg.PostureR[0];
		CurrentPostureRData[1] = Rxmsg.PostureR[1];
		CurrentPostureRData[2] = Rxmsg.PostureR[2];

		CurrentPostureVData[0] = Rxmsg.PostureV[0];
		CurrentPostureVData[1] = Rxmsg.PostureV[1];
		CurrentPostureVData[2] = Rxmsg.PostureV[2];

		CurrentLevelData = Rxmsg.Level;
		CurrentDegreeData = Rxmsg.Degree;

		if(modelListener != 0)
		{
			modelListener->notifyPostureRDataChanged(CurrentPostureRData);
			modelListener->notifyPostureVDataChanged(CurrentPostureVData);
			modelListener->notifyLevelDataChanged(CurrentLevelData);
			modelListener->notifyDegreeDataChanged(CurrentDegreeData);
		}
	}
}

int* Model::getCurrentPostureRData()
{
	return this->CurrentPostureRData;
}

int* Model::getCurrentPostureVData()
{
	return this->CurrentPostureVData;
}

int Model::getCurrentLevelData()
{
	return this->CurrentLevelData;
}

int Model::getCurrentDegreeData()
{
	return this->CurrentDegreeData;
}










