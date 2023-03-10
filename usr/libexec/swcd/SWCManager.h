//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCListener, SWCDatabase, SWCDownloadScheduler, SWCDownloader;

@interface SWCManager : NSObject
{
    NSXPCListener *_xpcListener;	// 8 = 0x8
    struct optional<bool>;	// 16 = 0x10
    SWCDatabase *_database;	// 24 = 0x18
    SWCDownloader *_downloader;	// 32 = 0x20
    SWCDownloadScheduler *_downloadScheduler;	// 40 = 0x28
}

+ (id)beginListening;	// IMP=0x00200000000160f2
+ (id)new;	// IMP=0x00100000000160c4
- (id).cxx_construct;	// IMP=0x001000000001cab9
- (void).cxx_destruct;	// IMP=0x001000000001ca7b
@property(readonly) SWCDownloadScheduler *downloadScheduler; // @synthesize downloadScheduler=_downloadScheduler;
@property(readonly) SWCDownloader *downloader; // @synthesize downloader=_downloader;
@property(readonly) SWCDatabase *database; // @synthesize database=_database;
- (void)setAdditionalServiceDetailsForApplicationIdentifiers:(id)arg1 usingContentsOfDictionary:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001c379
- (void)setDeveloperModeEnabled:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001bf77
- (void)getDeveloperModeEnabledWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000001bedc
- (void)getTrackingDomains:(id)arg1 sources:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001bc01
- (void)removeSettingsForKeys:(id)arg1 serviceSpecifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001b88c
- (void)removeSettingsForKeys:(id)arg1 serviceType:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001b550
- (void)commitServiceSettings:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001afb6
- (void)getServiceSettingsWithServiceSpecifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001acf9
- (void)resetWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000001aab9
- (void)showWithVerbosity:(unsigned char)arg1 isTTY:(_Bool)arg2 fileDescriptor:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000019610
- (void)addAllAppsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000001939d
- (void)setUserApprovalState:(unsigned char)arg1 forServiceWithServiceSpecifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000018f1e
- (void)setDetails:(id)arg1 forServiceWithServiceSpecifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000188cd
- (void)removeServiceWithServiceSpecifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000182b7
- (void)addServiceWithServiceSpecifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000017c5c
- (void)getDetailsWithServiceSpecifier:(id)arg1 URL:(id)arg2 limit:(unsigned long long)arg3 callerAuditToken:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000017839
- (void)waitForSiteApprovalWithServiceSpecifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000176ba
- (void)downloader:(id)arg1 failedToDownloadAASAFileFromDomain:(id)arg2 error:(id)arg3;	// IMP=0x0010000000017374
- (void)downloader:(id)arg1 didDownloadAASAFileContainingJSONObject:(id)arg2 fromDomain:(id)arg3 downloadRoute:(unsigned char)arg4;	// IMP=0x00100000000171bb
- (void)downloader:(id)arg1 willDownloadAASAFileFromDomain:(id)arg2;	// IMP=0x00100000000170ac
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000016b46
- (void)updateEntriesForAllBundlesIgnoringCurrentState:(_Bool)arg1;	// IMP=0x0010000000016376
- (void)receiveSIGTERMSignal;	// IMP=0x001000000001633b
- (id)init;	// IMP=0x00100000000160cd
- (id)initWithDatabase:(id)arg1;	// IMP=0x0010000000015fc8
- (_Bool)_copyStagingDirectoryAtURL:(id)arg1 toAdditionalServiceDetailsDirectoriesForApplicationIdentifiers:(id)arg2 error:(id *)arg3;	// IMP=0x001000000001fc37
- (_Bool);	// IMP=0x001000000001f7e3
- (id)_createStagingDirectoryForAdditionalServiceDetailsReturningError:(id *)arg1;	// IMP=0x001000000001f555
- (id)_filterApplicationIdentifiers:(id)arg1 toMatchEntitlementOfXPCConnection:(id)arg2;	// IMP=0x001000000001f135
- (_Bool)_isDeveloperModeEnabled;	// IMP=0x001000000001f12d
- (_Bool)_setDeveloperModeEnabled:(_Bool)arg1 error:(id *)arg2;	// IMP=0x001000000001edc3
- (void)_authorizeDeveloperModeChangeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000001edae
- (id)_developerModeSemaphoreURL;	// IMP=0x001000000001ed01
- (_Bool)_connectionMayConnect:(id)arg1;	// IMP=0x001000000001eced
- (_Bool)_connectionIsEntitled:(id)arg1 forMutation:(_Bool)arg2;	// IMP=0x001000000001ec66
- (void)_waitForSiteApprovalWithServiceSpecifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001e279
- (id)_serviceDetailsWithEntry:(id)arg1;	// IMP=0x001000000001e1bf
- (id)_entriesWithServiceSpecifier:(id)arg1 URL:(id)arg2 limit:(unsigned long long)arg3 auditToken:(CDStruct_6ad76789)arg4;	// IMP=0x001000000001d95b
- (void)_updateAllEntries:(id)arg1;	// IMP=0x001000000001cd5d
- (void)_addEntriesForAllBundlesWithEnumerator:(id)arg1 toWorkingSet:(id)arg2 enterpriseContext:(id)arg3 developerModeEnabled:(_Bool)arg4;	// IMP=0x001000000001cac8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

