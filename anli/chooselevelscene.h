#ifndef CHOOSELEVELSCENE_H
#define CHOOSELEVELSCENE_H

#include <QMainWindow>
#include "playsence.h"
class ChooseLevelScene : public QMainWindow
{
    Q_OBJECT
public:
    explicit ChooseLevelScene(QWidget *parent = nullptr);
   void  paintEvent(QPaintEvent *);
   //游戏场景对象指针
   PlaySence *play=NULL;
signals:
   //写一个自定义的信号，告诉主场景返回
 void ChooseSceneBack();//自定义信号只需要声明，不需要实现

};

#endif  //CHOOSELEVELSCENE_H
