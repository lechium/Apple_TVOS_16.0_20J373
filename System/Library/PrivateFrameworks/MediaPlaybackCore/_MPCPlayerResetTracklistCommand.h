//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface _MPCPlayerResetTracklistCommand
{
    _Bool _supportsSetQueueCommand;	// 8 = 0x8
    NSArray *_devices;	// 16 = 0x10
    NSDictionary *_supportedSpecializedQueues;	// 24 = 0x18
    NSSet *_supportedQueueTypes;	// 32 = 0x20
    NSSet *_supportedCustomDataQueueIdentifiers;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000010a9ad
@property(retain, nonatomic) NSSet *supportedCustomDataQueueIdentifiers; // @synthesize supportedCustomDataQueueIdentifiers=_supportedCustomDataQueueIdentifiers;
@property(retain, nonatomic) NSSet *supportedQueueTypes; // @synthesize supportedQueueTypes=_supportedQueueTypes;
@property(nonatomic) _Bool supportsSetQueueCommand; // @synthesize supportsSetQueueCommand=_supportsSetQueueCommand;
@property(retain, nonatomic) NSDictionary *supportedSpecializedQueues; // @synthesize supportedSpecializedQueues=_supportedSpecializedQueues;
@property(copy, nonatomic) NSArray *devices; // @synthesize devices=_devices;
- (id)replaceWithPlaybackIntent:(id)arg1 replaceIntent:(long long)arg2;	// IMP=0x000000000010a40e
- (id)replaceWithPlaybackIntent:(id)arg1;	// IMP=0x000000000010a3f7
- (id)clearUpNextItems;	// IMP=0x000000000010a2a1
- (id)clear;	// IMP=0x000000000010a0bf
@property(readonly, nonatomic) NSArray *specializedIntents;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
