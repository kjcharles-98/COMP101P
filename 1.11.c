#include <math.h>
#include "graphics.h"
#include <stdio.h>
int main()
{
  drawLine(50,150,450,150);
  drawLine(450,150,445,145);
  drawLine(450,150,445,155);
  drawLine(250,20,250,290);
  drawLine(250,20,255,25);
  drawLine(250,20,245,25);
  int i = 250; //3.183
  int j = 150; //0.01
  for(;i<=450;i++)
  {
    //drawString(".",i,j);
    drawLine(i,j,i+1,150-(100*(double)sin((double)(i+1-250)*0.0314)));
    j = 150-(100*(int)sin((double)(i+1-250)*0.0314));
  }
  for(i=250;i>=50;i = i-1)
  {
    drawLine(i,j,i-1,150-(100*(double)sin((double)(i-1-250)*0.0314)));
    j = 150-(100*(int)sin((double)(i-1-250)*0.0314));
  }

  return i;
}
