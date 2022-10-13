#include "main.h"

void rev_string(char *s)
{
int i = 0;
int j;
int slen;
  
while (s[i] != '\0')
{
i++;
}

slen = i;
char copy [slen];

for (j = 0; j < slen; j++){
copy[j] = s[i - 1];
i--;
}

copy[slen] = '\0';

for (j = 0; j < slen; j++){
s[j] = copy[j];
}
}
