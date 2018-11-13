#include "clip.h"


Clip::Clip(string nameOfArtist, string nameOfSong, int timeSec, int watchesOnYoutube, int money, string data)
{
	this->nameOfArtist = nameOfArtist;
	this->nameOfSong = nameOfSong;
	this->timeSec = timeSec;
	this->watchesOnYoutube = watchesOnYoutube;
	this->money = money;
	this->data = data;
}

Clip ::Clip()
{
	nameOfArtist = "Eminem";
	nameOfSong = "Lucky you";
	timeSec = 189;
	watchesOnYoutube = 33465483;
	money = 33740;
	data = "November 2016";
	tapeOnYoutube = "anyVideos";
}

Clip::~Clip()
{
	cout << endl << "destructor" << endl;
}

void Clip :: setnameOfArtist(string nameOfArtist) {
	this->nameOfArtist = nameOfArtist;
}
void Clip::setnameOfSong(string nameOfSong) {
	this->nameOfSong = nameOfSong;
}
void Clip::settimeSec(int timeSec) {
	this->timeSec = timeSec;
}
void Clip::setwatchesOnYoutube(int watchesOnYoutube)
{
	this->watchesOnYoutube = watchesOnYoutube;
}

string Clip::getnameOfArtist() const {
	return this->nameOfArtist;
}
string Clip::getnameOfSong() const {
	return this->nameOfSong;
}
int Clip::gettimeSec() const {
	return this->timeSec;
}
int Clip::getwatchesOnYoutube() const {
	return this->watchesOnYoutube;
}
int Clip::getmoney() const {
	return this->money;
}
void Clip::setmoney(int money) {
	this->money = money;
}
void Clip::setdata(string data) {
	this->data = data;
}
//void Clip::settapeOnYoutube(string tapeOnYoutube) {
//	this->tapeOnYoutube = tapeOnYoutube;
//}

string Clip::getdata() const {
	return this->data;
}

//string Clip::gettapeOnYoutube() const {
//	return this->tapeOnYoutube;
//}
