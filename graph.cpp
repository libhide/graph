#include <iostream.h>
#include <conio.h>
#include <graphics.h>

#define xy gotoxy

void main() {
  clrscr();
  float a, b, c, x, y, coox[3], cooy[3], n, con, in;
  int gd = DETECT, gm, i = 0, k, ab, cd;
  cout << "Enter your equationin ax + by + c = 0 form\n";
  cout << "a=";
  cin >> a;
  cout << "b=";
  cin >> b;
  cout << "c=";
  cin >> in;
  con = 20 * in;
  c = -con;
  cout << "your equation is " << endl
       << " " << a << "x + " << b << "y = " << c / 20;
  for (i = 1; i <= 2; i++) {
    coox[i] = i;
    x = i;
    n = a * x;
    y = (c - n) / b;
    cooy[i] = y;
  }

  cout << endl << "------------------" << endl;
  for (int j = 1; j <= 2; j++) {
    cout << " x = " << coox[j];
    cout << " y = " << cooy[j] << endl << "------------------";
    cout << endl;
  }
  getch();

  int xpos, ypos;
  clrscr();
  initgraph(&gd, &gm, "c:\turbo\tc\bgi");
  setcolor(GREEN);
  j = 0;

  xy(40, 16);
  cout << "0";

  for (j = 1; j < 480; j++) {
    putpixel(320, j, WHITE);
  }
  for (i = 1; i < 640; i++) {
    putpixel(i, 240, WHITE);
  }
  ab = getmaxx();
  for (i = 0; i <= ab; i += 20) {
    putpixel(i, 241, WHITE);
    putpixel(i, 242, WHITE);
    putpixel(i, 243, WHITE);
  }
  cd = getmaxy();
  for (j = 0; j <= cd; j += 20) {
    putpixel(321, j, WHITE);
    putpixel(322, j, WHITE);
    putpixel(323, j, WHITE);
  }

  for (i = -319; i <= 320; i++) {
    j = (c - (a * i)) / b;
    k = (int)j;
    putpixel(320 + i, 240 - k, BLUE);
  }

  getch();
}