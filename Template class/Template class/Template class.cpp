#include <iostream>
#include <vector>

template <class T>
class table
{
protected:
    table** matrix = nullptr;
    int stb = 0;
    int str = 0;
public:
    table(int stb, int str)
    {
        this->stb = stb;
        this->str = str;
    }
    table **matrix0(int stb, int str)
    {
        this->stb = stb;
        this->str = str;
        table** matrix1 = new T * [stb];
        for (int i = 0;i < stb; ++i)
        {
            matrix1[i] = new T[str];
        }
        
        for (int i = 0; i < stb; ++i)
        {
            for (int j = 0; j < stb; ++j)
            {
                matrix1[i][j] = NULL;
            }
        }
        this->matrix = matrix1;
            return matrix1;
    }
    
    T get_element(int stb,int str) const
    {
        return matrix[stb][str];
    }
    T set_element(int stb, int str, T element)
    {
        
        matrix[stb][str] = element; //требуется перегрузка?
        
    }
    ~table()
    {
        for (int i = 0; i < stb; ++i)
        {
            delete matrix[i];
        }
        delete[] matrix;
    }

};
    
          


int main()
{
    table<double> a(5,5);
    a.set_element(0, 0, 4);
    std::cout << a.get_element(0,0);
}

