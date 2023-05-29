#ifndef INVOKER_H
#define INVOKER_H

#include <QObject>
#include "command.h"

class Invoker : public QObject
{
    Q_OBJECT

public:
    explicit Invoker(QObject *parent = nullptr);

public:
    void setCommand(Command *command)
    {
        m_command = command;
    }

    void executeCommand()
    {
        if (m_command)
        {
            m_command->execute();
        }
    }

private:
    Command *m_command;
signals:

public slots:
};

#endif // INVOKER_H
