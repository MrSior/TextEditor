//
// Created by Семён Чубенко on 25.11.2021.
//

#ifndef TEXTEDITOR_COLLAPSEBRACKETSCONTROLLER_H
#define TEXTEDITOR_COLLAPSEBRACKETSCONTROLLER_H

#include "CollapseBracketsModel.h"
#include "CollapseBracketsRender.h"

class CollapseBracketsController {
private:
    CollapseBracketsModel* m_model;
    CollapseBracketsRender* m_render;
public:
    CollapseBracketsController(CollapseBracketsModel* model, CollapseBracketsRender* render);
    void Run();
};


#endif //TEXTEDITOR_COLLAPSEBRACKETSCONTROLLER_H
