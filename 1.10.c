#include "graphics.h"

int main()
{
  drawLine(50,70,50,260);
  drawLine(50,260,370,260);
  setColour(blue);
  fillRect(50,200,50,60);
  setColour(green);
  fillRect(100,120,50,140);
  setColour(red);
  fillRect(150,140,50,120);
  setColour(yellow);
  fillRect(200,160,50,100);
  setColour(magenta);
  fillRect(250,120,50,140);
  setColour(black);
  drawLine(45,110,50,110);
  drawLine(45,160,50,160);
  drawLine(45,210,50,210);
  drawLine(45,260,50,260);
  drawString("150",15,115);
  drawString("100",15,165);
  drawString("50",15,215);
  drawString("0",15,265);
  drawString("CDs",65,280);
  drawString("DVDs",110,280);
  drawString("Books",160,280);
  drawString("Clothes",207,280);
  drawString("Shoes",260,280);

  return 0;
}
