#ifndef GOAL_MOVE_TO_ITEM_H
#define GOAL_MOVE_TO_ITEM_H
#pragma warning (disable:4786)

#include "Raven_Goal_Types.h"


class Raven_Bot;


class Goal_MoveToItem : public Raven_Goal_Types
{
private:

  int  m_iItemType;

public:

  Goal_MoveToItem(Raven_Bot* pBot,
               int        type):Raven_Goal_Types(pBot, goal_explore),
                                m_iItemType(type)
  {}

  void Initialize();

  void Process(){}

  void Terminate(){}
};



#endif
