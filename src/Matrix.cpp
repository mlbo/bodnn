#include "../include/Matrix.hpp"

Matrix::Matrix(int numRows, int numCols, bool isRandom)
{
    this->numRows = numRows;
    this->numCols = numCols;

    for (int i = 0; i < numRows; i++){
    
        vector<double> colValues;
        for (int j = 0; j < numCols; j++)
        {
            double r = isRandom == true ? this->generateRandomNumber() : 0.00;
            colValues.push_back(r);
        }
        this->values.push_back(colValues);
    }
}

//生成的随机值
double Matrix::generateRandomNumber()
{
    std::random_device rd;  //Will be used to obtain a seed for the random number engine
    std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
    std::uniform_int_distribution<> dis(-.0001, .0001);

    return dis(gen);
}

//输出矩阵
void Matrix::printToConsole()
{
    for (int i = 0; i < this->numRows; i++)
    {
        for (int j = 0; j < this->numCols; j++)
        {
            std::cout << this->values.at(i).at(j) << "\t\t";
        }
        std::cout << std::endl;
    }
}