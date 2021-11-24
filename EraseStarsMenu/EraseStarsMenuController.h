//
// Created by Семён Чубенко on 24.11.2021.
//

#ifndef TEXTEDITOR_ERASESTARSMENUCONTROLLER_H
#define TEXTEDITOR_ERASESTARSMENUCONTROLLER_H

#include "EraseStarsMenuModel.h"
#include "EraseStarsMenuRender.h"

class EraseStarsMenuController {
private:
    EraseStarsMenuModel* m_model;
    EraseStarsMenuRender* m_render;
public:
    EraseStarsMenuController(EraseStarsMenuModel* model, EraseStarsMenuRender* render);
    void Run();
};


#endif //TEXTEDITOR_ERASESTARSMENUCONTROLLER_H
