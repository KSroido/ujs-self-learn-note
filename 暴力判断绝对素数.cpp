#include <iostream>
using namespace std;

int main()
{
    int number,counter;
    int sum = 0;
    int temp;
    int m, n;
    int a = 1;
    cin >> m >> n;
    

    counter = n - m + 1;  //计数器
    bool judge(int a);
    while(counter)
    {
        number = m;     //每次循环结束时,number会被污染,因此每次循环开始时都应将其格式化
        if (judge(number))
        {


            while (number)
            {
            sum = sum * 10;              //提取逆序数
            temp = number % 10;
            sum = sum + temp;
            number = number / 10;
            }

            if (judge(sum))
            {
                cout << m<<" ";
                if (a == 10)
                {
                    cout << endl;    //傻逼题目格式要求,每十个换行,
                    a = 1;            //换行计数器重置
                }
                else
                {

                a++;
                }
                m++;
                counter--;          //无论以何种情况结束一次循环,计数器都应增加或减少相应量
                sum = 0;
            }
            else
            {
                m++;
                counter--;
                sum = 0;       //无论以何种情况结束一次循环,计数器都应增加或减少相应量
            }
    //------------------------------------------
        }
        else
        {
            m++;             //无论以何种情况结束一次循环,计数器都应增加或减少相应量
            counter--;
        }

    }


}

bool judge(int a)
{
    int temp = a-1;
    while(temp-1)          //素数可被1整除,因此循环时要排除1
    {
        if (a % temp == 0)
        {
            return false;
            break;
        }
        else
        {
            temp--;
            continue;
        }
       

    }
    return true;



}
