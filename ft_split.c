#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>

int	ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while(*str != '\0')
	{
		str++;
		i++;
	}
	printf("len = %d\n", i);
	return (i);
}

int count_words(char *str)
{
	int i;
	int count;	

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t'))
			i++;
		while (str[i] && str[i] != ' ' && str[i] != '\t')
			i++;
		count++;
	}
	printf("count words - %d\n", count);
	return (count);
}

void	create_word(char **ptr, char *str, int b)
{
	int e;
	int i;
	char *arr;

	arr = *ptr;
	printf("create_word b = %d\n", b);
	i = 0;
	while (str[b] && (str[b] == ' ' || str[b] == '\t'))
		b++;
	e = b;
	while (str[e] && str[e] != ' ' && str[e] != '\t')
		e++;
	arr = malloc(sizeof(*arr) * (e - b) + 1);
	while (b < e)
	{
		arr[i] = str[b];
		i++;
		b++;
	}
	arr[i] = '\0';
	printf("done, i = %d\n", i);
	printf("%s\n", arr);
}

char	**ft_split(char *str)
{
	int i;
	int j;
	char **arr;
	int count;

	i = 0;
	j = 0;
	count = count_words(str);
	arr = malloc(sizeof(**arr) * count);
	while ()
	{
		create_word(&arr[i], str, j);
		j = j + ft_strlen(arr[i]);
		i++;
	}	
}

int		main(int argc, char **argv)
{
	(void) argc;
	(void) argv;
	char *str;
	char **arr;
	int i;

//	str = argv[1];
	arr = ft_split("aaaaa     bbbbb          ccccc ddd");
/*	i = 0;
	while (i < 3)
	{
		printf("%s\n", arr[i]);
		i++;
	}*/
	return (0);
}