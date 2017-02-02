_plane76 = _this select 0;
_player76 = _this select 1;
_allcrew = units group _plane76;
leader _plane76 groupchat (localize "STR_IL76_ID");
sleep 1;
//[_plane76] exec "\il76td\scr\Rampdown.sqs";
[_plane76] exec "\il76td\scr\dveropen.sqs";
sleep 7;
leader _plane76 groupchat (localize "STR_IL76_GG");

{
	if (((_x)!=(_player76)) AND ((typeOf (_x))!="Sukhoi_Pilot")) then
	{
		_x action ["eject", _plane76];
		sleep 1;
	}
}
forEach _allcrew;

sleep 2;
//[_plane76] exec "\il76td\scr\Rampclose.sqs";
[_plane76] exec "\il76td\scr\dverclose.sqs";
if (true) exitWith {};
