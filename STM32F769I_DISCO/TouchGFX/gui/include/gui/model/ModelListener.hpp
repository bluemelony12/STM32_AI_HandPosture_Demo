#ifndef MODELLISTENER_HPP
#define MODELLISTENER_HPP

#include <gui/model/Model.hpp>

class ModelListener
{
public:
    ModelListener() : model(0) {}
    
    virtual ~ModelListener() {}

    void bind(Model* m)
    {
        model = m;
    }

    virtual void notifyPostureRDataChanged(int* newPostureR) {}
    virtual void notifyPostureVDataChanged(int* newPostureV) {}
    virtual void notifyLevelDataChanged(int newLevel) {}
    virtual void notifyDegreeDataChanged(int newDegree) {}

protected:
    Model* model;
};

#endif // MODELLISTENER_HPP
