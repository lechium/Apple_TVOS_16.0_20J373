//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPPetsRegion : NSObject
{
    float _confidence;	// 8 = 0x8
    struct CGRect _bound;	// 16 = 0x10
}

@property float confidence; // @synthesize confidence=_confidence;
@property struct CGRect bound; // @synthesize bound=_bound;
- (id)initWith:(struct CGRect)arg1 confidence:(float)arg2;	// IMP=0x000000000000303e

@end
