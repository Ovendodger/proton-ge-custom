extern HSteamPipe cppISteamClient_SteamClient020_CreateSteamPipe(void *);
extern bool cppISteamClient_SteamClient020_BReleaseSteamPipe(void *, HSteamPipe);
extern HSteamUser cppISteamClient_SteamClient020_ConnectToGlobalUser(void *, HSteamPipe);
extern HSteamUser cppISteamClient_SteamClient020_CreateLocalUser(void *, HSteamPipe *, EAccountType);
extern void cppISteamClient_SteamClient020_ReleaseUser(void *, HSteamPipe, HSteamUser);
extern void *cppISteamClient_SteamClient020_GetISteamUser(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient020_GetISteamGameServer(void *, HSteamUser, HSteamPipe, const char *);
extern void cppISteamClient_SteamClient020_SetLocalIPBinding(void *, const SteamIPAddress_t *, uint16);
extern void *cppISteamClient_SteamClient020_GetISteamFriends(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient020_GetISteamUtils(void *, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient020_GetISteamMatchmaking(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient020_GetISteamMatchmakingServers(void *, HSteamUser, HSteamPipe, const char *);
extern void * cppISteamClient_SteamClient020_GetISteamGenericInterface(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient020_GetISteamUserStats(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient020_GetISteamGameServerStats(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient020_GetISteamApps(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient020_GetISteamNetworking(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient020_GetISteamRemoteStorage(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient020_GetISteamScreenshots(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient020_GetISteamGameSearch(void *, HSteamUser, HSteamPipe, const char *);
extern void cppISteamClient_SteamClient020_RunFrame(void *);
extern uint32 cppISteamClient_SteamClient020_GetIPCCallCount(void *);
extern void cppISteamClient_SteamClient020_SetWarningMessageHook(void *, SteamAPIWarningMessageHook_t);
extern bool cppISteamClient_SteamClient020_BShutdownIfAllPipesClosed(void *);
extern void *cppISteamClient_SteamClient020_GetISteamHTTP(void *, HSteamUser, HSteamPipe, const char *);
extern void * cppISteamClient_SteamClient020_DEPRECATED_GetISteamUnifiedMessages(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient020_GetISteamController(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient020_GetISteamUGC(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient020_GetISteamAppList(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient020_GetISteamMusic(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient020_GetISteamMusicRemote(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient020_GetISteamHTMLSurface(void *, HSteamUser, HSteamPipe, const char *);
extern void cppISteamClient_SteamClient020_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess(void *, void *);
extern void cppISteamClient_SteamClient020_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess(void *, void *);
extern void cppISteamClient_SteamClient020_Set_SteamAPI_CCheckCallbackRegisteredInProcess(void *, SteamAPI_CheckCallbackRegistered_t);
extern void *cppISteamClient_SteamClient020_GetISteamInventory(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient020_GetISteamVideo(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient020_GetISteamParentalSettings(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient020_GetISteamInput(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient020_GetISteamParties(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient020_GetISteamRemotePlay(void *, HSteamUser, HSteamPipe, const char *);
extern void cppISteamClient_SteamClient020_DestroyAllInterfaces(void *);
