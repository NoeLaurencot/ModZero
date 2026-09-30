//
// Created by noe on 30/09/2026.
//

#ifndef MODZERO_MODEL_H
#define MODZERO_MODEL_H
#include <qobject.h>

class Model : QObject{
public:
    Model() = default;
    ~Model() override = default;

    void initModel();
private:
};

#endif //MODZERO_MODEL_H
