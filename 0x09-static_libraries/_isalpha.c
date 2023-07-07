/* _isalpha: Checks if a character is alphabetic */
int _isalpha(int c)
{
  if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
    return 1; /* Character is alphabetic */
  return 0;   /* Character is not alphabetic */
}

