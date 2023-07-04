#include<iostream>
using namespace std;
class cricketer
{
	public:
		void batsman(int players, int total_run, float average_run)
		{
			cout<<"The numbers of players is: ";
			cin>>players;
			cout<<"Total players of match is: "<<players<<endl;
			
			cout<<"Total run is: ";
			cin>>total_run;
			cout<<"Total run of batsman is: "<<total_run<<endl;
			
			average_run=total_run/players;
			cout<<"Average runs of batsman is: "<<average_run<<endl;
		}
};
class datainput: public cricketer
{
	public:
		void inputdata()
		{
			cout<<"Performance is excellent"<<endl;
		}
};
main()
{
	datainput obj;
	obj.batsman(4,6,7);
	obj.inputdata();
}
