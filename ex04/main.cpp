/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-o <anunes-o@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 15:57:32 by anunes-o          #+#    #+#             */
/*   Updated: 2026/11/23 15:57:34 by anunes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

static std::string replaceOccurrences(const std::string &source,
                                     const std::string &search,
                                     const std::string &replacement)
{
    std::string result;
    std::string::size_type copied = 0;
    std::string::size_type found = source.find(search);

    while (found != std::string::npos)
    {
        result.append(source, copied, found - copied);
        result.append(replacement);
        copied = found + search.length();
        found = source.find(search, copied);
    }
    result.append(source, copied, std::string::npos);
    return result;
}

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>"
                  << std::endl;
        return 1;
    }
    if (argv[2][0] == '\0')
    {
        std::cerr << "Error: s1 cannot be empty." << std::endl;
        return 1;
    }

    const std::string filename(argv[1]);
    std::ifstream input(filename.c_str(), std::ios::in | std::ios::binary);
    if (!input)
    {
        std::cerr << "Error: cannot open input file: " << filename << std::endl;
        return 1;
    }

    std::ostringstream buffer;
    buffer << input.rdbuf();
    if (input.bad())
    {
        std::cerr << "Error: failed to read input file: " << filename
                  << std::endl;
        return 1;
    }
    input.close();

    const std::string content = replaceOccurrences(
        buffer.str(), argv[2], argv[3]);
    const std::string outputName = filename + ".replace";
    std::ofstream output(outputName.c_str(),
                         std::ios::out | std::ios::binary | std::ios::trunc);
    if (!output)
    {
        std::cerr << "Error: cannot open output file: " << outputName
                  << std::endl;
        return 1;
    }

    output.write(content.c_str(), static_cast<std::streamsize>(content.size()));
    output.close();
    if (!output)
    {
        std::cerr << "Error: failed to write output file: " << outputName
                  << std::endl;
        return 1;
    }
    return 0;
}