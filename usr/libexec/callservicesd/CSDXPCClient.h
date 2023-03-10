//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, NSString, NSXPCConnection;
@protocol TUFeatureFlags;

@interface CSDXPCClient
{
    _Bool _supportsClientAssertions;	// 8 = 0x8
    int _processIdentifier;	// 12 = 0xc
    NSString *_processName;	// 16 = 0x10
    NSString *_processBundleIdentifier;	// 24 = 0x18
    NSSet *_entitledCapabilities;	// 32 = 0x20
    id <TUFeatureFlags> _featureFlags;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000a3509
@property(readonly, nonatomic) id <TUFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
@property(readonly, copy, nonatomic) NSSet *entitledCapabilities; // @synthesize entitledCapabilities=_entitledCapabilities;
@property(nonatomic) _Bool supportsClientAssertions; // @synthesize supportsClientAssertions=_supportsClientAssertions;
- (id)processBundleIdentifier;	// IMP=0x00100000000a34b6
- (id)processName;	// IMP=0x00100000000a34a5
- (int)processIdentifier;	// IMP=0x00100000000a3495
- (void)invalidate;	// IMP=0x00100000000a3458
- (id)valueForEntitlement:(id)arg1;	// IMP=0x00100000000a33d5
- (_Bool)isEntitledForCapability:(id)arg1;	// IMP=0x00100000000a335e
- (void)performBlockAfterCoalescing:(CDUnknownBlockType)arg1;	// IMP=0x00100000000a3211
- (id)acquireAssertionIfNecessary;	// IMP=0x00100000000a3209
- (id)objectForBlock;	// IMP=0x00100000000a31b9
- (_Bool)isRemote;	// IMP=0x00100000000a31b1
- (void)dealloc;	// IMP=0x00100000000a3173
@property(readonly, nonatomic) NSXPCConnection *connection;
- (id)propertiesDescription;	// IMP=0x00100000000a30b2
- (id)initWithConnection:(id)arg1 queue:(id)arg2;	// IMP=0x00100000000a2d66

@end

