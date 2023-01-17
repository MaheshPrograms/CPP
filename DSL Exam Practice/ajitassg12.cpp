#include <iostream>
using namespace std;
template <class t>
class job
{
    t id_name;
    int pri;

public:
    bool operator>=(const job<t> &obj1)
    {
        if (pri >= obj1.getpri())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int getpri()
    {
        return pri;
    }
    t getname()
    {
        return id_name;
    }
    void setdata()
    {
        cout << "Enter Employee ID/Name ";
        cin >> id_name;
        cout << "Enter Employee Priority ";
        cin >> pri;
    }
    void Display()
    {
        cout << id_name << "\t\t" << pri << endl;
    }
};


class PriQueue
{
    int fr, re;
    job<string> Q[100];
    int size = 100;

public:
    PriQueue()
    {
        fr = re = -1;
    }
    bool isEmpty()
    {
        if (fr == -1 || fr == re + 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isFull()
    {
        if (re == size - 1)
        {
            return true;
        }
        else
            return false;
    }

    void enqueue(job<string> ele)
    {
        if (isFull())
        {
            cout << "Queue is Full!!" << endl;
        }
        else if (fr == -1)
        {
            fr = 0;
            re = 0;
            Q[re] = ele;
        }
        else
        {
            re++;
            int j = re - 1;
            while (((ele.getpri()) >= (Q[j].getpri())) && (j >= fr)) // j>=0 replaced with j>=fr
            {
                Q[j + 1] = Q[j];
                j = j - 1;
            }
            Q[j + 1] = ele;

            // extra condition is added
            if ((j+1) < fr)
            {
                fr = j+1;
            }
        }
    }

    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty!!" << endl;
        }
        else
        {
            cout << "Employee" << Q[fr].getname() << "is Hired!" << endl;
            fr = fr + 1;
            cout<<fr<<endl;
        }
    }

    void DisplayQueue()
    {

        cout << "\nId/Name\t\t Job Priority" << endl;

        for (int i = fr; i <= re; i++)
        {
            cout<<i<<"  ";
            Q[i].Display();
        }
    }

};

int main()
{
    cout << "\n******** MENU ********" << endl;
    cout << "1.Add Job" << endl;
    cout << "2.Delete{Accept} Job." << endl;
    cout << "3.Display Job list" << endl;
    cout << "0.Exit the Program" << endl;
    cout << "****************" << endl;
    PriQueue p1;

    while (true)
    {
        int choice;
        cout << "Enter choice.";
        cin >> choice;
        if (choice == 1)
        {
            int n;
            cout << "Enter the number of Job to enter.";
            cin >> n;
            while (n--)
            {
                job<string> j1;
                j1.setdata();
                p1.enqueue(j1);
            }
        }

        else if (choice == 2)
        {
            p1.dequeue();
        }
        else if (choice == 3)
        {
            p1.DisplayQueue();
        }
        else if (choice == 0)
        {
            cout << "exit" << endl;
            break;
        }
        else
        {
            cout << "Wrong choice!!!!" << endl;
        }
    }
    return 0;
}
