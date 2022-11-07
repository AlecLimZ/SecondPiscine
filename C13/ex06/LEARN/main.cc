/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cc                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:59:01 by leng-chu          #+#    #+#             */
/*   Updated: 2022/11/07 17:08:16 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <queue>

using namespace	std;

void	showq(queue<int> g)
{
	//queue<int> g = gq;
	while (!g.empty())
	{
		cout << '\t' << g.front();
		g.pop();
	}
	cout << '\n';
}

// print the queue

int main()
{
	queue<int>	gquiz;
	gquiz.push(10);
	gquiz.push(20);
	gquiz.push(30);
	cout << "The queue gquiz is : ";
	showq(gquiz);
	cout << "\ngquiz.size() : " << gquiz.size();
	cout << "\ngquiz.front() : " << gquiz.front();
	cout << "\ngquiz.back() : " << gquiz.back();
	cout << "\ngquiz.pop() : ";
	gquiz.pop();
	showq(gquiz);
	return (0);
}
