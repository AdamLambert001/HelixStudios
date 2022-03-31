class CfgPatches
{
	class HS_EPC_Truck_03
	{
		addonRootClass="A3_Soft_F_EPC";
		requiredAddons[]=
		{
			"A3_Soft_F_EPC"
		};
		requiredVersion=0.1;
		units[]=
		{
			"O_Truck_03_ammo_F",
			"O_Truck_03_covered_F",
			"O_Truck_03_device_F",
			"O_Truck_03_fuel_F",
			"O_Truck_03_medical_F",
			"O_Truck_03_repair_F",
			"O_Truck_03_transport_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class O_Truck_03_transport_F;
    class O_Truck_03_repair_F;
    class O_Truck_03_ammo_F;
    class O_Truck_03_fuel_F;
    class O_Truck_03_medical_F;
    class O_Truck_03_device_F;
    class HS_GAR_Truck_03_transport_F: O_Truck_03_transport_F
    {
		scope=2;
		faction="OPF_F";
		crew="O_Soldier_F";
		displayName="GAR Temptest Transport Test";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\HS_Opfor_Veh\HS_Tempest\data\HS_GAR_Truck_03_ext01_CO.paa",
			"\HS_Opfor_Veh\HS_Tempest\data\HS_GAR_Truck_03_ext02_CO.paa",
			"\HS_Opfor_Veh\HS_Tempest\data\HS_GAR_Truck_03_cargo_CO.paa"
		};
		class TextureSources
		{
			class Hex
			{
				displayName="$STR_A3_TEXTURESOURCES_OPFOR0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\HS_Opfor_Veh\HS_Tempest\data\HS_GAR_Truck_03_ext01_CO.paa",
			        "\HS_Opfor_Veh\HS_Tempest\data\HS_GAR_Truck_03_ext02_CO.paa",
			        "\HS_Opfor_Veh\HS_Tempest\data\HS_GAR_Truck_03_cargo_CO.paa"
				};
				factions[]=
				{
					"OPF_F"
				};
			};
		};
		textureList[]=
		{
			"Hex",
			1
		};
    }
}