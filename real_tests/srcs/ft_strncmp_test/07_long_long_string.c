/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_long_long_string.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 14:45:18 by kkamashi          #+#    #+#             */
/*   Updated: 2021/05/14 14:48:22 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

int	long_long_string(void)
{
	char *str1 = "0BvxRZXL4gVmAiCY8xZzWnbK6YSBPEfBOoL7M9oLgwlwNJTikC2TaBfBZh7 \
				Z3OFluq1uNddll7SA4Y5LWVIROpxLTpn4j9rIAi0WStRlgqjnNneaJKhfMkI8D \
				ZI7H1Ousb16vVNSQPqNCM5R6XmVEZoP5W7cGzm0f5WyOEJeq52T5GDUOZKKmGU \
				Ev286SUBHJcFxYQhEHa1i0rbYKDXVqQYs58aBacPzL6GPs4StWqUVtPzHZAXWN \
				eB7KzSui1XLOHYV7dd1J693AUaJKqIXpRYH6PxrUCPzq6d5GeEuBjYmefPBImk \
				c9VADsV27a9qasK4A1yfe3a0A6WSWwssv6sVcz1cvHvp9IUCiQ7qQTD5jdgTIu \
				VeFyBJiwR8RgTSBwi3umPTrMQjWmdNtDMu72KiRf70bCxT0y2dzHvS3VO9e2yh \
				ujc4s8FDgeW2RDeYcFbbhzbolbBF7wEPNb4othjnkp043kmNdDnqOMV0xT9kVC \
				ybJkyXYuUKPg7J7OtPL5NNQu9YKiOmiTme6yH3B8Y0RSmdQSAQluI4TvfTshpg \
				dg8zeeuFlBUinz6LQVj7G1KxH8WAjj8hhPlMHLxrNxtTpagvNzz7k4aN6kEfKR \
				WxELSkbMjHNVKrthiVpU80OEUvL8fArqROyOqNHXgUJpgaYtpYS36F3Q3hxXlH \
				K2Hdrv4zaoZmzmPAzcHmXLqMsPSztT1s1eDrULYkf9ZRALLSgVDvn5Cl9AltB8 \
				IYZHXsyQAgxEdr0jXEQ6CtPCdFxExYR3Z15hnoTGaiH2savX8Y1GLlc0U6W97G \
				b2eBhU9hRkzlmECw5eHKpsU92r2hLqEUdraoUDi5Tl5E56C4mJlODamEdWrAUu \
				YOeu4trCp2it12b1r4pMnn68uFJBwANct2c6OPidlSHqqCOEwYsnLlUumRBjH8 \
				aR1fh23uHiCY1UsZL1DVqIZoSDrVMeUxrJXqEazmYF85Cq6BRbgwFJMfRmRLXF \
				JwHV7x0t3ci";
	char *str2 = "0BvxRZXL4gVmAiCY8xZzWnbK6YSBPEfBOoL7M9oLgwlwNJTikC2TaBfBZh7 \
				Z3OFluq1uNddll7SA4Y5LWVIROpxLTpn4j9rIAi0WStRlgqjnNneaJKhfMkI8D \
				ZI7H1Ousb16vVNSQPqNCM5R6XmVEZoP5W7cGzm0f5WyOEJeq52T5GDUOZKKmGU \
				Ev286SUBHJcFxYQhEHa1i0rbYKDXVqQYs58aBacPzL6GPs4StWqUVtPzHZAXWN \
				eB7KzSui1XLOHYV7dd1J693AUaJKqIXpRYH6PxrUCPzq6d5GeEuBjYmefPBImk \
				c9VADsV27a9qasK4A1yfe3a0A6WSWwssv6sVcz1cvHvp9IUCiQ7qQTD5jdgTIu \
				VeFyBJiwR8RgTSBwi3umPTrMQjWmdNtDMu72KiRf70bCxT0y2dzHvS3VO9e2yh \
				ujc4s8FDgeW2RDeYcFbbhzbolbBF7wEPNb4othjnkp043kmNdDnqOMV0xT9kVC \
				ybJkyXYuUKPg7J7OtPL5NNQu9YKiOmiTme6yH3B8Y0RSmdQSAQluI4TvfTshpg \
				dg8zeeuFlBUinz6LQVj7G1KxH8WAjj8hhPlMHLxrNxtTpagvNzz7k4aN6kEfKR \
				WxELSkbMjHNVKrthiVpU80OEUvL8fArqROyOqNHXgUJpgaYtpYS36F3Q3hxXlH \
				K2Hdrv4zaoZmzmPAzcHmXLqMsPSztT1s1eDrULYkf9ZRALLSgVDvn5Cl9AltB8 \
				IYZHXsyQAgxEdr0jXEQ6CtPCdFxExYR3Z15hnoTGaiH2savX8Y1GLlc0U6W97G \
				b2eBhU9hRkzlmECw5eHKpsU92r2hLqEUdraoUDi5Tl5E56C4mJlODamEdWrAUu \
				YOeu4trCp2it12b1r4pMnn68uFJBwANct2c6OPidlSHqqCOEwYsnLlUumRBjH8 \
				aR1fh23uHiCY1UsZL1DVqIZoSDrVMeUxrJXqEazmYF85Cq6BRbgwFJMfRmRLXF \
				JwHV7x0t3ci";

	if (ft_strncmp(str1, str2, 1000) == strncmp(str1, str2, 1000))
		return (0);
	else
		return (-1);
}
