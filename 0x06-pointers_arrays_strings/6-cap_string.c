#include "main.h"

/**
 * *cap_string - capitalizes words
 * Description: Capitalizes all words of a string
 * @str: character
 * Return: char
 */

char *cap_string(char *str)
{
	int i = 0;

	int cap = 1; /* Capitalize the first letter */


while (str[i] != '\0')

switch (str[i] != '\0')

	case ' ':
	case '\t':
	case '\n':
	case ',':
	case ':':
	case '.':
	case '!':
	case '?':
	case '"':
	case '(':
	case ')':
	case '{':
	case '}':
	cap = 1; /* Set flag to capitalize next letter */
	break;
	default:
	if (cap)
	{
/* capitalize current letter */
str[i] = (str[i] >= 'a' && str[i] <= 'z') ? str[i] - 'a' + 'A' : str[i];
cap = 0; /* clearflag*/
	}
break;
}
i++;
}

return (str);
}
