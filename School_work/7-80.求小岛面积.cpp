#include <iostream>
#include <vector>
#include <climits> // 用于INT_MAX和INT_MIN
using namespace std;

int main()
{
    int n;
    // 读取方阵阶数
    cin >> n;
    // 定义二维向量存储方阵数据（n行n列）
    vector<vector<int>> grid(n, vector<int>(n));
    // 读取方阵元素
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> grid[i][j];
        }
    }

    // 预处理：每行的1的最小列索引和最大列索引
    vector<int> row_min_col(n, n);  // 初始化为n（大于最大列索引n-1）
    vector<int> row_max_col(n, -1); // 初始化为-1（小于最小列索引0）
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (grid[i][j] == 1)
            {
                // 更新当前行1的最小列索引
                if (j < row_min_col[i])
                {
                    row_min_col[i] = j;
                }
                // 更新当前行1的最大列索引
                if (j > row_max_col[i])
                {
                    row_max_col[i] = j;
                }
            }
        }
    }

    // 预处理：每列的1的最小行索引和最大行索引
    vector<int> col_min_row(n, n);  // 初始化为n（大于最大行索引n-1）
    vector<int> col_max_row(n, -1); // 初始化为-1（小于最小行索引0）
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (grid[i][j] == 1)
            {
                // 更新当前列1的最小行索引
                if (i < col_min_row[j])
                {
                    col_min_row[j] = i;
                }
                // 更新当前列1的最大行索引
                if (i > col_max_row[j])
                {
                    col_max_row[j] = i;
                }
            }
        }
    }

    // 统计小岛面积（有效0的数量）
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // 跳过1的位置
            if (grid[i][j] != 0)
            {
                continue;
            }
            // 行条件：0的列索引j在该行1的最小列和最大列之间
            bool row_ok = (row_min_col[i] < j) && (j < row_max_col[i]);
            // 列条件：0的行索引i在该列1的最小行和最大行之间
            bool col_ok = (col_min_row[j] < i) && (i < col_max_row[j]);
            if (row_ok && col_ok)
            {
                count++;
            }
        }
    }

    // 输出结果
    cout << count << endl;

    return 0;
}