//
// Created by Семён Чубенко on 12.11.2021.
//

#ifndef TEXTEDITOR_ERASELINEMENUCONTROLLER_H
#define TEXTEDITOR_ERASELINEMENUCONTROLLER_H

#include "EraseLineMenuModel.h"
#include "EraseLineMenuRender.h"

class EraseLineMenuController {
private:
    EraseLineMenuModel* m_model;
    EraseLineMenuRender* m_render;
public:
    EraseLineMenuController(EraseLineMenuModel* model, EraseLineMenuRender* render);
    void Run();
};


#endif //TEXTEDITOR_ERASELINEMENUCONTROLLER_H
