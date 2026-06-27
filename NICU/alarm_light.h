#ifndef ALARM_LIGHT_H
#define ALARM_LIGHT_H

#include <QWidget>
#include <QPainter>

class Alarm_Light : public QWidget
{
    Q_OBJECT
public:
    Alarm_Light(QWidget *parent = 0);
protected:
    void paintEvent(QPaintEvent* pevent);
    void drawBorderOut(QPainter*painter);
    void drawLight(QPainter*painter);
private:
    QColor m_outColorStart;
    QColor m_outColorEnd;
    QColor m_lightColor;
public slots:
    void setBackgroundColor(const QColor &color);
    void setRedLight();
    void setYellowLight();
    void setOrangeLight();
    void setGreenLight();

signals:
};

#endif // ALARM_LIGHT_H
