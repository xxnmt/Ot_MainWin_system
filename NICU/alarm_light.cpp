#include "alarm_light.h"



Alarm_Light::Alarm_Light(QWidget *parent)
    :QWidget(parent)
{
    m_outColorStart=QColor(225,225,225);
    m_outColorEnd=QColor(163,163,163);

}

void Alarm_Light::paintEvent(QPaintEvent *pevent)
{
    int width=this->width();
    int height=this->height();
    int side=qMin(width,height);
    QPainter painter(this);
    painter.translate(width/2,height/2);
    drawBorderOut(&painter);
    drawLight(&painter);

}

void Alarm_Light::drawBorderOut(QPainter *painter)
{
    int r=30;
    painter->save();
    painter->setPen(Qt::NoPen);
    QLinearGradient borderGradient(0,-r,0,r);
    borderGradient.setColorAt(0,m_outColorStart);
    borderGradient.setColorAt(1,m_outColorEnd);
    painter->setBrush(borderGradient);
    painter->drawEllipse(-r,-r,r*2,r*2);
    painter->restore();

}

void Alarm_Light::drawLight(QPainter *painter)
{
    int radius = 26;
    painter->save();
    painter->setPen(Qt::NoPen);
    painter->setBrush(m_lightColor);
    painter->drawEllipse(-radius,-radius,radius*2,radius*2);
    painter->restore();
}

void Alarm_Light::setBackgroundColor(const QColor &color)
{
    m_lightColor = color;
    update();
}

void Alarm_Light::setRedLight()
{
    setBackgroundColor(QColor(255,107,107));

}

void Alarm_Light::setYellowLight()
{
    setBackgroundColor(QColor(238,255,102));
}

void Alarm_Light::setOrangeLight()
{
    setBackgroundColor(QColor(211,169,139));

}

void Alarm_Light::setGreenLight()
{
    setBackgroundColor(QColor(24,189,155));

}
