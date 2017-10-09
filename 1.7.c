#include "graphics.h"

int main()
{
  drawRect(150,100,100,150);
  drawLine(150,100,180,70);
  drawLine(250,100,280,70);
  drawLine(250,250,280,220);
  drawLine(180,70,280,70);
  drawLine(280,70,280,220);
  drawRect(230,230,10,20);
  setColour(orange);
  fillRect(150,100,100,150);
  setColour(white);
  fillRect(230,230,10,20);
  drawString("MPEB",160,120);
  return 0;
}
