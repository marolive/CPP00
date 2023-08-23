/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marolive <marolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 13:23:19 by marolive          #+#    #+#             */
/*   Updated: 2023/08/23 18:59:47 by marolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char *argv[])
{
    if (argc != 1)
    {
        int i = 1;
        while(argv[i])
        {
            size_t j = 0;
            std::string str = argv[i];
            while(j < str.length())
                std::cout << (char)toupper(str.at(j++));
            i++;
        }
	    std::cout << std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}
