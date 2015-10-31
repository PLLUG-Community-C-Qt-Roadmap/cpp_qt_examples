#include <iostream>

using namespace std;

const float M_PI = 3.14;

class Matrix
{
public:
    Matrix()
    {
        for(int i = 0; i < 3; ++i)
            for(int j = 0; j < 3; ++j)
                _data[i][j] = 0.0f;

        _data[0][0] = _data[1][1] = _data[2][2] = 1.0f;
    }

    static Matrix&& BuildTranslation(float a, float b)
    {
        Matrix result;
        result._data[0][2] = a;
        result._data[1][2] = b;

        return std::move(result);
    }

    static Matrix&& BuildRotation(float angle)
    {
        angle = angle / 180.0f * M_PI;
        Matrix result;
        result._data[0][0] = result._data[1][1] = cos(angle);
        result._data[0][1] = -sin(angle);
        result._data[1][0] = sin(angle);

        return std::move(result);
    }

    friend Matrix&& operator*(Matrix &&left, Matrix &&right)
    {
        return std::move(left);
    }

    void print() const
    {
        for(int i = 0; i < 3; ++i)
        {
            for(int j = 0; j < 3; ++j)
                cout << _data[i][j] << " ";
            cout << endl;
        }
    }

private:
    float _data[3][3];
};



int main()
{
    Matrix mtx = Matrix::BuildRotation(30.0f) * Matrix::BuildTranslation(3.0f, 4.0f) * Matrix();
    mtx.print();
    return 0;
}

