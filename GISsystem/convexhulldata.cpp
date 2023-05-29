#include "convexhulldata.h"
#include "ui_convexhulldata.h"

ConvexhullData::ConvexhullData(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ConvexhullData)
{
    ui->setupUi(this);
    QVBoxLayout *layout = new QVBoxLayout(this);

            QLabel *importLabel = new QLabel("Import File:", this);
            importLineEdit = new QLineEdit(this);
            QPushButton *importButton = new QPushButton("Browse", this);
            connect(importButton, &QPushButton::clicked, this, &ConvexhullData::browseImportFile);

            QLabel *exportLabel = new QLabel("Export File:", this);
            exportLineEdit = new QLineEdit(this);
            QPushButton *exportButton = new QPushButton("Browse", this);
            connect(exportButton, &QPushButton::clicked, this, &ConvexhullData::browseExportFile);

            QPushButton *saveButton = new QPushButton("Save", this);
            connect(saveButton, &QPushButton::clicked, this, &ConvexhullData::saveData);

            layout->addWidget(importLabel);
            layout->addWidget(importLineEdit);
            layout->addWidget(importButton);
            layout->addWidget(exportLabel);
            layout->addWidget(exportLineEdit);
            layout->addWidget(exportButton);
            layout->addWidget(saveButton);

            setLayout(layout);







}

ConvexhullData::~ConvexhullData()
{
    delete ui;
}
