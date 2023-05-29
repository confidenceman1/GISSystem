#ifndef CONVEXHULLCOMMAND_H
#define CONVEXHULLCOMMAND_H

#include "command.h"
#include "receiver.h"

class ConvexHullCommand : public Command
{
public:
    ConvexHullCommand(Receiver *receiver) : m_receiver(receiver) {}

    void execute() override
    {
        m_receiver->calculateConvexHull();
    }

private:
    Receiver *m_receiver;

};

#endif // CONVEXHULLCOMMAND_H
