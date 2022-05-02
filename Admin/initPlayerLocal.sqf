waitUntil {!(isNil "AdminList")};
_isAdmin = player call WS_fnc_isAdmin;

if (_isAdmin) then 
{
	waitUntil {!(isNull (findDisplay 46))};

	(findDisplay 46) displayAddEventHandler ["KeyDown", {
		switch (_this select 1) do {
			case 63: {
				[player] spawn WS_fnc_adminMenu;
			};
		};
		false
	}];
};