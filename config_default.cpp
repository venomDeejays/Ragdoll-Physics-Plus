//i've included the vanilla ragdoll physics here, in case you want to start from scratch

class PhysXParams
{
	epeImpulseDamageCoef=30;
	impulseForceRagdollCoef=200;
	impulseTorqueRagdollCoef=75;
	impulseSpeedRagdollCoef=3;
	maxRagdollImpulseForceMagnitude=300;
	maxRagdollImpulseTorqueMagnitude=100;
	ragdollUnderwaterForceCoef=9.6000004;
	ragdollUnderwaterInitImpulseCoef=0.98000002;
	ragdollOnCollideSpeedLimit=4;
	ragdollOnCollideMassLimit=200;
	ragdollOnCollideForceCoef=0.1;
	ragdollOnCollideMaxForce=1;
	ragdollOnCollideMaxOffset=10;
	ragdollOnCollideMaxOffsetSpeed=100;
	ragdollHitTime=0.0099999998;
	ragdollHitForceCoef=3;
	ragdollHitDmgLimit=0.0099999998;
	wheelPointRejectLimitSpeed=5;
	wheelPointRejectAngle="Pi/4.0";
	wheelPointRejectAngleFast="Pi/3.0";
	wheelNormalRejectAngle="Pi/4.0";
	wheelNormalRejectAngleFast="Pi/2.4";
};
class RagDollDefaultLimit
{
	value=30;
	restitution=0.25;
	hardness=1;
};
class RagDollDefaultSpring
{
	enabled=1;
	value=1;
	damper=1;
	targetValue=0;
};
class RagDollSphericalJoint
{
	class TwistLimitLow: RagDollDefaultLimit
	{
	};
	class TwistLimitHigh: RagDollDefaultLimit
	{
	};
	class SwingLimit: RagDollDefaultLimit
	{
	};
	class TwistSpring: RagDollDefaultSpring
	{
		enabled=1;
	};
	class SwingSpring: RagDollDefaultSpring
	{
		enabled=1;
		damper=2;
	};
	class JointSpring: RagDollDefaultSpring
	{
		enabled=1;
	};
	type="spherical";
	enableCollision=0;
	projectionDistance=0.050000001;
	projectionMode="point";
};
class RagDollRevoluteJoint
{
	class LimitLow: RagDollDefaultLimit
	{
	};
	class LimitHigh: RagDollDefaultLimit
	{
	};
	class Spring: RagDollDefaultSpring
	{
		enabled=1;
	};
	type="revolute";
	enableCollision=0;
	projectionDistance=0.050000001;
	projectionMode="point";
};
class RagDollD6Joint_PX3
{
	type="D6";
	enableCollision=0;
	projectionDistance=0.050000001;
	projectionMode="point";
	swingLimitY=0;
	swingLimitZ=0;
	swingSpring=0;
	swingDamping=0;
	swingRestitution=0.30000001;
	swingContactDistance=0.050000001;
	twistLimitLower=0;
	twistLimitUpper=0;
	twistSpring=0;
	twistDamping=0;
	twistRestitution=0.40000001;
	twistContactDistance=0.050000001;
	driveSpring=550;
	driveDamping=100;
	driveMaxForce=100;
	driveUseAcceleration=1;
	driveLinearVelocity[]={0,0,0};
	driveAngularVelocity[]={0,0,0};
};
class CfgRagDollSkeletons
{
	class BaseRagdoll
	{
		primaryWeaponBone="";
		secondaryWeaponBone="";
		weaponSleepLinearVelocity=0.1;
		weaponSleepAngularVelocity=0.1;
		weaponDropMinTime=1;
		weaponDropMaxTime=3;
		weaponDistanceLimit=0.1;
		weaponDistanceLimitTime=2;
		sleepLinearVelocity=0.1;
		sleepAngularVelocity=0.1;
		simulateMinTime=1.5;
		simulateMaxTime=3;
		simulateDistanceLimit=0.5;
		simulateDistanceLimitTime=2;
		recoveryBlendTime=0.0099999998;
		recoveryCosLimit=-1;
		recoveryDistLimit=100;
		animBlendTime=0;
	};
	class Soldier: BaseRagdoll
	{
		primaryWeaponBone="weapon";
		secondaryWeaponBone="launcher";
		draggingMask="dragging";
		hitMask="hit";
		class WeaponLinkBones
		{
			class LinkBone1
			{
				bone="leftHand";
				canBeDropped=1;
				prefference=1;
			};
			class LinkBone2
			{
				bone="rightHand";
				canBeDropped=1;
				prefference=1;
			};
			class LinkBone3
			{
				bone="chest";
				canBeDropped=1;
				prefference=2;
			};
		};
		class Masks
		{
			class DraggingMask
			{
				name="dragging";
				mask[]=
				{
					
					{
						"pelvis",
						0,
						1
					},
					
					{
						"chest",
						0,
						1
					},
					
					{
						"head",
						1,
						0
					},
					
					{
						"leftArm",
						1,
						0
					},
					
					{
						"leftForeArm",
						1,
						0
					},
					
					{
						"leftHand",
						1,
						0
					},
					
					{
						"rightArm",
						1,
						0
					},
					
					{
						"rightForeArm",
						1,
						0
					},
					
					{
						"rightHand",
						1,
						0
					},
					
					{
						"leftUpLeg",
						1,
						0
					},
					
					{
						"leftLeg",
						1,
						0
					},
					
					{
						"leftFoot",
						1,
						0
					},
					
					{
						"rightUpLeg",
						1,
						0
					},
					
					{
						"rightLeg",
						1,
						0
					},
					
					{
						"rightFoot",
						1,
						0
					},
					
					{
						"weapon",
						0.2,
						1
					},
					
					{
						"launcher",
						0,
						1
					}
				};
			};
			class HitMask
			{
				name="hit";
				mask[]=
				{
					
					{
						"pelvis",
						0,
						1
					},
					
					{
						"chest",
						1,
						0
					},
					
					{
						"head",
						1,
						0
					},
					
					{
						"leftArm",
						1,
						0
					},
					
					{
						"leftForeArm",
						1,
						0
					},
					
					{
						"leftHand",
						1,
						0
					},
					
					{
						"rightArm",
						1,
						0
					},
					
					{
						"rightForeArm",
						1,
						0
					},
					
					{
						"rightHand",
						1,
						0
					},
					
					{
						"leftUpLeg",
						0,
						1
					},
					
					{
						"leftLeg",
						0,
						1
					},
					
					{
						"leftFoot",
						0,
						1
					},
					
					{
						"rightUpLeg",
						0,
						1
					},
					
					{
						"rightLeg",
						0,
						1
					},
					
					{
						"rightFoot",
						0,
						1
					},
					
					{
						"weapon",
						0,
						1
					},
					
					{
						"launcher",
						0,
						1
					}
				};
			};
		};
		class BaseRagdollBone
		{
			material="Ragdoll";
			childrenUseStartTrans=1;
		};
		class Bones
		{
			class Pelvis: BaseRagdollBone
			{
				name="pelvis";
				type="box";
				size[]={0.11,0.12,0.20999999};
				startBone="pelvis";
				endBone="spine2";
				mass=36;
			};
			class Chest: BaseRagdollBone
			{
				name="chest";
				startBone="spine2";
				endBone="head";
				type="box";
				size[]={0.11,0.14,0.19};
				mass=20;
			};
			class Head: BaseRagdollBone
			{
				name="head";
				type="sphere";
				startBone="head";
				mass=9.75;
				radius=0.12;
			};
			class LeftArm: BaseRagdollBone
			{
				name="leftArm";
				type="capsule";
				startBone="leftArm";
				endBone="leftForeArm";
				mass=9.75;
			};
			class LeftForeArm: BaseRagdollBone
			{
				name="leftForeArm";
				type="capsule";
				startBone="leftForeArm";
				endBone="leftHand";
				mass=12;
			};
			class LeftHand: BaseRagdollBone
			{
				name="leftHand";
				type="sphere";
				startBone="leftHand";
				mass=6;
				radius=0.079999998;
				childrenUseStartTrans=0;
			};
			class RightArm: BaseRagdollBone
			{
				name="rightArm";
				type="capsule";
				startBone="rightArm";
				endBone="rightForeArm";
				mass=9.75;
			};
			class RightForeArm: BaseRagdollBone
			{
				name="rightForeArm";
				type="capsule";
				startBone="rightForeArm";
				endBone="rightHand";
				mass=12;
			};
			class RightHand: BaseRagdollBone
			{
				name="rightHand";
				type="sphere";
				startBone="rightHand";
				mass=4;
				radius=0.079999998;
				childrenUseStartTrans=0;
			};
			class LeftUpLeg: BaseRagdollBone
			{
				name="leftUpLeg";
				type="capsule";
				startBone="leftUpLeg";
				endBone="leftLeg";
				mass=25.5;
			};
			class LeftLeg: BaseRagdollBone
			{
				name="leftLeg";
				type="capsule";
				startBone="leftLeg";
				endBone="leftFoot";
				mass=13;
			};
			class LeftFoot: BaseRagdollBone
			{
				name="leftFoot";
				type="box";
				startBone="leftFoot";
				size[]={0.15000001,0.050000001,0.07};
				mass=2.3;
			};
			class RightUpLeg: BaseRagdollBone
			{
				name="rightUpLeg";
				type="capsule";
				startBone="rightUpLeg";
				endBone="rightLeg";
				mass=25.5;
			};
			class RightLeg: BaseRagdollBone
			{
				name="rightLeg";
				type="capsule";
				startBone="rightLeg";
				endBone="rightFoot";
				mass=13;
			};
			class RightFoot: BaseRagdollBone
			{
				name="rightFoot";
				type="box";
				startBone="rightFoot";
				size[]={0.15000001,0.050000001,0.07};
				mass=2.3;
			};
			class Weapon: BaseRagdollBone
			{
				name="weapon";
				type="weapon";
				startBone="weapon";
				endPosRelToStart[]={0,0,0.40000001};
				mass=4;
			};
			class Launcher: BaseRagdollBone
			{
				name="launcher";
				type="weapon";
				startBone="launcher";
				endPosRelToStart[]={0,0,0.40000001};
				mass=9;
			};
		};
		class JointsPX3
		{
			class Chest_LeftArm_PX3: RagDollD6Joint_PX3
			{
				name="chest_leftArm";
				bone1="chest";
				bone2="leftArm";
				enableCollision=1;
				swingLimitY=5;
				swingLimitZ=15;
				twistLimitLower=-50;
				twistLimitUpper=50;
				swingSpring=25;
				swingDamping=25;
				twistSpring=1;
				twistDamping=25;
				driveSpring=15;
				driveDamping=30;
				driveSpringWater=3;
				driveDampingWater=3;
			};
			class Chest_RightArm_PX3: RagDollD6Joint_PX3
			{
				name="chest_rightArm";
				bone1="chest";
				bone2="rightArm";
				enableCollision=1;
				swingLimitY=15;
				swingLimitZ=15;
				twistLimitLower=-50;
				twistLimitUpper=50;
				swingSpring=25;
				swingDamping=25;
				twistSpring=1;
				twistDamping=25;
				driveSpring=15;
				driveDamping=30;
				driveSpringWater=3;
				driveDampingWater=3;
			};
			class Pelvis_LeftUpLeg_PX3: RagDollD6Joint_PX3
			{
				name="pelvis_leftUpLeg";
				bone1="pelvis";
				bone2="leftUpLeg";
				enableCollision=1;
				swingLimitY=1;
				swingLimitZ=1;
				twistLimitLower=-80;
				twistLimitUpper=80;
				swingSpring=5;
				swingDamping=5;
				twistSpring=5;
				twistDamping=5;
				driveSpring=550;
				driveDamping=130;
				driveSpringWater=3;
				driveDampingWater=3;
			};
			class Pelvis_RightUpLeg_PX3: RagDollD6Joint_PX3
			{
				name="pelvis_rightUpLeg";
				bone1="pelvis";
				bone2="rightUpLeg";
				enableCollision=1;
				swingLimitY=1;
				swingLimitZ=1;
				twistLimitLower=-80;
				twistLimitUpper=80;
				swingSpring=1;
				swingDamping=5;
				twistSpring=5;
				twistDamping=5;
				driveSpring=550;
				driveDamping=130;
				driveSpringWater=3;
				driveDampingWater=3;
			};
			class LeftArm_LeftForeArm_PX3: RagDollD6Joint_PX3
			{
				name="leftArm_leftForeArm";
				bone1="leftArm";
				bone2="leftForeArm";
				axis[]={-1,1,-0.2};
				swingLimitY=10;
				swingLimitZ=10;
				twistLimitLower=-5;
				twistLimitUpper=150;
				driveSpring=10;
				driveDamping=10;
				driveSpringWater=1;
				driveDampingWater=1;
			};
			class LeftForeArm_LeftHand_PX3: RagDollD6Joint_PX3
			{
				name="leftForeArm_leftHand";
				bone1="leftForeArm";
				bone2="leftHand";
				swingLimitY=10;
				swingLimitZ=10;
				twistLimitLower=-20;
				twistLimitUpper=20;
				driveSpring=10;
				driveDamping=10;
				driveSpringWater=1;
				driveDampingWater=1;
			};
			class RightArm_RightForeArm_PX3: RagDollD6Joint_PX3
			{
				name="rightArm_rightForeArm";
				bone1="rightArm";
				bone2="rightForeArm";
				axis[]={-1,-1,0.2};
				swingLimitY=10;
				swingLimitZ=10;
				twistLimitLower=-5;
				twistLimitUpper=150;
				driveSpring=10;
				driveDamping=10;
				driveSpringWater=1;
				driveDampingWater=1;
			};
			class RightForeArm_RightHand_PX3: RagDollD6Joint_PX3
			{
				name="rightForeArm_rightHand";
				bone1="rightForeArm";
				bone2="rightHand";
				swingLimitY=10;
				swingLimitZ=10;
				twistLimitLower=-20;
				twistLimitUpper=20;
				driveSpring=10;
				driveDamping=10;
				driveSpringWater=1;
				driveDampingWater=1;
			};
			class LeftUpLeg_LeftLeg_PX3: RagDollD6Joint_PX3
			{
				name="leftUpLeg_leftLeg";
				bone1="leftUpLeg";
				bone2="leftLeg";
				axis[]={1,0,0};
				swingLimitY=1;
				swingLimitZ=0.0099999998;
				twistLimitLower=0;
				twistLimitUpper=15;
				twistSpring=5;
				twistDamping=15;
				driveSpring=550;
				driveDamping=30;
				driveSpringWater=2;
				driveDampingWater=2;
			};
			class LeftLeg_LeftFoot_PX3: RagDollD6Joint_PX3
			{
				name="leftLeg_leftFoot";
				bone1="leftLeg";
				bone2="leftFoot";
				axis[]={1,0,0};
				enableCollision=1;
				swingLimitY=5;
				swingLimitZ=5;
				twistLimitLower=-15;
				twistLimitUpper=45;
				driveSpring=20;
				driveDamping=20;
				driveSpringWater=2;
				driveDampingWater=2;
			};
			class RightUpLeg_RightLeg_PX3: RagDollD6Joint_PX3
			{
				name="rightUpLeg_rightLeg";
				bone1="rightUpLeg";
				bone2="rightLeg";
				axis[]={1,0,0};
				swingLimitY=1;
				swingLimitZ=0.0099999998;
				twistLimitLower=0;
				twistLimitUpper=15;
				twistSpring=5;
				twistDamping=15;
				driveSpring=550;
				driveDamping=30;
				driveSpringWater=2;
				driveDampingWater=2;
			};
			class RightLeg_RightFoot_PX3: RagDollD6Joint_PX3
			{
				name="rightLeg_rightFoot";
				bone1="rightLeg";
				bone2="rightFoot";
				axis[]={1,0,0};
				enableCollision=1;
				swingLimitY=5;
				swingLimitZ=5;
				twistLimitLower=-15;
				twistLimitUpper=45;
				driveSpring=20;
				driveDamping=20;
				driveSpringWater=2;
				driveDampingWater=2;
			};
		};
	};
};