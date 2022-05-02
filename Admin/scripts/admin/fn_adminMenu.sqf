if (!(isNull (findDisplay 9875))) exitWith {closeDialog 2;};

createDialog "WS_AdminMenu";

_ctrl = (findDisplay 2000) displayCtrl 9875;

playerListArray = [];

{
	playerListArray pushBack _x;
	_name = name _x;
	_side = side _x;
	
	lbAdd [2000, _name];

	switch (_side) do 
	{
		case WEST: {lbSetColor [2000, _forEachIndex, [0, 0, 1, 0.5]]};
		case EAST: {lbSetColor [2000, _forEachIndex, [0.5, 0, 0, 1]]};
	};
} forEach allUnits;