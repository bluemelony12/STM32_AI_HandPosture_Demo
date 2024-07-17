#ifndef MODEL_HPP
#define MODEL_HPP

class ModelListener;

class Model
{
public:
    Model();

    void bind(ModelListener* listener)
    {
        modelListener = listener;
    }

    int* getCurrentPostureRData();
    int* getCurrentPostureVData();
    int getCurrentLevelData();
    int getCurrentDegreeData();

    void tick();
protected:
    ModelListener* modelListener;

private:
    int CurrentPostureRData[3] = {0,};
    int CurrentPostureVData[3] = {0,};

    int CurrentLevelData = 0;
    int CurrentDegreeData = 0;

    int LeftRightSign = 0;
};

#endif // MODEL_HPP
