/* _isdigit: Checks if a character is a digit */
int _isdigit(int c)
{
  if (c >= '0' && c <= '9')
    return 1; /* Character is a digit */
  return 0;   /* Character is not a digit */
}

