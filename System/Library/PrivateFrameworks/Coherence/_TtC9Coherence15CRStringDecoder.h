//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC9Coherence15CRStringDecoder : NSObject
{
    MISSING_TYPE *encoded;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *subsequence;	// 0 = 0x0
    MISSING_TYPE *decoder;	// 4247312 = 0x40cf10
}

- (void).cxx_destruct;	// IMP=0x000000000012d270
- (id)init;	// IMP=0x000000000012d220
- (unsigned int)substringChild:(long long)arg1;	// IMP=0x000000000012d160
- (long long)substringChildCount;	// IMP=0x000000000012d140
- (long long)substringContentOptions;	// IMP=0x000000000012d080
- (unsigned int)substringLength;	// IMP=0x000000000012cfd0
- (unsigned int)substringRemovedAddedByCounter:(long long)arg1;	// IMP=0x000000000012cf90
- (id)substringRemovedAddedByReplica:(long long)arg1 withError:(id *)arg2;	// IMP=0x000000000012cd30
- (long long)substringRemovedAddedByCount;	// IMP=0x000000000012ca00
- (unsigned int)substringAddedByCounter:(long long)arg1;	// IMP=0x000000000012c9c0
- (id)substringAddedByReplica:(long long)arg1 withError:(id *)arg2;	// IMP=0x000000000012c980
- (long long)substringAddedByCount;	// IMP=0x000000000012c940
- (unsigned int)substringCharClock;	// IMP=0x000000000012c900
- (id)substringCharReplicaWithError:(id *)arg1;	// IMP=0x000000000012c690
- (void)decodeSubstring:(long long)arg1;	// IMP=0x000000000012c2a0
- (long long)substringCount;	// IMP=0x000000000012c0a0
- (id)fromAddedByVersionWithError:(id *)arg1;	// IMP=0x000000000012c000
- (id)fromVersionWithError:(id *)arg1;	// IMP=0x000000000012bfb0
- (id)addedByVersionWithError:(id *)arg1;	// IMP=0x000000000012bf60
- (id)versionWithError:(id *)arg1;	// IMP=0x000000000012bb30
- (id)storageWithError:(id *)arg1;	// IMP=0x000000000012ba60

@end

