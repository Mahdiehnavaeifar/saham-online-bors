#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
int car=1 , tala=2, platin=3,input1,input2 ;
cout<<"be sherkat tahlilgaran bors iran khosh amadid"<<endl;
cout << "baraye moshahedeye tahlil har sahm va kharid an adad ra vared konid"<<endl;
cout<<"1.mashin"<<endl<<"2.tala"<<endl<<"3.platin"<<endl;
cin>>input1;
if(input1 ==1)
{
	cout<<"be alat inke 50% kahesh dashteh alan hemayat mishavad va dar bazee 3 mah sood 100% be shoma midahad"<<endl<<"agar mikhahid in saham ra entekhab konid adad1 vared konid va adad 2 ra vared konid dar sorat didan baghiyey sahamha";
	cin>> input2;
	if (input2 ==1)
	{
		cout<<"sahm shoma kharidari shud";
	}
	else if(input2==2)
	{
		cout<<"kharid laghv shod";
	}
}
else if(input1==2)
{
		cout<<"be alat inke 50% afzayesh dashteh alan emkan rizesh sahm vojod darad va dar bazee 3 mah sood nemidahad"<<endl<<"agar mikhahid in saham ra entekhab konid adad1 vared konid va adad 2 ra vared konid dar sorat didan baghiyey sahamha";
	cin>> input2;
	if (input2 ==1)
	{
		cout<<"sahm shoma kharidari shud";
	}
	else if(input2==2)
	{
		cout<<"kharid laghv shod";
	}
}
else if(input1==3)
{
		cout<<"be alat inke sahm taze vared bazar shode sood 100% midahad va pishnahad ma ine ke bekharid "<<endl<<"agar mikhahid in saham ra entekhab konid adad1 vared konid va adad 2 ra vared konid dar sorat didan baghiyey sahamha";
	cin>> input2;
	if (input2 ==1)
	{
		cout<<"sahm shoma kharidari shud";
	}
	else if(input2==2)
	{
		cout<<"kharid laghv shod";
	}	
}

getch();
return 0;

}