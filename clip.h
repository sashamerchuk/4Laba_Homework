#ifndef CLIP_H
#define CLIP_H
#include <string>
#include <iostream>

using namespace std;

class Clip
{
private:
	string nameOfArtist;
	string nameOfSong;
	int timeSec;
	int watchesOnYoutube;
protected:
	int money;
	string data;
public:
	string tapeOnYoutube;
	int users;
	Clip(string nameOfArtist,string nameOfSong,int timeSec,int watchesOnYoutube, int money,string data);
	Clip();
	~Clip();
	void setnameOfArtist(string nameOfArtist);
	void setnameOfSong(string nameOfSong);
	void settimeSec(int timeSec);
	void setwatchesOnYoutube(int watchesOnYoutube);
	string getnameOfArtist() const;
	string getnameOfSong() const;
	int gettimeSec() const;
	int getwatchesOnYoutube() const;
	int getmoney() const;
	void setmoney(int money);
	void setdata(string data);
	//void settapeOnYoutube(string tapeOnYoutube);
	string getdata() const;
	//string gettapeOnYoutube() const;
};
#endif
