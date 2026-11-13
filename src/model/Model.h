//
// Created by noe on 30/09/2026.
//

#ifndef MODZERO_MODEL_H
#define MODZERO_MODEL_H
#include <qobject.h>

class Model : public QObject {
public:
    Model() = default;

    explicit Model(std::string &modFolderPath);

    ~Model() override = default;

    void initModel();

private:
    std::string modFolderPath;
};

#endif //MODZERO_MODEL_H
