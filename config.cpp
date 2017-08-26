
#include "CfgPatches.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgVehicleClasses.hpp"
#include "CfgMovesBasic.hpp"
#include "CfgSounds.hpp"
#include "CfgRadio.hpp"

#define TEast 0
#define TWest 1
#define TGuerrila 2
#define TCivilian 3
#define TSideUnknown 4
#define TEnemy 5
#define TFriendly 6
#define TLogic 7

#define true 1
#define false 0

#define private 0
#define protected 1
#define public 2

enum
{
	DESTRUCTENGINE = 2,
	DESTRUCTDEFAULT = 6,
	DESTRUCTWRECK = 7,
	DESTRUCTTREE = 3,
	DESTRUCTTENT = 4,
	STABILIZEDINAXISX = 1,
	STABILIZEDINAXISY = 2,
	STABILIZEDINAXESBOTH = 3,
	DESTRUCTNO = 0,
	STABILIZEDINAXESNONE = 0,
	DESTRUCTMAN = 5,
	DESTRUCTBUILDING = 1,
};

class CfgVehicles
{
  class Air;
	class Plane: Air
	{
		class HitPoints;
		class AnimationSources;
		class NewTurret;
		class ViewPilot;
    };
	class il76td: Plane
	{
        scope=public;
        destrType = "DestructWreck";
        vehicleClass = "IL_76_vehicle";
        model="\il76td\il76td";
        displayName="$STR_il76td_NAME1";
        side=0;
        faction = "IL_76_faction_TKM";
        transportSoldier = 70;
        crew = "O_Pilot_F";
        driverAction="il_76_pilot";
        cargoAction[]={"Truck_Cargo01"};
        cargoIsCoDriver[] = {1,1};
        hasGunner=1;
        driverIsCommander = 1;
        simulation="airplane";
        _generalMacro="Plane";
        gunnerAction = "il_76_commander"
        gunnerOpticsModel = "";
        gunnerOpticsColor[] = {1, 1, 1, 1};
        Icon = "\il76td\icons\icon.paa";
        picture = "\il76td\icons\picture.paa";
        mapSize = 50;
        animated=1;
        accuracy = 0.900000;
        camouflage = 10;
        audible = 30;
        gearRetracting = true;
        memoryPointCM[] = {"flare_L","flare_R"};
        memoryPointCMDir[] = {"flare_L_dir","flare_R_dir"};
        textplural="Airplanes";
        textsingular="Airplane";
        radartype=4;

        getInRadius=4.5;
        memoryPointsGetInCargo     = "flare_L_dir";
        memoryPointsGetInCoDriver  = "pos gunner";
        memoryPointsGetInCommander = "pos gunner";
        memoryPointsGetInDriver    = "pos gunner";
        memoryPointsGetInGunner    = "pos gunner";
        memoryPointsGetInCargo[]=
        {
            "flare_L_dir",
            "flare_R_dir"
        };
        class Library
        {
            libTextDesc = "$STR_IL_DESCR";
        };
        class TransportBackpacks
        {
            class _xx_B_Parachute
            {
                backpack="B_Parachute";
                count=60;
            };
        };
        nameSound="plane";
        soundEngine[]={"\il76td\sounds\XBAN13a.WAV", 4, 1.2};
        soundEnviron[]={"sounds_f\air\Plane_Fighter_03\noise", db-60, 1.0};			// Cessna
        soundLandCrash[]={"\il76td\sounds\tchl.wss", 8, 1.2, 1200};
        soundServo[]={"il76td\sounds\beargrup.wav",db-10,1};			// Cessna
        soundEngineOnInt[] = {"il76td\sounds\engine_on.wav", 0.562341, 1.000000};
        soundEngineOnExt[] = {"il76td\sounds\engine_on.wav", 1.0, 1.000000, 900};
        soundEngineOffInt[] = {"il76td\sounds\xnk8_shut.wav", 0.562341, 1.000000};
        soundEngineOffExt[] = {"il76td\sounds\xnk8_shut.wav", 1.0, 1.000000, 900};
        soundFlapsUp[]=
        {
          "A3\Sounds_F_EPC\CAS_02\Flaps_Up",
          0.63095701,
          1,
          100
        };
        soundFlapsDown[]=
        {
          "A3\Sounds_F_EPC\CAS_02\Flaps_Down",
          0.63095701,
          1,
          100
        };
        soundGearUp[]=
        {
          "A3\Sounds_F_EPC\CAS_02\gear_up",
          0.79432797,
          1,
          150
        };
        soundGearDown[]=
        {
          "A3\Sounds_F_EPC\CAS_02\gear_down",
          0.79432797,
          1,
          150
        };
		class Sounds
		{
			class EngineLowOut
			{
				sound[]=
				{
					"\il76td\sounds\engine_in",
					2.5118899,
					1,
					1600
				};
				frequency = "1.0 min (rpm + 0.5)";
				volume = "camPos*2*(rpm factor[0.95, 0])*(rpm factor[0, 0.95])";
			};
			class EngineLowIn
			{
				sound[]=
				{
					"\il76td\sounds\engine_in",
					1.2589254,
					1
				};
				frequency = "1.0 min (rpm + 0.5)";
				volume = "(1-camPos)*((rpm factor[0.7, 0.1])*(rpm factor[0.1, 0.7]))";
			};
			class EngineHighOut
			{
				sound[]=
				{
					"\il76td\sounds\engine_in",
					2.5118899,
					1.3,
					1800
				};
				frequency = "1";
				volume = "camPos*4*(rpm factor[0.5, 1.1])*(rpm factor[1.1, 0.5])";
			};
			class EngineHighIn
			{
				sound[]=
				{
					"\il76td\sounds\engine_in",
					2.2589254,
					1
				};
				frequency = "1";
				volume = "(1-camPos)*(rpm factor[0.85, 1.0])";
			};
			class ForsageOut
			{
				sound[]=
				{
					"\il76td\sounds\ext-jetair-forsage1",
					//"\il76td\sounds\engine_in",
					2.0,
					1.1,
					2000
				};
				frequency="1";
				volume="engineOn*camPos*(thrust factor[0.5, 1.0])";
				cone[]={3.1400001,3.9200001,2,0.30000001};
			};
			class ForsageIn
			{
				sound[]=
				{
					"\il76td\sounds\engine_in",
					1.4125376,
					1.2
				};
				frequency="0.5 + engineOn*(speed factor[1,150]))";
				volume="(1-camPos)*(engineOn*(thrust factor[0.75, 1.0]))";
			};
			class WindNoiseOut
			{
				sound[]=
				{
					"\il76td\sounds\ext-jetair-wind",
					5,
					1,
					500
				};
				frequency="(0.1+(1.2*(speed factor[1, 150])))";
				volume="camPos*(speed factor[1, 150])";
			};
			class WindNoiseIn
			{
				sound[]=
				{
					"\il76td\sounds\int-jetair-wind1",
					0.44668359,
					1.1
				};
				frequency="(0.1+(1.2*(speed factor[1, 150])))";
				volume="(1-camPos)*(speed factor[1, 150])";
			};
			class DistantPlaneOut
			{
				sound[]=
				{
					"\il76td\sounds\distantplane",
					4,
					0.5,
					5000
				};
				frequency="1";
				volume="engineOn*camPos*(speed factor[1, 100])";
				cone[]={3.1400001,3.9200001,2,0.2};
			};
		};
        airBrake = true;
        cabinOpening=true;
        flaps = 1;
        transportVehiclesCount=1;
        transportVehiclesMass=50000;
		transportFuel=10000;
		transportMaxBackpacks=100;
        castCargoShadow=0;
        castDriverShadow=0;
        flapsFrictionCoef = 0.300000;
		wheelSteeringSensitivity = 8.5;
        noseDownCoef = 1.1;	// how much goes nose down during turns
		maneuvrability=40.0;
		landingAoa = "rad 2"//7*3.1415/180//"rad 55";
		maxSpeed= 950;
		landingSpeed = 280;
		lightongear=1;
		armor= 65;
		ejectSpeed[]={0,0,0};
		cost=20000000;
       //envelope[] = {0.000000, 0.100000, 0.800000, 2.000000, 2.200000, 2.800000, 3.550000, 3.550000, 3.550000, 3.550000, 2.600000, 0.800000, 1.000000};
        //envelope[] = {0.0, 0.4, 1.9, 4, 6.8, 8.3, 8.5, 8, 7.2, 5.8, 4, 1.8, 0.5, 0};
		envelope[] = {0.000000, 0.100000, 0.800000, 2.000000, 2.200000, 2.800000, 3.550000, 3.550000, 3.550000, 3.550000, 2.600000, 0.800000, 1.000000};

		type=VAir;
		threat[]={0.1, 1, 0.7};

		aileronSensitivity = 0.4;
		elevatorSensitivity = 2.2;
		steerAheadSimul=1.0;
		steerAheadPlan=2.0;
		hiddenSelections[]={"light","num1", "num2"};
		extCameraPosition[] = {0, 10, -55};
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment1"};
		class ViewPilot : ViewPilot
		{
			initFov = 0.8; minFov = 0.3; maxFov = 1.2;
			initAngleX = 0; minAngleX = -40; maxAngleX = +100;
			initAngleY = 0; minAngleY = -180; maxAngleY = 180;
		};

		class Turrets {
			class MainTurret : NewTurret {
				commanding = -1;
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				memoryPointGun = "machinegun";
				memoryPointGunnerOptics = "gunnerview";
				weapons[]={};
				magazines[]={};
				castGunnerShadow = true;
				viewGunnerShadow = true;
				opticsZoomMin = 0.01;
				opticsZoomMax = 0.9;
				gunnerAction = "il_76_pilot";
				gunnerInAction = "il_76_pilot";
			};

			class Ing1 : MainTurret
			{
				body = "";
				gun = "";
				commanding = -1;
				proxyIndex = 2;
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				weapons[]={};
				magazines[]={};
				castGunnerShadow = true;
				viewGunnerShadow = true;
				gunnerAction = "il_76_pilot";
				gunnerInAction = "il_76_pilot";
				primaryGunner = 0;
			};
			class Ing2 : MainTurret
			{
				body = "";
				gun = "";
				commanding = -1;
				proxyIndex = 3;
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				weapons[]={};
				magazines[]={};
				castGunnerShadow = true;
				viewGunnerShadow = true;
				gunnerAction = "il_76_pilot";
				gunnerInAction = "il_76_pilot";
				primaryGunner = 0;
			};
			class Ing3 : MainTurret
			{
				body = "";
				gun = "";
				commanding = -1;
				proxyIndex = 4;
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				weapons[]={};
				magazines[]={};
				castGunnerShadow = true;
				viewGunnerShadow = true;
				gunnerAction = "il_76_pilot";
				gunnerInAction = "il_76_pilot";
				primaryGunner = 0;
			};
		};
        class EventHandlers
        {
            Init   = "_this execVM ""\il76td\scr\tires.sqf"", _this execVM ""\il76td\scr\common_init.sqf""";
                    // _this execVM ""\il76td\scr\damage.sqf"",
            engine = "_this exec ""\il76td\scr\dverclose.sqs""";
            fired  = "_this call BIS_Effects_EH_Fired;";
            killed = "_this call BIS_Effects_EH_Killed;";
        };

		class DestructionEffects {};

		class HitPoints : HitPoints {

		  class HitVrtule {armor=0.5;material=52;name="vrtule";visual="vrtule";passThrough=1;};

			class HitVrtule0 {armor=0.5;material=52;name="vrtule 0";visual="vrtule 0";passThrough=1;};
			class HitVrtule1 {armor=0.5;material=52;name="vrtule 1";visual="vrtule 1";passThrough=1;};
			class HitVrtule2 {armor=0.5;material=52;name="vrtule 2";visual="vrtule 2";passThrough=1;};
			class HitVrtule3 {armor=0.5;material=52;name="vrtule 3";visual="vrtule 3";passThrough=1;};

			class HitGlass1  {
				armor = 0.1;
				material = -1;
				name = "glass1";
				visual = "glass1";
				passThrough = false;

			};

			class HitGlass2  {
				armor = 0.1;
				material = -1;
				name = "glass2";
				visual = "glass2";
				passThrough = false;

			};

			class HitGlass3 {
				armor = 0.1;
				material = -1;
				name = "glass3";
				visual = "glass3";
				passThrough = false;

			};

			class HitGlass4 {
				armor = 0.1;
				material = -1;
				name = "glass4";
				visual = "glass4";
				passThrough = false;

			};
                class HitGlass5 {
				armor = 0.1;
				material = -1;
				name = "glass5";
				visual = "glass5";
				passThrough = false;

			};
                /*class HitGlass6 {
				armor = 0.1;
				material = -1;
				name = "glass6";
				visual = "glass6";
				passThrough = false;

			};*/
		};


		class Reflectors {
			class Left
			{
				color[]={7000,7500,10000,1};
				ambient[]={100,100,100,0};
				position="L svetlo";
				direction="konec L svetla";
				hitpoint="L svetlo";
				selection="L svetlo";
				size=1;
				innerAngle=20;
				outerAngle=60;
				coneFadeCoef=10;
				intensity=50;
				useFlare=1;
				dayLight=0;
				FlareSize=4;
				brightness=1;
				class Attenuation
				{
					constant=0;
					hardlimitend=250;
					hardlimitstart=200;
					linear=1;
					quadratic=0;
					start=0;
				};
			};
			class Right
			{
				color[]={7000,7500,10000,1};
				ambient[]={100,100,100,0};
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 1;
				innerAngle=20;
				outerAngle=60;
				coneFadeCoef=10;
				intensity=25;
				useFlare=1;
				dayLight=0;
				FlareSize=4;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=4;
				};
			};
		};
		class MarkerLights
		{
			class Green_Still_Rear
			{
				name="bily pozicni blik";
				color[]={0.0, 0.0, 1.0, 1.0};
				ambient[]={0.0, 0.0, 1.0, 1.0};
				brightness=0.15;
				blinking=true;
			};
			class Green_Still_front
			{
				name="bily pozicni";
				color[]={0.0, 0.0, 1.0, 1.0};
				ambient[]={0.0, 0.0, 1.0, 1.0};
				brightness=0.15;
				blinking=false;
			};
			class Red_Still_Light
			{
				name="cerveny pozicni";
				color[]={1000,0,0,1};
				ambient[]={1,0,0,1};
				brightness=0.15;
				blinking=0;
			};
			class Red_Still_Right
			{
				name="zeleny pozicni";
				color[]={1000,0,0,1};
				ambient[]={1,0,0,1};
				brightness=0.15;
				blinking=0;
			};
		};
		class Exhausts
		{
		   class Exhaust1
		   {
			   position = "exhaust1";
			   direction = "exhaust1_dir";
			   effect = "ExhaustsEffectPlane";
		   };

		   class Exhaust2
		   {
			   position = "exhaust2";
			   direction = "exhaust2_dir";
			   effect = "ExhaustsEffectPlane";
		   };

		   class Exhaust3
		   {
			   position = "exhaust3";
			   direction = "exhaust3_dir";
			   effect = "ExhaustsEffectPlane";
		   };

		   class Exhaust4
		   {
			   position = "exhaust4";
			   direction = "exhaust4_dir";
			   effect = "ExhaustsEffectPlane";
		   };
		};

        class AnimationSources : AnimationSources {

			class HitGlass1
			{
				source = "Hit";
				hitpoint = "HitGlass1";
				raw = 1;
			};
			class HitGlass2 : HitGlass1
			{
				hitpoint = "HitGlass2";
			};
			class HitGlass3 : HitGlass1
			{
				hitpoint = "HitGlass3";
			};
			class HitGlass4 : HitGlass1
			{
				hitpoint = "HitGlass4";
			};
            class HitGlass5 : HitGlass1
            {
				hitpoint = "HitGlass5";
			};
			class Doors
			{
				source = "user";
				animPeriod = 4;
				initPhase = 0;
			};
			class Doors1
			{
				source = "user";
				animPeriod = 4;
				initPhase = 0;
			};
			class Doors2
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class Doors3
			{
				source = "user";
				animPeriod = 4;
				initPhase = 0;
			};
			class Doors4
			{
				source = "user";
				animPeriod = 4;
				initPhase = 0;
			};
			class dver1
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class dver2
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class ladder
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
		};

		// Radar stuff
		irTarget=true;
		irScanRange = 2000;
		irScanGround = true;
		// Weapon and ammo
		weapons[]={"CMFlareLauncher"}; // none
		magazines[]={"300Rnd_CMFlare_Chaff_Magazine"}; // none
		class UserActions
		{
			class opendoor
			{
				displayName="$STR_il76td_DR";
				position="dor";
				radius = 19.6;
				showWindow = 0;
				onlyForplayer = 0;
				condition = "this animationPhase ""RC_door"" < 0.5 AND Alive(this)";
				statement = "[this] exec ""\il76td\scr\Rampdown.sqs""";

			};

			class closedoor
			{
				displayName="$STR_il76td_UR";
				position="dor";
				radius = 19.6;
				showWindow = 0;
				onlyForplayer = 0;
				condition = "this animationPhase ""RC_door"" > 0.5 AND Alive(this)";
				statement = "[this] exec ""\il76td\scr\Rampclose.sqs""";

        	};

            class opendver
			{
				displayName="$STR_il76td_OD";
				position="pos driver";
				radius = 10.6;
				showWindow = 0;
				onlyForplayer = 0;
				condition = "this animationPhase ""RC_dver1"" < 0.5 AND Alive(this)";
				statement = "[this] exec ""\il76td\scr\dveropen.sqs""";
			};
			class closedver
			{
				displayName="$STR_il76td_CD";
				position="pos driver";
				radius = 10.6;
				showWindow = 0;
				onlyForplayer = 0;
				condition = "this animationPhase ""RC_dver1"" > 0.5 AND Alive(this)";
				statement = "[this] exec ""\il76td\scr\dverclose.sqs""";
			};

            class openladder
			{
				displayName="$STR_il76td_DL";
				position="pos driver";
				radius = 5.6;
				showWindow = 0;
				onlyForplayer = 0;
				condition = "this animationPhase ""RC_ladder"" < 0.5 AND Alive(this) and this animationPhase ""RC_dver1"" > 0.5";
				statement = "[this] exec ""\il76td\scr\ladderdown.sqs""";
			};
			class closeladder
			{
				displayName="$STR_il76td_UL";
				position="pos driver";
				radius = 5.6;
				showWindow = 0;
				onlyForplayer = 0;
				condition = "this animationPhase ""RC_ladder"" > 0.5 AND Alive(this)";
				statement = "[this] exec ""\il76td\scr\ladderup.sqs""";
            };
		    class loadcargo
			{
				onlyforplayer = false;
				displayName = "$STR_il76td_LC";
				position="pos driver";
				radius=16;
				showWindow = 0;
				condition = "((vehicle player != vehicle this) and (vehicle player != player) and (speed vehicle this < 5) AND Alive(this))";
				statement = "[this, vehicle player, player] execVM ""\il76td\scr\attach.sqf""";
			};
			class unloadcargo
			{
				onlyforplayer = false;
				displayName = "$STR_il76td_UC";
				position="pos driver";
				radius=30;
				showWindow = 0;
				condition = "(vehicle player != vehicle this) and (vehicle player != player) AND Alive(this)";
				statement = "[this, vehicle player, player] execVM ""\il76td\scr\detach.sqf""";
			};
			class unloadcargoall
			{
				onlyforplayer = false;
				displayName = "$STR_il76td_UCA";
				position="pos driver";
				radius=30;
				showWindow = 0;
				condition = "(player in this) and ((count (position this nearEntities 30)) > 1) and (getpos this select 2 > 300) AND Alive(this)";
				statement = "[this, vehicle player, player] execVM ""\il76td\scr\detachall.sqf""";
			};

			class parasoldiers
			{
				onlyforplayer = false;
				displayName="$STR_il76td_PG";
				position="pos driver";
				radius=30;
				showWindow = 0;
				condition = "(player in this) and (count crew (vehicle this) > 6) and (getpos this select 2 > 100) AND Alive(this)";
				statement="[this, player] execVM ""\il76td\scr\paragroup.sqf""";
			};

 		};
	};
	class il76td_BBC_blue : il76td
	{
		faction = "IL_76_faction_RUS";
		displayName="$STR_il76td_NAME7";
		hiddenSelections[]=
		{
            "e1_t",
            "e2_t",
            "f2_t",
            "f3_t",
            "t1_t",
            "w1_t"
        };
		hiddenSelectionsTextures[] =
		{
            "\il76td\liveries\BBC_blue\e1_t.paa",
            "\il76td\liveries\BBC_blue\e2_t.paa",
            "\il76td\liveries\BBC_blue\f2_t.paa",
            "\il76td\liveries\BBC_blue\f3_t.paa",
            "\il76td\liveries\BBC_blue\t1_t.paa",
            "\il76td\liveries\BBC_blue\w1_t.paa"
        };
	};
	class il76td_RussianAirForce : il76td
	{
		faction = "IL_76_faction_RUS";
		displayName="$STR_il76td_NAME29";
		hiddenSelections[]={
								"e1_t",
								"e2_t",
								"f2_t",
								"f3_t",
								"t1_t",
								"w1_t"
							};
		hiddenSelectionsTextures[] = 	{
											"\il76td\liveries\RussianAirForce\e1_t.paa",
											"\il76td\liveries\RussianAirForce\e2_t.paa",
											"\il76td\liveries\RussianAirForce\f2_t.paa",
											"\il76td\liveries\RussianAirForce\f3_t.paa",
											"\il76td\liveries\RussianAirForce\t1_t.paa",
											"\il76td\liveries\RussianAirForce\w1_t.paa"
										};
	};
	class il76td_3077 : il76td
	{
		faction = "IL_76_faction_IND";
		displayName="$STR_il76td_NAME16";
		hiddenSelections[]={
								"e1_t",
								"e2_t",
								"f2_t",
								"f3_t",
								"t1_t",
								"w1_t"
							};
		hiddenSelectionsTextures[] = 	{
											"\il76td\liveries\3077\e1_t.paa",
											"\il76td\liveries\3077\e2_t.paa",
											"\il76td\liveries\3077\f2_t.paa",
											"\il76td\liveries\3077\f3_t.paa",
											"\il76td\liveries\3077\t1_t.paa",
											"\il76td\liveries\3077\w1_t.paa"
										};
	};
	class il76td_78840 : il76td
	{
		faction = "IL_76_faction_RUS";
		displayName="$STR_il76td_NAME6";
		hiddenSelections[]={
								"e1_t",
								"e2_t",
								"f2_t",
								"f3_t",
								"t1_t",
								"w1_t"
							};
		hiddenSelectionsTextures[] = 	{
											"\il76td\liveries\78840\e1_t.paa",
											"\il76td\liveries\78840\e2_t.paa",
											"\il76td\liveries\78840\f2_t.paa",
											"\il76td\liveries\78840\f3_t.paa",
											"\il76td\liveries\78840\t1_t.paa",
											"\il76td\liveries\78840\w1_t.paa"
										};
	};
	class PlaneWreck
    {
        scope = 1;
    };
	class il76td_MRWreck: PlaneWreck
	{
		scope = 1;
		side=0;
		class Armory
		{
			disabled = 1;
		};
		model = "\il76td\il76Wreck.p3d";
		typicalCargo = {};
		irTarget = 0;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		transportSoldier = 1;
	};
};
