#include"clip.h"

int main()
{
	Clip firstClip;
	Clip secondClip("L-g","360", 213, 1250,71000,"September2017");
	Clip thirdClip;
	thirdClip.setnameOfArtist("Rihanna");
	thirdClip.setnameOfSong("Dimens");
	thirdClip.setmoney(11203092);
	thirdClip.setwatchesOnYoutube(21808031);
	thirdClip.settimeSec(153);
	thirdClip.setdata("December2014");
	/*thirdClip.settimeSec
	thirdClip;
	thirdClip;*/
	cout << "Name of artist :   " << firstClip.getnameOfArtist() << endl;
	cout <<"Name of video : "<<firstClip.getnameOfSong() << endl;
	cout << "Time video: " << firstClip.gettimeSec() << endl;
	cout << "Watchers this video: " << firstClip.getwatchesOnYoutube ()<< endl;
	cout << "Money that got with this video:" << firstClip.getmoney() << endl;
	cout << "Data made this video:\n" << firstClip.getdata() << endl;
	cout << "Name of the second artist: " << secondClip.getnameOfArtist() << endl;
	cout << "Name of video: " << secondClip.getnameOfSong() << endl;
	cout << "Time video:" << secondClip.gettimeSec() << endl;
	cout << "Watchers this video: " << secondClip.getwatchesOnYoutube() << endl;
	cout << "Money that got with this video:" << secondClip.getmoney() << endl;
	cout << "Data made this video:\n" << secondClip.getdata() << endl;
	cout << "Name of the third artist:" << thirdClip.getnameOfArtist() << endl;
	cout << "Name of video:" << thirdClip.getnameOfSong() << endl;
	cout << "Time video:" << thirdClip.gettimeSec() << endl;
	cout << "Watchers this video:" << thirdClip.getwatchesOnYoutube() << endl;
	cout << "Money that got with this video:" << thirdClip.getmoney() << endl;
	cout << "Data made this video:" << thirdClip.getdata() << endl;
	cout << "\n" << endl;
	system("pause");
	return 0;
}