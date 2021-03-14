#include <algorithm>
#include <iostream>
#include <string>

std::string Conversion(std::string& str);

int main()
{
    setlocale(LC_ALL, "rus");

    std::string stringConversion;

    std::cout << "Введите строку: ";
    std::getline(std::cin, stringConversion);

    std::transform(stringConversion.begin(), stringConversion.end(), stringConversion.begin(), tolower);

    std::cout << "Сконвертированная строка: " <<Conversion(stringConversion) << std::endl;

    system("pause");
    return 0;
}

std::string Conversion(std::string& str)
{
    std::string convert;
    int length = str.length();
    for (int i = 0; i < length; i++)
    {
        for (int k = 0; k < length; k++)
        {
            if (str[i] == str[k] && i != k)
            {
                convert += ")";
                break;
            }

            if (k == (length - 1))
            {
                convert += "(";
            }
        }
    }

    return convert;
}
