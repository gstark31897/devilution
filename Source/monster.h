/*
 * UNPUBLISHED -- Rights  reserved  under  the  copyright  laws  of the
 * United States.  Use  of a copyright notice is precautionary only and
 * does not imply publication or disclosure.
 *
 * THIS DOCUMENTATION CONTAINS CONFIDENTIAL AND PROPRIETARY INFORMATION
 * OF    BLIZZARD   ENTERTAINMENT.    ANY   DUPLICATION,  MODIFICATION,
 * DISTRIBUTION, OR DISCLOSURE IS STRICTLY PROHIBITED WITHOUT THE PRIOR
 * EXPRESS WRITTEN PERMISSION OF BLIZZARD ENTERTAINMENT.
 */

//monster
extern int MissileFileFlag; // weak
extern int monster_cpp_init_value; // weak
extern int monstkills[200];
extern int monstactive[200];
extern int nummonsters;
extern int sgbSaveSoundOn; // weak
extern MonsterStruct monster[200];
extern int totalmonsters; // weak
extern CMonster Monsters[16];
// int END_Monsters_17; // weak
extern int monstimgtot; // weak
extern int uniquetrans;
extern int nummtypes;

void __cdecl monster_cpp_init();
void __fastcall InitMonsterTRN(int monst, int special);
void __cdecl InitLevelMonsters();
int __fastcall AddMonsterType(int type, int placeflag);
void __cdecl GetLevelMTypes();
void __fastcall InitMonsterGFX(int monst);
void __fastcall ClearMVars(int i);
void __fastcall InitMonster(int i, int rd, int mtype, int x, int y);
void __cdecl ClrAllMonsters();
bool __fastcall MonstPlace(int xp, int yp);
void __fastcall PlaceMonster(int i, int mtype, int x, int y);
void __fastcall PlaceUniqueMonst(int uniqindex, int miniontype, int unpackfilesize);
void __cdecl PlaceQuestMonsters();
void __fastcall PlaceGroup(int mtype, int num, unsigned char leaderf, int leader);
void __cdecl LoadDiabMonsts();
void __cdecl InitMonsters();
void __cdecl PlaceUniques();
void __fastcall SetMapMonsters(char *pMap, int startx, int starty);
void __fastcall DeleteMonster(int i);
int __fastcall AddMonster(int x, int y, int dir, int mtype, int InMap);
void __fastcall NewMonsterAnim(int i, AnimStruct *anim, int md);
bool __fastcall M_Ranged(int i);
bool __fastcall M_Talker(int i);
void __fastcall M_Enemy(int i);
int __fastcall M_GetDir(int i);
void __fastcall M_CheckEFlag(int i);
void __fastcall M_StartStand(int i, int md);
void __fastcall M_StartDelay(int i, int len);
void __fastcall M_StartSpStand(int i, int md);
void __fastcall M_StartWalk(int i, int xvel, int yvel, int xadd, int yadd, int EndDir);
void __fastcall M_StartWalk2(int i, int xvel, int yvel, int a4, int a5, int a6, int a7, int EndDir);
void __fastcall M_StartWalk3(int i, int xvel, int yvel, int a4, int a5, int a6, int a7, int a8, int a9, int EndDir);
void __fastcall M_StartAttack(int i);
void __fastcall M_StartRAttack(int i, int missile_type, int dam);
void __fastcall M_StartRSpAttack(int i, int missile_type, int dam);
void __fastcall M_StartSpAttack(int i);
void __fastcall M_StartEat(int i);
void __fastcall M_ClearSquares(int i);
void __fastcall M_GetKnockback(int i);
void __fastcall M_StartHit(int i, int pnum, int dam);
void __fastcall M_DiabloDeath(int i, unsigned char sendmsg);
void __fastcall M2MStartHit(int mid, int i, int dam);
void __fastcall MonstStartKill(int i, int pnum, unsigned char sendmsg);
void __fastcall M2MStartKill(int i, int mid);
void __fastcall M_StartKill(int i, int pnum);
void __fastcall M_SyncStartKill(int i, int x, int y, int pnum);
void __fastcall M_StartFadein(int i, int md, unsigned char backwards);
void __fastcall M_StartFadeout(int i, int md, unsigned char backwards);
void __fastcall M_StartHeal(int i);
void __fastcall M_ChangeLightOffset(int monst);
int __fastcall M_DoStand(int i);
int __fastcall M_DoWalk(int i);
int __fastcall M_DoWalk2(int i);
int __fastcall M_DoWalk3(int i);
void __fastcall M_TryM2MHit(int i, int mid, int hper, int mind, int maxd);
void __fastcall M_TryH2HHit(int i, int pnum, int Hit, int MinDam, int MaxDam);
int __fastcall M_DoAttack(int i);
int __fastcall M_DoRAttack(int i);
int __fastcall M_DoRSpAttack(int i);
int __fastcall M_DoSAttack(int i);
int __fastcall M_DoFadein(int i);
int __fastcall M_DoFadeout(int i);
int __fastcall M_DoHeal(int i);
int __fastcall M_DoTalk(int i);
void __fastcall M_Teleport(int i);
int __fastcall M_DoGotHit(int i);
void __fastcall M_UpdateLeader(int i);
void __cdecl DoEnding();
void __cdecl PrepDoEnding();
int __fastcall M_DoDeath(int i);
int __fastcall M_DoSpStand(int i);
int __fastcall M_DoDelay(int i);
int __fastcall M_DoStone(int i);
void __fastcall M_WalkDir(int i, int md);
void __fastcall GroupUnity(int i);
bool __fastcall M_CallWalk(int i, int md);
bool __fastcall M_PathWalk(int i);
bool __fastcall M_CallWalk2(int i, int md);
bool __fastcall M_DumbWalk(int i, int md);
bool __fastcall M_RoundWalk(int i, int md, int *dir);
void __fastcall MAI_Zombie(int i);
void __fastcall MAI_SkelSd(int i);
bool __fastcall MAI_Path(int i);
void __fastcall MAI_Snake(int i);
void __fastcall MAI_Bat(int i);
void __fastcall MAI_SkelBow(int i);
void __fastcall MAI_Fat(int i);
void __fastcall MAI_Sneak(int i);
void __fastcall MAI_Fireman(int i);
void __fastcall MAI_Fallen(int i);
void __fastcall MAI_Cleaver(int i);
void __fastcall MAI_Round(int i, unsigned char special);
void __fastcall MAI_GoatMc(int i);
void __fastcall MAI_Ranged(int i, int missile_type, unsigned char special);
void __fastcall MAI_GoatBow(int i);
void __fastcall MAI_Succ(int i);
void __fastcall MAI_AcidUniq(int i);
void __fastcall MAI_Scav(int i);
void __fastcall MAI_Garg(int i);
void __fastcall MAI_RoundRanged(int i, int missile_type, unsigned char checkdoors, int dam, int lessmissiles);
void __fastcall MAI_Magma(int i);
void __fastcall MAI_Storm(int i);
void __fastcall MAI_Acid(int i);
void __fastcall MAI_Diablo(int i);
void __fastcall MAI_RR2(int i, int mistype, int dam);
void __fastcall MAI_Mega(int i);
void __fastcall MAI_Golum(int i);
void __fastcall MAI_SkelKing(int i);
void __fastcall MAI_Rhino(int i);
void __fastcall MAI_Counselor(int i);
void __fastcall MAI_Garbud(int i);
void __fastcall MAI_Zhar(int i);
void __fastcall MAI_SnotSpil(int i);
void __fastcall MAI_Lazurus(int i);
void __fastcall MAI_Lazhelp(int i);
void __fastcall MAI_Lachdanan(int i);
void __fastcall MAI_Warlord(int i);
void __cdecl DeleteMonsterList();
void __cdecl ProcessMonsters();
void __cdecl FreeMonsters();
bool __fastcall DirOK(int i, int mdir);
bool __fastcall PosOkMissile(int x, int y);
bool __fastcall CheckNoSolid(int x, int y);
bool __fastcall LineClearF(bool (__fastcall *Clear)(int, int), int x1, int y1, int x2, int y2);
bool __fastcall LineClear(int x1, int y1, int x2, int y2);
bool __fastcall LineClearF1(bool (__fastcall *Clear)(int, int, int), int monst, int x1, int y1, int x2, int y2);
void __fastcall SyncMonsterAnim(int i);
void __fastcall M_FallenFear(int x, int y);
void __fastcall PrintMonstHistory(int mt);
void __cdecl PrintUniqueHistory();
void __fastcall MissToMonst(int i, int x, int y);
bool __fastcall PosOkMonst(int i, int x, int y);
bool __fastcall PosOkMonst2(int i, int x, int y);
bool __fastcall PosOkMonst3(int i, int x, int y);
bool __fastcall IsSkel(int mt);
bool __fastcall IsGoat(int mt);
int __fastcall M_SpawnSkel(int x, int y, int dir);
void __fastcall ActivateSpawn(int i, int x, int y, int dir);
bool __fastcall SpawnSkeleton(int ii, int x, int y);
int __cdecl PreSpawnSkeleton();
void __fastcall TalktoMonster(int i);
void __fastcall SpawnGolum(int i, int x, int y, int mi);
bool __fastcall CanTalkToMonst(int m);
bool __fastcall CheckMonsterHit(int m, bool *ret);
int __fastcall encode_enemy(int m);
void __fastcall decode_enemy(int m, int enemy);

/* data */

extern int monster_inf; // weak
extern char plr2monst[9];
extern unsigned char counsmiss[4];

/* rdata */

extern MonsterData monsterdata[112];
extern char MonstConvTbl[128];
extern unsigned char MonstAvailTbl[112];
extern UniqMonstStruct UniqMonst[98];
extern int MWVel[24][3];
extern char animletter[7];
extern int left[8];
extern int right[8];
extern int opposite[8];
extern int offset_x[8];
extern int offset_y[8];

/* unused */
extern int rnd5[4];
extern int rnd10[4];
extern int rnd20[4];
extern int rnd60[4];
//

extern void (__fastcall *AiProc[])(int i);