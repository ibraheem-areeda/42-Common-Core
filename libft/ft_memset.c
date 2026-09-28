/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iareeda <iareeda@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 14:13:45 by iareeda           #+#    #+#             */
/*   Updated: 2026/09/28 19:58:21 by iareeda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	int	i;
	
	i = 0;

	while ()
	{
		/* code */
	}
	

	
}

int main() {
    char arr[5] = {'a', 'b', 'b', 'c', 'd'};
	int arrnum[5] = {1, 2, 3, 4, 5};
    // Set all bytes of the array to 0
    memset(arrnum, 'a', sizeof(char)*10);

    // numbers is now {0, 0, 0, 0, 0}
    printf("First element: ,%c \n", arrnum[2]); 
    return 0;
}