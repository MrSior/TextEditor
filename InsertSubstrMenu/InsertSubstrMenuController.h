//
// Created by Семён Чубенко on 15.11.2021.
//

#ifndef TEXTEDITOR_INSERTSUBSTRMENUCONTROLLER_H
#define TEXTEDITOR_INSERTSUBSTRMENUCONTROLLER_H

#include "InsertSubstrMenuModel.h"
#include "InsertSubstrMenuRender.h"

class InsertSubstrMenuController {
private:
    InsertSubstrMenuModel* m_model;
    InsertSubstrMenuRender* m_render;
public:
    InsertSubstrMenuController(InsertSubstrMenuModel* model, InsertSubstrMenuRender* render);
    void Run();
};


#endif //TEXTEDITOR_INSERTSUBSTRMENUCONTROLLER_H
