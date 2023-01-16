//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface IXSCoordinatorManager : NSObject
{
    NSObject<OS_dispatch_queue> *_mapQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_createQueue;	// 16 = 0x10
    NSMutableDictionary *_identityToCoordinatorMap;	// 24 = 0x18
    NSMutableDictionary *_uuidToCoordinatorMap;	// 32 = 0x20
    NSMutableDictionary *_connectionToProcessScopedCoordinatorMap;	// 40 = 0x28
    NSMutableArray *_identityPriority;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x00200000000083dc
+ (id)prioritySaveURL;	// IMP=0x0010000000008352
+ (id)saveDir;	// IMP=0x00100000000082c5
+ (id)savePathForCoordinator:(id)arg1;	// IMP=0x00100000000081cf
- (void).cxx_destruct;	// IMP=0x002000000000d007
@property(readonly, nonatomic) NSMutableArray *identityPriority; // @synthesize identityPriority=_identityPriority;
@property(readonly, nonatomic) NSMutableDictionary *connectionToProcessScopedCoordinatorMap; // @synthesize connectionToProcessScopedCoordinatorMap=_connectionToProcessScopedCoordinatorMap;
@property(readonly, nonatomic) NSMutableDictionary *uuidToCoordinatorMap; // @synthesize uuidToCoordinatorMap=_uuidToCoordinatorMap;
@property(readonly, nonatomic) NSMutableDictionary *identityToCoordinatorMap; // @synthesize identityToCoordinatorMap=_identityToCoordinatorMap;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *createQueue; // @synthesize createQueue=_createQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *mapQueue; // @synthesize mapQueue=_mapQueue;
- (void)convertProcessScopedCoordinatorToGlobalScoped:(id)arg1;	// IMP=0x001000000000cdf0
- (void)connectionInvalidated:(id)arg1;	// IMP=0x001000000000c8b4
- (void)clearAllCoordinatorsForCreator:(unsigned long long)arg1;	// IMP=0x001000000000c509
- (void)_enumerateCoordinatorsForConnection:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000000bfe7
- (void)enumerateCoordinatorsApplicableToConnection:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000000bfd5
- (void)enumerateCoordinators:(CDUnknownBlockType)arg1;	// IMP=0x001000000000bfbe
- (_Bool)prioritizeCoordinator:(id)arg1;	// IMP=0x001000000000bf68
- (_Bool)prioritizeCoordinatorWithIdentity:(id)arg1;	// IMP=0x001000000000bccd
- (void)unregisterCoordinator:(id)arg1;	// IMP=0x001000000000bad1
- (void)performCreationBlockingOperation:(CDUnknownBlockType)arg1;	// IMP=0x001000000000ba05
- (id)coordinatorForIdentity:(id)arg1 connection:(id)arg2 error:(id *)arg3 creatingIfNotExisting:(CDUnknownBlockType)arg4;	// IMP=0x001000000000af42
- (id)_lookupCoordinatorForIdentity:(id)arg1 checkingScopeForConnection:(id)arg2 error:(id *)arg3;	// IMP=0x001000000000a9a1
- (id)_lookupCoordinatorForIdentity:(id)arg1;	// IMP=0x001000000000a7f3
- (id)coordinatorsForBundleIdentifier:(id)arg1;	// IMP=0x001000000000a5b0
- (id)coordinatorForIdentity:(id)arg1;	// IMP=0x001000000000a59e
- (id)coordinatorForUUID:(id)arg1;	// IMP=0x001000000000a387
- (_Bool)_coordinator:(id)arg1 isApplicableToConnection:(id)arg2;	// IMP=0x001000000000a28a
- (void)_onMapQueue_saveIdentityPriority;	// IMP=0x001000000000a025
- (_Bool)_onMapQueue_removeCoordinatorFromMaps:(id)arg1;	// IMP=0x0010000000009d1b
- (id)init;	// IMP=0x0010000000008469

@end

