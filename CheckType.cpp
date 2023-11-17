#include <iostream>
#include <vector>

template <typename Template>
std::string getdatatype(Template data) {
    std::string stringType = typeid(std::string).name();
    std::string intType = typeid(int).name();
    std::string doubleType = typeid(double).name();
    std::string intvectorType = typeid(std::vector<int>).name();
    std::string ReturnType = "invalid";

    if (typeid(data).name() == stringType) ReturnType = "string";
    else if (typeid(data).name() == intType) ReturnType = "int";
    else if (typeid(data).name() == doubleType) ReturnType = "double";
    else if (typeid(data).name() == intvectorType) ReturnType = "intvector";

    return ReturnType;
}

int main() {
    std::vector<int> helo;
    std::cout<<getdatatype(helo) <<'\n';
    return 0;
}