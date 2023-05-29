#ifndef BUFFERCOMMAND_H
#define BUFFERCOMMAND_H

#include "command.h"
#include "receiver.h"

class BufferCommand : public Command
{
public:
    BufferCommand(Receiver *receiver) : m_receiver(receiver) {}

    void execute() override
    {
        m_receiver->calculateBuffer();
    }

private:
    Receiver *m_receiver;
};

#endif // BUFFERCOMMAND_H
