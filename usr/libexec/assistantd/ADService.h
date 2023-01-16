//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSSet, NSString;
@protocol ADServiceDelegate;

@interface ADService : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSSet *_managedStorageDomains;	// 16 = 0x10
    NSArray *_firstUnlockRestrictedCommands;	// 24 = 0x18
    NSArray *_controlCenterLockRestrictedCommands;	// 32 = 0x20
    _Bool _requiresBootMaintenance;	// 40 = 0x28
    id <ADServiceDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000268a49
@property(nonatomic) __weak id <ADServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool requiresBootMaintenance; // @synthesize requiresBootMaintenance=_requiresBootMaintenance;
@property(copy, nonatomic) NSArray *controlCenterLockRestrictedCommands; // @synthesize controlCenterLockRestrictedCommands=_controlCenterLockRestrictedCommands;
@property(copy, nonatomic) NSArray *firstUnlockRestrictedCommands; // @synthesize firstUnlockRestrictedCommands=_firstUnlockRestrictedCommands;
@property(copy, nonatomic) NSSet *managedStorageDomains; // @synthesize managedStorageDomains=_managedStorageDomains;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (_Bool)isSystemService;	// IMP=0x00100000002689a4
- (void)getInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000268798
- (void)reload;	// IMP=0x0010000000268792
- (void)runMaintenanceWorkWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000268780
- (void)resetExternalResources;	// IMP=0x001000000026877a
- (void)cancelOperationsForRequestID:(id)arg1 forAssistantID:(id)arg2 fromRemote:(_Bool)arg3;	// IMP=0x0010000000268774
- (void)fetchSyncSnapshotForInfo:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000026875e
- (void)beginSyncForInfo:(id)arg1 chunkHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000268744
- (void)clearDomainObjects;	// IMP=0x001000000026873e
- (void)handleResponse:(id)arg1 toCommand:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000026872b
- (void)handleCommand:(id)arg1 forDomain:(id)arg2 executionContext:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00100000002686ae
- (void)preheatDomain:(id)arg1;	// IMP=0x00100000002686a8
- (id)lockRestrictedCommands;	// IMP=0x00100000002686a0
- (id)customVocabSyncInfo;	// IMP=0x0010000000268698
- (id)syncKeys;	// IMP=0x0010000000268690
- (_Bool)usesManagedStorageForDomain:(id)arg1;	// IMP=0x001000000026867a
- (_Bool)implementsCommand:(id)arg1 forDomain:(id)arg2;	// IMP=0x0010000000268672
- (id)commandsForDomain:(id)arg1;	// IMP=0x001000000026866a
- (id)domains;	// IMP=0x0010000000268662
- (id)handle;	// IMP=0x001000000026865a
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

