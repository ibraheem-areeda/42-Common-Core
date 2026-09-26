/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iareeda <iareeda@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 14:13:45 by iareeda           #+#    #+#             */
/*   Updated: 2026/09/26 14:42:40 by iareeda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	*ft_memset(void *s, int c, size_t n)
// {
	
// }

int main() {
    char arr[5] = {'a', 'b', 'b', 'c', 'd'};

    // Set all bytes of the array to 0
    memset(arr, 'a', sizeof(arr));

    // numbers is now {0, 0, 0, 0, 0}
    printf("First element: %s\n", arr); 
    return 0;
}