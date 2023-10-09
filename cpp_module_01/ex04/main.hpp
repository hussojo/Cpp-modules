/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 07:41:52 by jhusso            #+#    #+#             */
/*   Updated: 2023/10/09 07:42:34 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
/*
ifstream to read from files
ofstream to write to files
fstream to read and write
*/

int	replace_and_copy(std::string filename, std::ifstream& file, std::string s1, std::string s2);

