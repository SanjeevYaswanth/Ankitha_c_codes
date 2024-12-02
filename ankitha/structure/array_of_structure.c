#include <stdio.h>
struct employe{
    char name[12];
    int sal;
    float emp_id;
};

struct employe employee[3]={
    {"anki",11,12.0},
    {"pinki",13,14.0},
    {"monkey",15,16.9},
};

int main() 
{
  int i;
  for(i=0;i<3;i++)
  {
      printf("%s %d %f\n",employee[i].name,employee[i].sal,employee[i].emp_id);
  }
}
