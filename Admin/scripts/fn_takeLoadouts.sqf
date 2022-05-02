_selectedIndex = lbCurSel 2000;

if(_selectedIndex == 0) exitWith 
{
	hint "You have been given the Arena B uniform";
	[] call WS_fnc_arenab;
	closeDialog 0;
};
if(_selectedIndex == 1) exitWith 
{
	hint "Works 2";
	closeDialog 0;
};
hint "You selected nothing you idiot!";