#ifndef RECEIVER_H
#define RECEIVER_H

#include <QObject>
#include <QDebug>

class Receiver : public QObject
{
    Q_OBJECT

public:
    explicit Receiver(QObject *parent = nullptr);

public slots:
    void calculateConvexHull()
    {
        // Call CGAL library to calculate convex hull
        qDebug() << "Calculating Convex Hull using CGAL..." << endl;
        // ... CGAL code here ...
    }

    void calculateBuffer()
    {
        // Call CGAL library to calculate buffer
        qDebug() << "Calculating Buffer using CGAL..." << endl ;
        // ... CGAL code here ...
    }

signals:


};

#endif // RECEIVER_H
