#ifndef STATUSBAR_H
#define STATUSBAR_H

#include <QtWidgets>

class StatusBar
{
public:
    StatusBar(QMainWindow* parent);
    void ShowMessage(const QString& message, int timeout);
    void SetLeftLabelText(const QString& text);
    void SetRightLabelText(const QString& text);

private:
    QStatusBar *m_qbar;
    QLabel *m_leftLabel;
    QLabel *m_rightLabel;
};

#endif // STATUSBAR_H
