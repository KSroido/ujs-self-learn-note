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
    

    counter = n - m + 1;  //������
    bool judge(int a);
    while(counter)
    {
        number = m;     //ÿ��ѭ������ʱ,number�ᱻ��Ⱦ,���ÿ��ѭ����ʼʱ��Ӧ�����ʽ��
        if (judge(number))
        {


            while (number)
            {
            sum = sum * 10;              //��ȡ������
            temp = number % 10;
            sum = sum + temp;
            number = number / 10;
            }

            if (judge(sum))
            {
                cout << m<<" ";
                if (a == 10)
                {
                    cout << endl;    //ɵ����Ŀ��ʽҪ��,ÿʮ������,
                    a = 1;            //���м���������
                }
                else
                {

                a++;
                }
                m++;
                counter--;          //�����Ժ����������һ��ѭ��,��������Ӧ���ӻ������Ӧ��
                sum = 0;
            }
            else
            {
                m++;
                counter--;
                sum = 0;       //�����Ժ����������һ��ѭ��,��������Ӧ���ӻ������Ӧ��
            }
    //------------------------------------------
        }
        else
        {
            m++;             //�����Ժ����������һ��ѭ��,��������Ӧ���ӻ������Ӧ��
            counter--;
        }

    }


}

bool judge(int a)
{
    int temp = a-1;
    while(temp-1)          //�����ɱ�1����,���ѭ��ʱҪ�ų�1
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
