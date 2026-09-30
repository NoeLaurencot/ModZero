//
// Created by noe on 30/09/2026.
//

#include "View.h"

// concstructor
View::View(Model &model, QWidget *mainWindow)
    : model(model),
      mainWindow(mainWindow) {
}

// getters and setters

Model &View::getModel() const {
    return this->model;
}

QWidget *View::getMainWindow() const {
    return this->mainWindow;
}

void View::setMainWindow(QWidget *window) {
    this->mainWindow = window;
}

void View::initWidgets() {
    this->mainWindow = new QWidget(nullptr);
}
