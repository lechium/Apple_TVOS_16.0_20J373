//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSObject, NSOperation, NSSet, NSString;
@protocol OS_dispatch_queue;

@interface CKKSProvideKeySetOperation
{
    NSDictionary *_keysets;	// 16 = 0x10
    NSSet *_intendedZoneIDs;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    NSOperation *_startDependency;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000b9306
@property(retain) NSOperation *startDependency; // @synthesize startDependency=_startDependency;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly) NSSet *intendedZoneIDs; // @synthesize intendedZoneIDs=_intendedZoneIDs;
@property(retain) NSDictionary *keysets; // @synthesize keysets=_keysets;
- (id);	// IMP=0x00100000000b927b
- (void)provideKeySets:(id)arg1;	// IMP=0x00100000000b91c9
- (id)initWithIntendedZoneIDs:(id)arg1;	// IMP=0x00100000000b90b3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

