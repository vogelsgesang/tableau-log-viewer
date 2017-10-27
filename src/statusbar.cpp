#include "statusbar.h"

StatusBar::StatusBar(QMainWindow* parent) :
    m_qbar(parent->statusBar()),
    m_leftLabel(new QLabel(parent->statusBar())),
    m_rightLabel(new QLabel(parent->statusBar()))
{
    m_qbar->addWidget(m_leftLabel);
    m_qbar->addPermanentWidget(m_rightLabel);
}

void StatusBar::ShowMessage(const QString& message, int timeout)
{
    m_qbar->showMessage(message, timeout);
}

void StatusBar::SetLeftLabelText(const QString& text)
{
    m_leftLabel->setText(text);
}

void StatusBar::SetRightLabelText(const QString& text)
{
    m_rightLabel->setText(text);
}
