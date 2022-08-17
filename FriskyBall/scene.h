#ifndef SCENE_H
#define SCENE_H
#include "ball.h"
#include "limitfield.h"
#include <QtGui>


class Scene
{
public:
    Scene();
    void update(float deltaSeconds);
    void redraw(QPainter& painter);
    explicit Scene(const limitfield& borders); //??



private:
    void updateOneBall(float deltaSecond, Ball* one_ball);
    /* добавим поля для хранения скорости шарика (которая теперь будет изменяться динамически),
       размера шарика (неизменного), границ сцены (неизменных).*/

    const double        m_gravity;
    const limitfield    m_borders;
    QList <Ball*>       m_balls;
};

#endif // SCENE_H
