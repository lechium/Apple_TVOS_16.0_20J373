//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface KVSpanMatchPolicy : NSObject
{
    unsigned int _options;	// 8 = 0x8
}

- (_Bool)allowAliasMatch;	// IMP=0x000000000000ef77
- (_Bool)prioritizeExactMatch;	// IMP=0x000000000000ef69
- (_Bool)allowApproxMatch;	// IMP=0x000000000000ef5c
- (_Bool)allowPartialMatch;	// IMP=0x000000000000ef51
- (float)absoluteThreshold;	// IMP=0x000000000000ef43
- (float)globalRelativeThreshold;	// IMP=0x000000000000ef35
- (float)regionalRelativeThreshold;	// IMP=0x000000000000ef27
- (float)priorScoreWeight;	// IMP=0x000000000000ef19
- (float)matchScoreWeight;	// IMP=0x000000000000ef0b
- (_Bool)useTopFive;	// IMP=0x000000000000ef03
- (_Bool)enableRankingWithPriors;	// IMP=0x000000000000eef5
- (id)description;	// IMP=0x000000000000ee7e
- (id)init;	// IMP=0x000000000000ee36
- (id)initWithOptions:(unsigned int)arg1;	// IMP=0x000000000000edfb

@end
