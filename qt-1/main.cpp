#include<QApplication>
#include<QLabel>
int main(int args,char*argv[]){
    QApplication app(args,argv);

    QLabel *label=new QLabel("hello world");
    label->setWindowTitle("first");
    label->resize(400,400); //opening window size
    label->show();
    return app.exec();
}
