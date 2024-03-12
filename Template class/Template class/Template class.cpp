/*
Задача 2. Таблица
Описание
Нужно написать шаблонный класс для двумерного массива (таблицы). Все ячейки таблицы имеют один и тот же тип данных T.

Требования к классу:

Должен быть конструктор, получающий на входе два целых числа — количество строк и столбцов соответственно.
Должны быть константная и неконстантная версии оператора [], возвращающего массив, к которому снова можно применить оператор [].
Нужно, чтобы работали конструкции вида:
* cout << table[i][j]; * table[i][j] = value;.

Должна быть константная функция Size, возвращающая размер таблицы.
Пример правильной работы программы
auto test = table<int>(2, 3);
test[0][0] = 4;
std::cout << test[0][0]; // выводит 4

*/



#include <iostream>
#include <vector>

template <class T >
class table
{
protected:
    std::vector<std::vector<T> > matrix;
    int stb = 0;
    int str = 0;
public:
    table(int stb, int str)
    {
        std::vector<std::vector<T> >  matrix1(stb, std::vector<T>(str));
        
        this->matrix = matrix1;
    }      
    
    T get_element(int stb, int str) 
    {
        return matrix[stb][str];
    }

    T get_const_element(int stb, int str) const
    {
        return matrix[stb][str];
    }
    void set_element(int stb, int str, T element)
    {
        matrix[stb][str] = element; 
    }
    std::vector<T>& operator[](int index)
    {
        return matrix[index];
    }
       
    ~table()
    {
        
    }
};

int main()
{
    table<double> a(5, 5);
    a.set_element(0, 0, 4);
    std::cout << a.get_const_element(0,0)<<std::endl;
    std::cout << a.get_element(0, 0) << std::endl;
    auto test = table<int>(2, 3);
    test[0][0] = 7;  
    std::cout << test[0][0]; 
}

