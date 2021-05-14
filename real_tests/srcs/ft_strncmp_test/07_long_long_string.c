/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_long_long_string.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 14:45:18 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/14 16:55:28 by kefujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

int	long_long_string(void)
{
	const char	*str1 = "0BvxRZXL4gVmAiCY8xZzWnbK6YSBPEfBOoL7M9oLgwlwNJTik \
				C2TaBfBZh7Z3OFluq1uNddll7SA4Y5LWVIROpxLTpn4j9rIAi0WStRlgq \
				jnNneaJKhfMkI8DZI7H1Ousb16vVNSQPqNCM5R6XmVEZoP5W7cGzm0f5W \
				yOEJeq52T5GDUOZKKmGUEv286SUBHJcFxYQhEHa1i0rbYKDXVqQYs58aB \
				acPzL6GPs4StWqUVtPzHZAXWNeB7KzSui1XLOHYV7dd1J693AUaJKqIXp \
				RYH6PxrUCPzq6d5GeEuBjYmefPBImkc9VADsV27a9qasK4A1yfe3a0A6W \
				SWwssv6sVcz1cvHvp9IUCiQ7qQTD5jdgTIuVeFyBJiwR8RgTSBwi3umPT \
				rMQjWmdNtDMu72KiRf70bCxT0y2dzHvS3VO9e2yhujc4s8FDgeW2RDeYc \
				FbbhzbolbBF7wEPNb4othjnkp043kmNdDnqOMV0xT9kVCybJkyXYuUKPg \
				7J7OtPL5NNQu9YKiOmiTme6yH3B8Y0RSmdQSAQluI4TvfTshpgdg8zeeu \
				FlBUinz6LQVj7G1KxH8WAjj8hhPlMHLxrNxtTpagvNzz7k4aN6kEfKRWx \
				ELSkbMjHNVKrthiVpU80OEUvL8fArqROyOqNHXgUJpgaYtpYS36F3Q3hx \
				XlHK2Hdrv4zaoZmzmPAzcHmXLqMsPSztT1s1eDrULYkf9ZRALLSgVDvn5 \
				Cl9AltB8IYZHXsyQAgxEdr0jXEQ6CtPCdFxExYR3Z15hnoTGaiH2savX8 \
				Y1GLlc0U6W97Gb2eBhU9hRkzlmECw5eHKpsU92r2hLqEUdraoUDi5Tl5E \
				56C4mJlODamEdWrAUuYOeu4trCp2it12b1r4pMnn68uFJBwANct2c6OPi \
				dlSHqqCOEwYsnLlUumRBjH8aR1fh23uHiCY1UsZL1DVqIZoSDrVMeUxrJ \
				XqEazmYF85Cq6BRbgwFJMfRmRLXFJwHV7x0t3ci";
	const char	*str2 = "0BvxRZXL4gVmAiCY8xZzWnbK6YSBPEfBOoL7M9oLgwlwNJTik \
				C2TaBfBZh7Z3OFluq1uNddll7SA4Y5LWVIROpxLTpn4j9rIAi0WStRlgq \
				jnNneaJKhfMkI8DZI7H1Ousb16vVNSQPqNCM5R6XmVEZoP5W7cGzm0f5W \
				yOEJeq52T5GDUOZKKmGUEv286SUBHJcFxYQhEHa1i0rbYKDXVqQYs58aB \
				acPzL6GPs4StWqUVtPzHZAXWNeB7KzSui1XLOHYV7dd1J693AUaJKqIXp \
				RYH6PxrUCPzq6d5GeEuBjYmefPBImkc9VADsV27a9qasK4A1yfe3a0A6W \
				SWwssv6sVcz1cvHvp9IUCiQ7qQTD5jdgTIuVeFyBJiwR8RgTSBwi3umPT \
				rMQjWmdNtDMu72KiRf70bCxT0y2dzHvS3VO9e2yhujc4s8FDgeW2RDeYc \
				FbbhzbolbBF7wEPNb4othjnkp043kmNdDnqOMV0xT9kVCybJkyXYuUKPg \
				7J7OtPL5NNQu9YKiOmiTme6yH3B8Y0RSmdQSAQluI4TvfTshpgdg8zeeu \
				FlBUinz6LQVj7G1KxH8WAjj8hhPlMHLxrNxtTpagvNzz7k4aN6kEfKRWx \
				ELSkbMjHNVKrthiVpU80OEUvL8fArqROyOqNHXgUJpgaYtpYS36F3Q3hx \
				XlHK2Hdrv4zaoZmzmPAzcHmXLqMsPSztT1s1eDrULYkf9ZRALLSgVDvn5 \
				Cl9AltB8IYZHXsyQAgxEdr0jXEQ6CtPCdFxExYR3Z15hnoTGaiH2savX8 \
				Y1GLlc0U6W97Gb2eBhU9hRkzlmECw5eHKpsU92r2hLqEUdraoUDi5Tl5E \
				56C4mJlODamEdWrAUuYOeu4trCp2it12b1r4pMnn68uFJBwANct2c6OPi \
				dlSHqqCOEwYsnLlUumRBjH8aR1fh23uHiCY1UsZL1DVqIZoSDrVMeUxrJ \
				XqEazmYF85Cq6BRbgwFJMfRmRLXFJwHV7x0t3ci";

	if (ft_strncmp(str1, str2, 1000) == strncmp(str1, str2, 1000))
		return (0);
	else
		return (-1);
}
