//
// Created by Семён Чубенко on 30.10.2021.
//

#ifndef TEXTEDITOR_SAVEMENUCONTROLLER_H
#define TEXTEDITOR_SAVEMENUCONTROLLER_H

#include "SaveMenuModel.h"
#include "SaveMenuRender.h"

class SaveMenuController {
private:
    SaveMenuModel* m_model;
    SaveMenuRender* m_render;
public:
    SaveMenuController(SaveMenuModel* model, SaveMenuRender* render);
    void Run();
};


#endif //TEXTEDITOR_SAVEMENUCONTROLLER_H
