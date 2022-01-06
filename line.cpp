#include "line.h"

Line::Line(int x1,int y1,QColor color,QBrush brush,int linewidth, QGraphicsScene* scene):
    Shape(x1, y1, color,brush, linewidth, scene)
{
line= new QGraphicsLineItem(x1,y1,x1,y1);
line->setPen(pen);
shapeType = "Line";
}

void Line:: setParemeters(int x2,int y2){
    length = pow((pow((x1-x2),2)+pow((y1-y2),2)),0.5);
    line->setLine(x1,y1,x2,y2);

}
 Line:: ~Line(){

}

Line::Line(QString name,float perimeter):
     Shape( name, perimeter){
     this->name=name;
     this->perimeter=perimeter;
}

float Line::getperimeter(){
    perimeter = length;

  return perimeter;
}


QGraphicsLineItem* Line::getShape()
{
    return line;
}

void Line::addShape(){
scene->addItem(line);
scene->update();

}

void Line::deleteShape()
{
    scene->removeItem(line);
    scene->update();

}
