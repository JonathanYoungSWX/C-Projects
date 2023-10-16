#include <gtk/gtk.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 10
#define COLS 10

int grid[ROWS][COLS];

static void print_grid() {
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      if (grid[i][j] == 0) {
        g_print (". ");
      } else {
        g_print ("* ");
      }
    }
    g_print ("\n");
  }
  g_print ("\n");
}

static void update_grid() {
  int new_grid[ROWS][COLS];
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      int neighbors = 0;
      for (int x = -1; x <= 1; x++) {
        for (int y = -1; y <= 1; y++) {
          if (x == 0 && y == 0) {
            continue;
          }
          int row = (i + x + ROWS) % ROWS;
          int col = (j + y + COLS) % COLS;
          neighbors += grid[row][col];
        }
      }
      if (grid[i][j] == 1) {
        if (neighbors < 2 || neighbors > 3) {
          new_grid[i][j] = 0;
        } else {
          new_grid[i][j] = 1;
        }
      } else {
        if (neighbors == 3) {
          new_grid[i][j] = 1;
        } else {
          new_grid[i][j] = 0;
        }
      }
    }
  }
  