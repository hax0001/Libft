/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nait-bou <nait-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:07:02 by nait-bou          #+#    #+#             */
/*   Updated: 2023/11/10 21:48:08 by nait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char  **mouves(char const *s, char c, char **strings1, int len1)
{
  int i;
  int j;
  int to_allocate;
  char *buffer;
  int string_index;

  i = 0;
  string_index = 0;
  buffer = malloc(sizeof(char) * (len1 + 1));
  if (!buffer)
	  return (NULL);
  while (i < len1)
  {
    if ((char)s[i] == c)
    i++;
    j = 0;
    while (i < len1)
      {
        if ((char)s[i] == c)
          break;
        buffer[j++] = s[i++];
      }
      if (j > 0)
      {
        buffer[j] = '\0';
        to_allocate = sizeof(char) * (strlen(buffer) + 1);
        strings1[string_index] = malloc(to_allocate);
        if (!strings1[string_index])
          return (NULL);
        strcpy(strings1[string_index], buffer);
        string_index++;
      }
    }
    free(buffer);
    strings1[string_index] = 0;
    return (strings1);
  }


char **ft_split(char const *s, char c)
{
  int len;
  int i;
  int old_i;
  int  count;
  char **strings;

  count = 0;
  len = strlen(s);
  i = 0;
  while (i < len)
  {
	  if ((char)s[i] == c)
		i++;
	old_i = i;
	while (i < len)
	{
	  if ((char)s[i] == c)
		break;
	  i++;
	}
	if (i > old_i)
		count = count + 1;
  }
   strings = (char**)malloc(sizeof(char *) * (count + 1));
   strings = mouves(s, c, strings, len);
   return (strings);
  }


#include <stdio.h>
#include <stdlib.h>

int main() {
    const char s[] = "To be, or not to be, that is the question.";
    char t = ' ';
    char **result = ft_split(s, t);
    for (int i = 0; result[i] != NULL; i++) {
        printf("%s\n", result[i]);
    }
    for (int i = 0; result[i] != NULL; i++) {
        free(result[i]);
    }
    free(result);
    return 0;
}
