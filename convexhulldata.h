#ifndef CONVEXHULLDATA_H
#define CONVEXHULLDATA_H

#include <QWidget>
#include <QMainWindow>
#include <QMenu>
#include <QAction>
#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>
#include <QApplication>
#include <QLineEdit>
#include <QPushButton>
#include <QFileDialog>
#include <QMessageBox>

namespace Ui {
class ConvexhullData;
}

class ConvexhullData : public QWidget
{
    Q_OBJECT

public:
    explicit ConvexhullData(QWidget *parent = nullptr);
    ~ConvexhullData();

private slots:
    void browseImportFile()
    {
        QString filePath = QFileDialog::getOpenFileName(this, "Select Import File");
        importLineEdit->setText(filePath);
    }

    void browseExportFile()
    {
        QString filePath = QFileDialog::getSaveFileName(this, "Select Export File");
        exportLineEdit->setText(filePath);
    }

    void saveData()
    {
        QString importFilePath = importLineEdit->text();
        QString exportFilePath = exportLineEdit->text();

        if (importFilePath.isEmpty() || exportFilePath.isEmpty()) {
            QMessageBox::warning(this, "Error", "Please select import and export files.");
            return;
        }

        // 执行保存操作，将数据从导入文件写入到输出文件
        // 这里可以编写你自己的保存逻辑

        QMessageBox::information(this, "Success", "Data saved successfully.");
    }

private:
    QLineEdit *importLineEdit;
    QLineEdit *exportLineEdit;

private:
    Ui::ConvexhullData *ui;
};

#endif // CONVEXHULLDATA_H
