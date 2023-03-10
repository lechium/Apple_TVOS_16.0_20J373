//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BMSyncStreamID, NSDictionary;

@interface BMSyncPolicy : NSObject
{
    NSDictionary *_policyDictionary;	// 8 = 0x8
    BMSyncStreamID *_streamID;	// 16 = 0x10
}

+ (double)minimumTimeBetweenSyncsAttemptsForTransport:(unsigned long long)arg1;	// IMP=0x004000000001ea69
+ (double)minimumTimeBetweenSyncsForTransport:(unsigned long long)arg1;	// IMP=0x001000000001ea3d
+ (id)policyForStreamID:(id)arg1 forPlatform:(long long)arg2;	// IMP=0x001000000001e26b
+ (id)policyForStreamID:(id)arg1;	// IMP=0x001000000001e1d1
+ (id)syncableStreamIDsForPlatform:(long long)arg1;	// IMP=0x001000000001dfb3
+ (id)eventStringFromDescriptor:(id)arg1;	// IMP=0x001000000001defd
+ (id)syncableStreamIDs;	// IMP=0x001000000001de8a
+ (id)loadAdditionalSyncPolicyDictionaries;	// IMP=0x001000000001db16
+ (id)bmUserDefaultsString:(id)arg1;	// IMP=0x001000000001da3c
- (void).cxx_destruct;	// IMP=0x002000000001ee70
@property(readonly, nonatomic) BMSyncStreamID *streamID; // @synthesize streamID=_streamID;
- (id)registeredEventClass;	// IMP=0x001000000001ee49
- (_Bool)supportsSyncingWithPlatform:(long long)arg1 overTransport:(unsigned long long)arg2 inDirection:(unsigned long long)arg3;	// IMP=0x001000000001ed64
- (_Bool)supportsTransport:(unsigned long long)arg1 direction:(unsigned long long)arg2;	// IMP=0x001000000001ed4f
- (_Bool)_supportsTransport:(unsigned long long)arg1 direction:(unsigned long long)arg2 outSupportedDirections:(unsigned long long *)arg3;	// IMP=0x001000000001ec7e
- (unsigned long long)directionsSupportedForTransport:(unsigned long long)arg1;	// IMP=0x001000000001ea95
- (id)initWithStreamID:(id)arg1 policyDictionary:(id)arg2;	// IMP=0x001000000001d983

@end

