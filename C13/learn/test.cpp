/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:41:19 by leng-chu          #+#    #+#             */
/*   Updated: 2022/11/03 15:47:51 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

namespace V
{
	class	Test
	{
		int	i;

		public:
			Test(void);
			~Test(void);
			Test(const Test & src);
			Test & operator=(const Test & rhs);
	};
}

V::Test::Test(void)
{
	std::cout << "Test constructor is created" << std::endl;
}

V::Test::~Test(void)
{
	std::cout << "Destructor is created" << std::endl;
}

int	main(void)
{
	V::Test test;
}
