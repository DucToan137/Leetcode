#include <iostream>
#include <vector>

using namespace std;

class SubrectangleQueries
{
private:
    vector<vector<int>> _rectangle;

public:
    SubrectangleQueries(vector<vector<int>> &rectangle)
    {
        _rectangle = rectangle;
    }

    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue)
    {
        for (int i = row1; i <= row2; i++)
        {
            for (int j = col1; j <= col2; j++)
            {
                _rectangle[i][j] = newValue;
            }
        }
    }

    int getValue(int row, int col)
    {
        return _rectangle[row][col];
    }

    void printRectangle()
    {
        for (int i = 0; i < _rectangle.size(); i++)
        {
            for (int j = 0; j < _rectangle[i].size(); j++)
            {
                cout << _rectangle[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    vector<vector<int>> rectangle = {{1, 2, 1}, {4, 3, 4}, {3, 2, 1}, {1, 1, 1}};
    SubrectangleQueries *obj = new SubrectangleQueries(rectangle);
    obj->printRectangle();

    cout << obj->getValue(0, 2) << endl;
    obj->updateSubrectangle(0, 0, 3, 2, 5);
    obj->printRectangle();

    return 0;
}