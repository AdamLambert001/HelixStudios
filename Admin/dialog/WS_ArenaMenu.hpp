#include "CustomControlClasses.h"
class WS_ArenaSpawn
{
	idd = 15;
	
	class ControlsBackground
	{
		class Bkgrdgrey
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.3671875;
			y = safeZoneY + safeZoneH * 0.32291667;
			w = safeZoneW * 0.265625;
			h = safeZoneH * 0.37847223;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0.6};
			colorText[] = {0.0353,0.5137,0.7804,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			shadow = 1;
			
		};
		class BkgrdTitle
		{
			type = 0;
			idc = -1;
			x = 0.17500001;
			y = 0.17500014;
			w = 0.65000002;
			h = 0.10000003;
			style = 0+2;
			text = "180th AC Arena Menu";
			colorBackground[] = {0.302,0.102,0.302,0.8};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		
	};
	class Controls
	{
		class HubButton
		{
			type = 1;
			idc = 2500;
			x = safeZoneX + safeZoneW * 0.38476563;
			y = safeZoneY + safeZoneH * 0.39409723;
			w = safeZoneW * 0.22851563;
			h = safeZoneH * 0.04166667;
			style = 0+2;
			text = "Player Hub";
			borderSize = 0;
			colorBackground[] = {0.302,0.102,0.302,1};
			colorBackgroundActive[] = {0.4,0.2,0.4,1};
			colorBackgroundDisabled[] = {0.302,0.102,0.302,1};
			colorBorder[] = {0.302,0.102,0.302,1};
			colorDisabled[] = {0.302,0.102,0.302,1};
			colorFocused[] = {0.302,0.102,0.302,1};
			colorShadow[] = {0.302,0.102,0.302,1};
			colorText[] = {0.8,0.8,0.8,1};
			font = "PuristaMedium";
			offsetPressedX = 0;
			offsetPressedY = 0;
			offsetX = 0;
			offsetY = 0;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "call[] targetSQF;";
			
		};
		class Arenav1
		{
			type = 1;
			idc = 2500;
			x = safeZoneX + safeZoneW * 0.38476563;
			y = safeZoneY + safeZoneH * 0.46701389;
			w = safeZoneW * 0.10644532;
			h = safeZoneH * 0.04166667;
			style = 0+2;
			text = "Arena 1";
			borderSize = 0;
			colorBackground[] = {0.302,0.102,0.302,1};
			colorBackgroundActive[] = {0.4,0.2,0.4,1};
			colorBackgroundDisabled[] = {0.302,0.102,0.302,1};
			colorBorder[] = {0.302,0.102,0.302,1};
			colorDisabled[] = {0.302,0.102,0.302,1};
			colorFocused[] = {0.302,0.102,0.302,1};
			colorShadow[] = {0.302,0.102,0.302,1};
			colorText[] = {0.8,0.8,0.8,1};
			font = "PuristaMedium";
			offsetPressedX = 0;
			offsetPressedY = 0;
			offsetX = 0;
			offsetY = 0;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "[] call WS_fnc_teleport";
			
		};
		class Arenav2
		{
			type = 1;
			idc = 2500;
			x = safeZoneX + safeZoneW * 0.50683594;
			y = safeZoneY + safeZoneH * 0.46701389;
			w = safeZoneW * 0.10644532;
			h = safeZoneH * 0.04166667;
			style = 0+2;
			text = "Arena 2";
			borderSize = 0;
			colorBackground[] = {0.302,0.102,0.302,1};
			colorBackgroundActive[] = {0.4,0.2,0.4,1};
			colorBackgroundDisabled[] = {0.302,0.102,0.302,1};
			colorBorder[] = {0.302,0.102,0.302,1};
			colorDisabled[] = {0.302,0.102,0.302,1};
			colorFocused[] = {0.302,0.102,0.302,1};
			colorShadow[] = {0.302,0.102,0.302,1};
			colorText[] = {0.8,0.8,0.8,1};
			font = "PuristaMedium";
			offsetPressedX = 0;
			offsetPressedY = 0;
			offsetX = 0;
			offsetY = 0;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "call[] targetSQF;";
			
		};
	
		class Arenav3
		{
			type = 1;
			idc = 2500;
			x = safeZoneX + safeZoneW * 0.38476563;
			y = safeZoneY + safeZoneH * 0.53993056;
			w = safeZoneW * 0.10644532;
			h = safeZoneH * 0.04166667;
			style = 0+2;
			text = "Arena 3";
			borderSize = 0;
			colorBackground[] = {0.302,0.102,0.302,1};
			colorBackgroundActive[] = {0.4,0.2,0.4,1};
			colorBackgroundDisabled[] = {0.302,0.102,0.302,1};
			colorBorder[] = {0.302,0.102,0.302,1};
			colorDisabled[] = {0.302,0.102,0.302,1};
			colorFocused[] = {0.302,0.102,0.302,1};
			colorShadow[] = {0.302,0.102,0.302,1};
			colorText[] = {0.8,0.8,0.8,1};
			font = "PuristaMedium";
			offsetPressedX = 0;
			offsetPressedY = 0;
			offsetX = 0;
			offsetY = 0;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "call[] targetSQF;";
			
		};
		class Arenav4
		{
			type = 1;
			idc = 2500;
			x = safeZoneX + safeZoneW * 0.50683594;
			y = safeZoneY + safeZoneH * 0.53993056;
			w = safeZoneW * 0.10644532;
			h = safeZoneH * 0.04166667;
			style = 0+2;
			text = "Arena 4";
			borderSize = 0;
			colorBackground[] = {0.302,0.102,0.302,1};
			colorBackgroundActive[] = {0.4,0.2,0.4,1};
			colorBackgroundDisabled[] = {0.302,0.102,0.302,1};
			colorBorder[] = {0.302,0.102,0.302,1};
			colorDisabled[] = {0.302,0.102,0.302,1};
			colorFocused[] = {0.302,0.102,0.302,1};
			colorShadow[] = {0.302,0.102,0.302,1};
			colorText[] = {0.8,0.8,0.8,1};
			font = "PuristaMedium";
			offsetPressedX = 0;
			offsetPressedY = 0;
			offsetX = 0;
			offsetY = 0;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "call[] targetSQF;";
			
		};
		class Loadout
		{
			type = 1;
			idc = 2500;
			x = safeZoneX + safeZoneW * 0.38476563;
			y = safeZoneY + safeZoneH * 0.61284723;
			w = safeZoneW * 0.22851563;
			h = safeZoneH * 0.04166667;
			style = 0+2;
			text = "Loadout";
			borderSize = 0;
			colorBackground[] = {0.302,0.102,0.302,1};
			colorBackgroundActive[] = {0.4,0.2,0.4,1};
			colorBackgroundDisabled[] = {0.302,0.102,0.302,1};
			colorBorder[] = {0.302,0.102,0.302,1};
			colorDisabled[] = {0.302,0.102,0.302,1};
			colorFocused[] = {0.302,0.102,0.302,1};
			colorShadow[] = {0.302,0.102,0.302,1};
			colorText[] = {0.8,0.8,0.8,1};
			font = "PuristaMedium";
			offsetPressedX = 0;
			offsetPressedY = 0;
			offsetX = 0;
			offsetY = 0;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "[] call WS_fnc_loadout";
			
		};
		
	};
	
};
