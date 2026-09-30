//
// Created by noe on 30/09/2026.
//

#ifndef MODZERO_VIEW_H
#define MODZERO_VIEW_H
#include <qwidget.h>

#include "../model/Model.h"


class View : QObject {
    Q_OBJECT

public:
    explicit View(Model &model);

    Model &getModel() const;

    QWidget *getMainWindow() const;

    void initWidgets();

private:
    Model &model;

    QWidget *mainWindow;
};


#endif //MODZERO_VIEW_H
