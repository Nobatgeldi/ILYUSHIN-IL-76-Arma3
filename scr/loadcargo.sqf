_plane = _this select 0;
_plane allowDamage false;

_pilot = driver _plane;
_pilot_grp = group _pilot;

_count = 30;

for [{_i=0}, {_i<_count}, {_i=_i+1}] do
{
	"O_T_Soldier_PG_F" createUnit [getPos _plane, _pilot_grp,"", 0.7, "PRIVATE"];
	_tunits = units _pilot_grp;
	_soldier = _tunits select (count(_tunits) -1);
	_soldier moveInCargo _plane;
};

_transport = "O_APC_Wheeled_02_rcws_F" createVehicle (position player);
_transport allowDamage false;
_transport attachTo [_plane,[0,-5,6.5]];
_transport setFuel 0;
sleep 5;
/*_vx = getpos _transport select 0;
_vy = getpos _transport select 1;
_vz = getpos _transport select 2;
hint format ["X: %1 Y: %2 Z: %3", _vx,_vy,_vz];*/
_transport enableSimulation false;


_plane allowDamage true;
if (true) exitWith {};
