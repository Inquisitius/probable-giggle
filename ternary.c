#include "ternary.h"
int ternary (int cond, int true_value, int false_value)
{
  if (cond > 0)
  {
    return true_value;
  }
  else
  {
    return false_value;
  }
}
