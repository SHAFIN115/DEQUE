#include<iostream>
#include<deque>
using namespace std;
int main()
{

    deque<int>a(10);
    int q,w;
    A:cout<<endl<<"1. PUSH BACK "<<endl<<"2. PUSH FRONT "<<endl<<"3. SIZE "<<endl<<"4. FRONT  "<<endl<<"5. BACK "<<endl<<"6. pop front "<<endl<<"7. pop back "<<endl<<"8. COUT THE DEQUE "<<endl<<"9. EXIT "<<endl;
    cin>>q;

    switch(q)
   {
       case 1:
          cout<<"THE NUMBER YOU WANT TO PUSH BACK: "<<endl;
          cin>>w;
          a.push_back(w);
          goto A;
       case 2:
          cout<<"THE NUMBER YOU WANT TO PUSH FRONT : "<<endl;
          cin>>w;
          a.push_front(w);
          goto A;
       case 3:
          cout<<"THE NUMBER YOU WANT TO KNOW SIZE : "<<a.size()<<endl;
          goto A;
       case 4:
          cout<<"THE NUMBER YOU WANT TO KNOW THE FRONT : "<<a.front()<<endl;
          goto A;
       case 5:
          cout<<"THE NUMBER YOU WANT TO KNOW THE BACK : "<<a.back()<<endl;
          goto A;
       case 6:
          cout<<"IT IS POPED FRONT "<<endl;
          a.pop_front();
          goto A;
       case 7:
          cout<<"IT IS POPED BACK "<<endl;
          a.pop_back();
          goto A;
       case 8:
          for(int i=0;i<a.size();i++)
            cout<<" | "<<a[i];
          goto A;
       case 9:
          break;




   }

}
