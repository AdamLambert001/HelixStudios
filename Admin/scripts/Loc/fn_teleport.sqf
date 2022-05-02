//hintSilent "Working........";

_Bpos = getMarkerPos "test";
_Opos = getMarkerPos "test1";


switch (playerSide) do
{
	case west: 
	{
		["Teleporting BLUFOR", "success"] call WS_fnc_notify;
		player setPos [_Bpos select 0, _Bpos select 1, _Bpos select 2]; 
	};
	case east: 
	{
		["Teleporting OPFOR", "success"] call WS_fnc_notify;
		player setPos [_Opos select 0, _Opos select 1, _Opos select 2]; 
	};
};

//player setPos [_pos select 0, _pos select 1, _pos select 2];


//{player setPosASL(getPosASL pegasussy1)}

closeDialog 2000;