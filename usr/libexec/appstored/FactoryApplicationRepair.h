//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSProcessInfo, ApplicationProxy, NSArray, NSString, UnfairLock;
@protocol AMSBagProtocol, ApplicationRepairDelegate;

@interface FactoryApplicationRepair : NSObject
{
    ApplicationProxy *_application;	// 8 = 0x8
    AMSProcessInfo *_clientInfo;	// 16 = 0x10
    id <AMSBagProtocol> _bag;	// 24 = 0x18
    UnfairLock *_lock;	// 32 = 0x20
    NSString *_logUUID;	// 40 = 0x28
    _Bool _establishesActiveAccount;	// 48 = 0x30
    _Bool _ignoresPreviousClaimAttempts;	// 49 = 0x31
    id <ApplicationRepairDelegate> _delegate;	// 56 = 0x38
    NSArray *_repairedBundleIDs;	// 64 = 0x40
}

+ (void)_setClaimBuildVersion:(id)arg1 forAccount:(id)arg2;	// IMP=0x0020000000093a5f
+ (id)_requestParametersWithAccount:(id)arg1 unclaimedApps:(id)arg2 logUUID:(id)arg3;	// IMP=0x00100000000938c1
+ (id)_lastClaimBuildVersionWithAccount:(id)arg1;	// IMP=0x001000000009353d
+ (_Bool)_isFactoryInstallAppProxy:(id)arg1 logUUID:(id)arg2;	// IMP=0x0010000000092f6f
+ (id)_copyUnclaimedApplicationsWithLogUUID:(id)arg1;	// IMP=0x0010000000092a78
+ (_Bool)shouldAttemptToRepairApplication:(id)arg1 options:(id)arg2 logUUID:(id)arg3;	// IMP=0x0010000000091a01
- (void).cxx_destruct;	// IMP=0x0020000000094e90
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleEngagementRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000094e27
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleAuthenticateRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000094c34
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleDialogRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000094982
- (id)_updateAppsUsingResponseDictionary:(id)arg1 account:(id)arg2;	// IMP=0x0010000000093b54
- (id)_performClaimForAccount:(id)arg1 unclaimedApplications:(id)arg2 error:(id *)arg3;	// IMP=0x001000000009363d
- (id)_attemptAuthenticationWithRequest:(id)arg1 error:(id *)arg2;	// IMP=0x001000000009260d
- (_Bool)repairApplication:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000091af5
@property(readonly, nonatomic) NSString *repairType;
- (void)setRepairedBundleIDs:(id)arg1;	// IMP=0x0010000000091935
@property(readonly, nonatomic) NSArray *repairedBundleIDs; // @synthesize repairedBundleIDs=_repairedBundleIDs;
@property(retain, nonatomic) NSString *logUUID; // @synthesize logUUID=_logUUID;
@property(readonly, nonatomic) int fairPlayStatus;
@property(nonatomic) __weak id <ApplicationRepairDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool ignoresPreviousClaimAttempts; // @synthesize ignoresPreviousClaimAttempts=_ignoresPreviousClaimAttempts;
@property(nonatomic) _Bool establishesActiveAccount; // @synthesize establishesActiveAccount=_establishesActiveAccount;
- (id)initWithApplication:(id)arg1 clientInfo:(id)arg2;	// IMP=0x00100000000911ab
- (id)init;	// IMP=0x0010000000091128

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

