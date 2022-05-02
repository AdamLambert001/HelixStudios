createDialog "WS_LoadoutMenu";

_ctrl = (findDisplay 9865) displayCtrl 2000;

/*playerListArray = [];

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
} forEach allUnits;*/

_ctrl lbAdd "Item 1";
_ctrl lbAdd "Item 2";
_ctrl lbAdd "Item 3";


