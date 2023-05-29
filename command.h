#ifndef COMMAND_H
#define COMMAND_H

#include <QObject>

class Command : public QObject
{
    Q_OBJECT
public:
    explicit Command(QObject *parent = nullptr);
public:
    virtual ~Command() {}
    virtual void execute() = 0;
signals:

public slots:
};

#endif // COMMAND_H
