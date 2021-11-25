//
// Created by Семён Чубенко on 25.11.2021.
//

#ifndef TEXTEDITOR_COMMANDSMENUCONTROLLER_H
#define TEXTEDITOR_COMMANDSMENUCONTROLLER_H

#include "CommandsMenuRender.h"
#include "CommandsMenuModel.h"

class CommandsMenuController {
private:
    CommandsMenuModel* m_model;
    CommandsMenuRender* m_render;
public:
    CommandsMenuController(CommandsMenuModel* model, CommandsMenuRender* render);
    void Run();
};


#endif //TEXTEDITOR_COMMANDSMENUCONTROLLER_H
