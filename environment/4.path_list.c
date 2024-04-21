#include "main.h"



list_t *path_list(const char *str)
{
      char *strCopy = _strdup(str);
      char *var_value = _getenv(strCopy);
      unisgned int i = 0;
      list_t newNode;

      if (str == NULL)
      {
	      return(NULL);
      }
      newNode = malloc(sizeof(list));
      if (newNode == NULL)
	{
		return (NULL);
	}
      newNode->str = 

