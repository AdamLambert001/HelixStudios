#include "CustomControlClasses.h"
class WS_AdminMenu
{
	idd = 9875;
	
	class ControlsBackground
	{
		class Bkgrdgrey
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.3671875;
			y = safeZoneY + safeZoneH * 0.32291667;
			w = safeZoneW * 0.265625;
			h = safeZoneH * 0.35416667;
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
			text = "180th AC Admin Menu";
			colorBackground[] = {0.302,0.102,0.302,0.8};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		
	};
	class Controls
	{
		class SpawnListBox
		{
			type = 5;
			idc = 2000;
			x = 0.21196685;
			y = 0.3351266;
			w = 0.33909955;
			h = 0.43069621;
			style = 16;
			colorBackground[] = {0.102,0.102,0.102,0.8588};
			colorDisabled[] = {0,0,0,1};
			colorSelect[] = {0.302,0.102,0.302,1};
			colorText[] = {0.502,0.302,0.502,1};
			font = "PuristaMedium";
			maxHistoryDelay = 0;
			rowHeight = 0;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1.0};
			class ListScrollBar
			{
				color[] = {1,1,1,1};
				thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
				arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
				arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
				border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
				
			};
			
		};
		class SpawnButton
		{
			type = 1;
			idc = 2500;
			x = 0.5750001;
			y = 0.3500001;
			w = 0.20000004;
			h = 0.07500003;
			style = 0+2;
			text = "Spawn";
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

		class Teleport
		{
			type = 1;
			idc = 2501;
			x = 0.5750001;
			y = 0.4500001;
			w = 0.20000004;
			h = 0.07500003;
			style = 0+2;
			text = "Kill";
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
			onButtonClick = "execVM 'fn_killUnit.sqf'";
			
		};
		
	};
	
};
