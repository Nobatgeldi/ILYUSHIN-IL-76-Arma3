class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		il_76_pilot="il_76_pilot";
		//commander="commander";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class il_76_pilot: Crew
		{
			file="\il76td\anim\pilot.rtm";
			interpolateTo[]=
			{
				"il76_pilot_dead",
				1
			};
		};
		class il_76_commander: Crew
		{
			file="\il76td\anim\commander.rtm";
			interpolateTo[]=
			{
				"il76_pilot_dead",
				1
			};
		};
		class il_76_pilot_dead: DefaultDie
		{
			actions="DeadActions";
			speed=0.5;
			looped="false";
			terminal=1;
			file="\il76td\anim\kia.rtm";
			connectTo[]=
			{
				"DeadState",
				0.1
			};
		};
	};
};
