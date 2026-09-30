//
// Created by noe on 30/09/2026.
//

#ifndef MODZERO_CONTROLLER_H
#define MODZERO_CONTROLLER_H
#include <qobject.h>

#include "../model/Model.h"
#include "../view/View.h"

class Controller : QObject {
public:
    Controller(Model &model, View &view);
    ~Controller() override = default;

    Model &getModel() const;
    Model &getView() const;
private:
    Model &model;
    View &view;
};

#endif //MODZERO_CONTROLLER_H
